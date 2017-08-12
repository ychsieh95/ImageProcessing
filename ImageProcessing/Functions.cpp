#include "Functions.h"

System::Drawing::Bitmap^ ConvertBmpTo24Bit(Bitmap^ bmpSrc) {
	if (bmpSrc->PixelFormat != Imaging::PixelFormat::Format24bppRgb) {
		Bitmap^ bit24Image = gcnew Bitmap(bmpSrc->Width, bmpSrc->Height, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
		Graphics^ gr = Graphics::FromImage(bit24Image);
		gr->DrawImage(bmpSrc, Rectangle(0, 0, bmpSrc->Width, bmpSrc->Height));
		return bit24Image;
	}
	else {
		return bmpSrc;
	}
}

System::Drawing::Bitmap^ ColorToGray(Bitmap^ bmpSrc) {
	if (bmpSrc->PixelFormat != Imaging::PixelFormat::Format24bppRgb) {
		bmpSrc = ConvertBmpTo24Bit(bmpSrc);
	}

	// �ŧi�I�}�Ϫ��榡
	Bitmap^ image = bmpSrc;
	// �ŧi�Ϲ��ϰ� (�]�w����Ū���B���ץ����Ϲ��ϰ�)
	Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
	// �ŧi���e�ת�������T
	int byteNumber_Width = image->Width * 3;
	// �ŧi�� BitmapData ���A�A��ܹ����Ȧ�m
	// ��Lock ���B�z�������d�� (�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ� (Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
	Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
	// �N int ���Ы��V Image ������ƪ��̫e����m
	IntPtr ptr = imageData->Scan0;
	// ���˼e�� - Byte ��Ƽe��
	int bytesOfSkip = imageData->Stride - byteNumber_Width;
	// �ŧi Byte �榡������
	Byte* p = (Byte *)((Void *)ptr);

	// Convert to gray scale
	for (int y = 0; y < image->Height; y++) {
		for (int x = 0; x < image->Width; x++) {
			unsigned char gray = (p[0] + p[1] + p[2]) / 3;
			p[0] = gray;
			p[1] = gray;
			p[2] = gray;
			p += 3;
		}
		p += bytesOfSkip;
	}
	image->UnlockBits(imageData);
	return image;
}

System::Void SelectPicture(String^ %stringPath, PictureBox^ %pictureBox, bool gray = false) {
	// �إ� OpenFileDialog ���
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;

	// �]�w Filter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
	openFileDialog->Filter = "�I�}�� (*.bmp)|*.bmp|All files (*.*)|*.*";
	// �w�]�ɮצW��
	openFileDialog->FileName = "";
	// �]�w���X��ܵ��������D�W��
	openFileDialog->Title = "���J�v��";
	// �]�w�ɮ׹�ܤ�����ثe�ҿ�����z����󪺯���
	openFileDialog->FilterIndex = 1;
	// ���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
		// �s�J path
		if (stringPath != nullptr) {
			stringPath = openFileDialog->FileName;
		}
		if (pictureBox != nullptr) {
			// �N������ɮ�Ū���åB�s��image1
			Bitmap^ image = gray ? ColorToGray(safe_cast<Bitmap^>(Image::FromFile(stringPath))) : safe_cast<Bitmap^>(Image::FromFile(stringPath));
			// ���image1��PictureBox1�u��W
			pictureBox->Image = image;
		}
	}
}

System::String^ SavePicture() {
	// �إ� SaveFileDialog ���
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;

	// �]�w Filter�A�ΥH���w�ϥΪ̰��T���ɮ�
	saveFileDialog->Filter = "�I�}�� (*.bmp)|*.bmp";
	// �w�]�ɮצW��
	saveFileDialog->FileName = "bitmap.bmp";
	// �]�w���X��ܵ��������D�W��
	saveFileDialog->Title = "�x�s�v��";
	// �]�w�ɮ׹�ܤ�����ثe�ҿ�����z����󪺯���
	saveFileDialog->FilterIndex = 1;
	// ���X�ɮ׿�ܵ��� (ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L 0 �Ӧr���A�h�P�_�O�� True�A�i�J�B�z�{��
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		return saveFileDialog->FileName;
	} 
	else {
		return String::Empty;
	}
}

const char* ConvertString(System::String^ str_s)
{
	IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str_s);

	const char* str_t = static_cast<char*>(ptrToNativeString.ToPointer());
	return str_t;
}