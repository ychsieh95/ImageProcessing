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

	// 宣告點陣圖的格式
	Bitmap^ image = bmpSrc;
	// 宣告圖像區域 (設定為欲讀取、欲修正的圖像區域)
	Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
	// 宣告為寬度的像素資訊
	int byteNumber_Width = image->Width * 3;
	// 宣告為 BitmapData 型態，表示像素值位置
	// 並Lock 欲處理的像素範圍 (避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式 (讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
	Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
	// 將 int 指標指向 Image 像素資料的最前面位置
	IntPtr ptr = imageData->Scan0;
	// 掃瞄寬度 - Byte 資料寬度
	int bytesOfSkip = imageData->Stride - byteNumber_Width;
	// 宣告 Byte 格式的指標
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
	// 建立 OpenFileDialog 控制項
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;

	// 設定 Filter，用以限定使用者開啟的檔案
	openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
	// 預設檔案名稱
	openFileDialog->FileName = "";
	// 設定跳出選擇視窗的標題名稱
	openFileDialog->Title = "載入影像";
	// 設定檔案對話方塊中目前所選取之篩選條件的索引
	openFileDialog->FilterIndex = 1;
	// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
		// 存入 path
		if (stringPath != nullptr) {
			stringPath = openFileDialog->FileName;
		}
		if (pictureBox != nullptr) {
			// 將選取的檔案讀取並且存至image1
			Bitmap^ image = gray ? ColorToGray(safe_cast<Bitmap^>(Image::FromFile(stringPath))) : safe_cast<Bitmap^>(Image::FromFile(stringPath));
			// 顯示image1於PictureBox1工具上
			pictureBox->Image = image;
		}
	}
}

System::String^ SavePicture() {
	// 建立 SaveFileDialog 控制項
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;

	// 設定 Filter，用以限定使用者除吋的檔案
	saveFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp";
	// 預設檔案名稱
	saveFileDialog->FileName = "bitmap.bmp";
	// 設定跳出選擇視窗的標題名稱
	saveFileDialog->Title = "儲存影像";
	// 設定檔案對話方塊中目前所選取之篩選條件的索引
	saveFileDialog->FilterIndex = 1;
	// 跳出檔案選擇視窗 (ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過 0 個字元，則判斷是為 True，進入處理程序
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