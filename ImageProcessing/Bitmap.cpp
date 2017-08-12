#include "Bitmap.h"
#include <stdio.h>					// ま C 夹非 I/O 畐ㄧ计
#include <stdlib.h>					// ま C 夹非そ畐ㄧ计

#define _CRT_SECURE_NO_DEPRECATE	// 磷 Compiler 瞷 _CRT_SECURE_NO_DEPRECATE 岿粇
#define STATUS_FALSE 0				// ボ False 篈

typedef unsigned	char	BYTE;
typedef unsigned	short	WORD;
typedef unsigned	long	DWORD;
typedef				long	LONG;

#pragma pack(push, 1)

typedef struct tagBITMAPFILEHEADER
{
	WORD	bfType = 0;			// specifies the file type
	DWORD	bfSize = 0;			// specifies the size in bytes of the bitmap file
	WORD	bfReserved1 = 0;	// reserved; must be 0
	WORD	bfReserved2 = 0;	// reserved; must be 0
	DWORD	bfOffBits = 0;		// species the offset in bytes from the bitmapfileheader to the bitmap bits
} BITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER
{
	DWORD	biSize = 0;	// specifies the number of bytes required by the struct
	LONG	biWidth = 0;	// specifies width in pixels
	LONG	biHeight = 0;	// species height in pixels
	WORD	biPlanes = 0;	// specifies the number of color planes, must be 1
	WORD	biBitCount = 0;	// specifies the number of bit per pixel
	DWORD	biCompression = 0;	// spcifies the type of compression
	DWORD	biSizeImage = 0;	// size of image in bytes
	LONG	biXPelsPerMeter = 0;	// number of pixels per meter in x axis
	LONG	biYPelsPerMeter = 0;	// number of pixels per meter in y axis
	DWORD	biClrUsed = 0;	// number of colors used by th ebitmap
	DWORD	biClrImportant = 0;	// number of colors that are important
} BITMAPINFOHEADER;

#pragma pack(pop)

int ImageProcessing::BitmapComputer(const char * sourceFileName, const char * targetFileName)
{
	/* ========== Open bitmap File ========== */
	// open file in read binary mode
	FILE *fptr_s;
	if (fopen_s(&fptr_s, sourceFileName, "rb") > 0)
	{
		printf("Error file read");
		return EOF;
	}

	/* ========== Bitmap File Header ========== */
	// read the bitmap file header
	BITMAPFILEHEADER bitmapFileHeader;
	fread(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, fptr_s);
	// verify that this is a bmp file by check bitmap id
	if (bitmapFileHeader.bfType != 0x4D42)
	{
		fclose(fptr_s);
		printf("Error file type");
		return EOF;
	}

	/* ========== Bitmap Info Header ========== */
	// read the bitmap info header
	BITMAPINFOHEADER bitmapInfoHeader;
	fread(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, fptr_s);
	// compute bitmap info header size_image
	if (bitmapInfoHeader.biSizeImage == 0)
	{
		bitmapInfoHeader.biSizeImage = bitmapInfoHeader.biWidth * bitmapInfoHeader.biHeight * (bitmapInfoHeader.biBitCount / 8);
	}

	/* ========== set file header size ========== */
	const LONG BITMAPHEADERSIZE = sizeof(BITMAPFILEHEADER) + bitmapInfoHeader.biSize;

	/* ========== Bitmap Color Table ========== */
	// allocate enough memory for the bitmap color table
	BYTE *bitmapColorTable = (BYTE *)malloc(bitmapFileHeader.bfOffBits - BITMAPHEADERSIZE);
	if (bitmapFileHeader.bfOffBits > 54)
	{
		// verify memory allocation
		if (!bitmapColorTable)
		{
			free(bitmapColorTable);
			fclose(fptr_s);
			printf("Error bitmap color table memory allocation");
			return EOF;
		}
		// move file point to the begging of bitmap color table
		fseek(fptr_s, BITMAPHEADERSIZE, SEEK_SET);
		// read in the bitmap color table
		fread(bitmapColorTable, sizeof(BYTE), bitmapFileHeader.bfOffBits - BITMAPHEADERSIZE, fptr_s);
	}

	/* ========== bitmap Image Data ========== */
	// allocate enough memory for the bitmap image data
	BYTE *bitmapImage = (BYTE *)malloc(bitmapInfoHeader.biSizeImage);
	// verify memory allocation
	if (!bitmapImage)
	{
		free(bitmapImage);
		fclose(fptr_s);
		printf("Error bitmap image data memory allocation");
		return EOF;
	}
	// move file point to the begging of bitmap data
	fseek(fptr_s, bitmapFileHeader.bfOffBits, SEEK_SET);
	// read in the bitmap image data
	fread(bitmapImage, bitmapInfoHeader.biSizeImage, 1, fptr_s);
	// make sure bitmap image data was read
	if (bitmapImage == NULL)
	{
		fclose(fptr_s);
		printf("Error bitmap image data read");
		return EOF;
	}

	switch (bitmapInfoHeader.biBitCount)
	{
	case 8:
		for (int i = 0; i < bitmapInfoHeader.biSizeImage; i++)
		{
			bitmapImage[i] = (bitmapImage[i] + 50) > 255 ? 255 : (bitmapImage[i] + 50);
		}
		break;

	case 24:
		for (int i = 0; i < bitmapInfoHeader.biSizeImage; i += 3)
		{
			BYTE tempRGB[3] = { bitmapImage[i + 2], bitmapImage[i + 1], bitmapImage[i + 0] };
			bitmapImage[i + 2] = tempRGB[1];
			bitmapImage[i + 1] = tempRGB[2];
			bitmapImage[i + 0] = tempRGB[0];
		}
		break;

	default:
		break;
	}

	/* ========== Write Bitmap File ========== */
	// wirte file in read binary mode
	FILE *fptr_t;
	if (fopen_s(&fptr_t, targetFileName, "wb") > 0)
	{
		printf("Error file write");
		return EOF;
	}

	// write the bitmap file header
	fwrite(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, fptr_t);

	// write the bitmap info header
	fwrite(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, fptr_t);

	// write the bitmap color table
	fwrite(bitmapColorTable, sizeof(BYTE), bitmapFileHeader.bfOffBits - BITMAPHEADERSIZE, fptr_t);

	// write in the bitmap image data
	fwrite(bitmapImage, sizeof(BYTE), bitmapInfoHeader.biSizeImage, fptr_t);

	// close file
	fclose(fptr_s);
	fclose(fptr_t);

	return 0;
}