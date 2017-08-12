#include "Bitmap.h"
#include "FmChart.h"
#include "Functions.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ImageProcessing::MyForm form;
	Application::Run(%form);
}