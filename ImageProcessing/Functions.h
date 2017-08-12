#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

System::Drawing::Bitmap^ ConvertBmpTo24Bit(Bitmap^ bmpSrc);
System::Drawing::Bitmap^ ColorToGray(Bitmap^ bmpSrc);
System::Void SelectPicture(String^ %stringPath, PictureBox^ %pictureBox, bool gray);
System::String^ SavePicture();
const char* ConvertString(System::String^ str_s);