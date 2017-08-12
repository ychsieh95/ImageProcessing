#pragma once

namespace ImageProcessing {

	#include <stdio.h>
	#include <stdlib.h>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ picture01FilePath = "";
	private: System::String^ picture11FilePath = "";
	private: System::String^ picture12FilePath = "";
	private: System::String^ picture21FilePath = "";
	private: System::String^ picture31FilePath = "";
	private: System::String^ picture41FilePath = "";
	private: System::String^ picture51FilePath = "";
	private: System::String^ picture61FilePath = "";
	private: System::String^ picture71FilePath = "";

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage0;
	private: System::Windows::Forms::Button^  button02;
	private: System::Windows::Forms::PictureBox^  pictureBox02;
	private: System::Windows::Forms::Button^  button01;
	private: System::Windows::Forms::PictureBox^  pictureBox01;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown21;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Panel^  panel21;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::LinkLabel^  linkLabel32;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Panel^  panel41;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::Button^  button533;
	private: System::Windows::Forms::Button^  button522;
	private: System::Windows::Forms::Button^  button511;
	private: System::Windows::Forms::Button^  button510;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox71;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox72;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage0 = (gcnew System::Windows::Forms::TabPage());
			this->button02 = (gcnew System::Windows::Forms::Button());
			this->pictureBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->pictureBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel32 = (gcnew System::Windows::Forms::LinkLabel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button533 = (gcnew System::Windows::Forms::Button());
			this->button522 = (gcnew System::Windows::Forms::Button());
			this->button511 = (gcnew System::Windows::Forms::Button());
			this->button510 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage0->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel41->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage0);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1590, 587);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage0
			// 
			this->tabPage0->Controls->Add(this->button02);
			this->tabPage0->Controls->Add(this->pictureBox02);
			this->tabPage0->Controls->Add(this->button01);
			this->tabPage0->Controls->Add(this->pictureBox01);
			this->tabPage0->Location = System::Drawing::Point(4, 26);
			this->tabPage0->Margin = System::Windows::Forms::Padding(4);
			this->tabPage0->Name = L"tabPage0";
			this->tabPage0->Padding = System::Windows::Forms::Padding(4);
			this->tabPage0->Size = System::Drawing::Size(1582, 557);
			this->tabPage0->TabIndex = 0;
			this->tabPage0->Text = L"Project 0";
			this->tabPage0->UseVisualStyleBackColor = true;
			// 
			// button02
			// 
			this->button02->Location = System::Drawing::Point(607, 371);
			this->button02->Margin = System::Windows::Forms::Padding(4);
			this->button02->Name = L"button02";
			this->button02->Size = System::Drawing::Size(75, 23);
			this->button02->TabIndex = 3;
			this->button02->Text = L"轉換";
			this->button02->UseVisualStyleBackColor = true;
			this->button02->Click += gcnew System::EventHandler(this, &MyForm::button02_Click);
			// 
			// pictureBox02
			// 
			this->pictureBox02->Location = System::Drawing::Point(349, 8);
			this->pictureBox02->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox02->Name = L"pictureBox02";
			this->pictureBox02->Size = System::Drawing::Size(333, 354);
			this->pictureBox02->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox02->TabIndex = 2;
			this->pictureBox02->TabStop = false;
			// 
			// button01
			// 
			this->button01->Location = System::Drawing::Point(266, 371);
			this->button01->Margin = System::Windows::Forms::Padding(4);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(75, 23);
			this->button01->TabIndex = 1;
			this->button01->Text = L"選圖";
			this->button01->UseVisualStyleBackColor = true;
			this->button01->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// pictureBox01
			// 
			this->pictureBox01->Location = System::Drawing::Point(8, 8);
			this->pictureBox01->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox01->Name = L"pictureBox01";
			this->pictureBox01->Size = System::Drawing::Size(333, 354);
			this->pictureBox01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox01->TabIndex = 0;
			this->pictureBox01->TabStop = false;
			this->pictureBox01->Click += gcnew System::EventHandler(this, &MyForm::pictureBox01_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->pictureBox13);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->pictureBox12);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->pictureBox11);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1582, 557);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Project 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(849, 376);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 17);
			this->label11->TabIndex = 7;
			this->label11->Text = L"0.0 I1 + 0.0 I2";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(948, 400);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 6;
			this->button14->Text = L"層疊 (2)";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(948, 370);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 5;
			this->button13->Text = L"層疊 (1)";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(690, 8);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(333, 354);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(607, 370);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 3;
			this->button12->Text = L"選圖 2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(349, 8);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(333, 354);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 2;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(266, 370);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 1;
			this->button11->Text = L"選圖 1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(8, 8);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(333, 354);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button24);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->numericUpDown21);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->pictureBox21);
			this->tabPage2->Controls->Add(this->panel21);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1582, 557);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"Project 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(448, 9);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(70, 25);
			this->button24->TabIndex = 6;
			this->button24->Text = L"PSNR";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(355, 9);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(87, 25);
			this->button23->TabIndex = 5;
			this->button23->Text = L"First-order";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(262, 9);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(87, 25);
			this->button22->TabIndex = 4;
			this->button22->Text = L"Zero-order";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->DecimalPlaces = 2;
			this->numericUpDown21->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown21->Location = System::Drawing::Point(87, 9);
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(169, 25);
			this->numericUpDown21->TabIndex = 2;
			this->numericUpDown21->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(6, 9);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 25);
			this->button21->TabIndex = 1;
			this->button21->Text = L"選圖";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(6, 40);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(512, 512);
			this->pictureBox21->TabIndex = 0;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// panel21
			// 
			this->panel21->AutoScroll = true;
			this->panel21->Controls->Add(this->pictureBox25);
			this->panel21->Controls->Add(this->pictureBox24);
			this->panel21->Controls->Add(this->label22);
			this->panel21->Controls->Add(this->pictureBox22);
			this->panel21->Controls->Add(this->label21);
			this->panel21->Controls->Add(this->pictureBox23);
			this->panel21->Location = System::Drawing::Point(524, 9);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(1053, 543);
			this->panel21->TabIndex = 10;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox25->Location = System::Drawing::Point(521, 538);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(512, 512);
			this->pictureBox25->TabIndex = 11;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox24->Location = System::Drawing::Point(3, 538);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(512, 512);
			this->pictureBox24->TabIndex = 10;
			this->pictureBox24->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(243, 518);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 17);
			this->label22->TabIndex = 9;
			this->label22->Text = L"PSNR : ";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox22->Location = System::Drawing::Point(3, 3);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(512, 512);
			this->pictureBox22->TabIndex = 3;
			this->pictureBox22->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 518);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 17);
			this->label21->TabIndex = 8;
			this->label21->Text = L"PSNR : ";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox23->Location = System::Drawing::Point(521, 3);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(512, 512);
			this->pictureBox23->TabIndex = 7;
			this->pictureBox23->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->linkLabel32);
			this->tabPage3->Controls->Add(this->button34);
			this->tabPage3->Controls->Add(this->button33);
			this->tabPage3->Controls->Add(this->button32);
			this->tabPage3->Controls->Add(this->pictureBox32);
			this->tabPage3->Controls->Add(this->button31);
			this->tabPage3->Controls->Add(this->pictureBox31);
			this->tabPage3->Location = System::Drawing::Point(4, 26);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1582, 557);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Project 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// linkLabel32
			// 
			this->linkLabel32->AutoSize = true;
			this->linkLabel32->Location = System::Drawing::Point(684, 521);
			this->linkLabel32->Name = L"linkLabel32";
			this->linkLabel32->Size = System::Drawing::Size(42, 17);
			this->linkLabel32->TabIndex = 5;
			this->linkLabel32->TabStop = true;
			this->linkLabel32->Text = L"Chart";
			this->linkLabel32->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel32_LinkClicked);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(524, 491);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(157, 27);
			this->button34->TabIndex = 4;
			this->button34->Text = L"Histogram Equalization";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(524, 458);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(157, 27);
			this->button33->TabIndex = 3;
			this->button33->Text = L"Histogram Stretch";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(524, 425);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(157, 27);
			this->button32->TabIndex = 2;
			this->button32->Text = L"Histogram Shrink";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Location = System::Drawing::Point(687, 6);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(512, 512);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 2;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(524, 392);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(157, 27);
			this->button31->TabIndex = 1;
			this->button31->Text = L"選圖";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Location = System::Drawing::Point(6, 6);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(512, 512);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 0;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyForm::pictureBox31_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button43);
			this->tabPage4->Controls->Add(this->button42);
			this->tabPage4->Controls->Add(this->button41);
			this->tabPage4->Controls->Add(this->panel41);
			this->tabPage4->Controls->Add(this->pictureBox41);
			this->tabPage4->Controls->Add(this->button44);
			this->tabPage4->Location = System::Drawing::Point(4, 26);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1582, 557);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Project 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(212, 521);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(122, 27);
			this->button43->TabIndex = 4;
			this->button43->Text = L"Uniform Noise";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(84, 521);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(122, 27);
			this->button42->TabIndex = 3;
			this->button42->Text = L"Gaussian Noise";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(3, 521);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(75, 27);
			this->button41->TabIndex = 2;
			this->button41->Text = L"選圖";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// panel41
			// 
			this->panel41->AutoScroll = true;
			this->panel41->Controls->Add(this->pictureBox44);
			this->panel41->Controls->Add(this->pictureBox43);
			this->panel41->Controls->Add(this->pictureBox42);
			this->panel41->Location = System::Drawing::Point(521, 3);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(1058, 551);
			this->panel41->TabIndex = 1;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Location = System::Drawing::Point(1039, 0);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(512, 512);
			this->pictureBox44->TabIndex = 3;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Location = System::Drawing::Point(521, 0);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(512, 512);
			this->pictureBox43->TabIndex = 2;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Location = System::Drawing::Point(3, 0);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(512, 512);
			this->pictureBox42->TabIndex = 1;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Location = System::Drawing::Point(3, 3);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(512, 512);
			this->pictureBox41->TabIndex = 0;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &MyForm::pictureBox41_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(340, 521);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(122, 27);
			this->button44->TabIndex = 5;
			this->button44->Text = L"Impulse Noise";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button533);
			this->tabPage5->Controls->Add(this->button522);
			this->tabPage5->Controls->Add(this->button511);
			this->tabPage5->Controls->Add(this->button510);
			this->tabPage5->Controls->Add(this->button59);
			this->tabPage5->Controls->Add(this->button58);
			this->tabPage5->Controls->Add(this->button57);
			this->tabPage5->Controls->Add(this->button56);
			this->tabPage5->Controls->Add(this->button55);
			this->tabPage5->Controls->Add(this->button54);
			this->tabPage5->Controls->Add(this->label3);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Controls->Add(this->button53);
			this->tabPage5->Controls->Add(this->button52);
			this->tabPage5->Controls->Add(this->button51);
			this->tabPage5->Controls->Add(this->pictureBox52);
			this->tabPage5->Controls->Add(this->pictureBox51);
			this->tabPage5->Location = System::Drawing::Point(4, 26);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1582, 557);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Project 5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button533
			// 
			this->button533->Location = System::Drawing::Point(666, 491);
			this->button533->Name = L"button533";
			this->button533->Size = System::Drawing::Size(65, 27);
			this->button533->TabIndex = 15;
			this->button533->Text = L"T = 4";
			this->button533->UseVisualStyleBackColor = true;
			this->button533->Click += gcnew System::EventHandler(this, &MyForm::button533_Click);
			// 
			// button522
			// 
			this->button522->Location = System::Drawing::Point(595, 491);
			this->button522->Name = L"button522";
			this->button522->Size = System::Drawing::Size(65, 27);
			this->button522->TabIndex = 14;
			this->button522->Text = L"T = 2";
			this->button522->UseVisualStyleBackColor = true;
			this->button522->Click += gcnew System::EventHandler(this, &MyForm::button522_Click);
			// 
			// button511
			// 
			this->button511->Location = System::Drawing::Point(524, 491);
			this->button511->Name = L"button511";
			this->button511->Size = System::Drawing::Size(65, 27);
			this->button511->TabIndex = 13;
			this->button511->Text = L"T = 1";
			this->button511->UseVisualStyleBackColor = true;
			this->button511->Click += gcnew System::EventHandler(this, &MyForm::button511_Click);
			// 
			// button510
			// 
			this->button510->Location = System::Drawing::Point(595, 422);
			this->button510->Name = L"button510";
			this->button510->Size = System::Drawing::Size(65, 27);
			this->button510->TabIndex = 11;
			this->button510->Text = L"5 x 5";
			this->button510->UseVisualStyleBackColor = true;
			this->button510->Click += gcnew System::EventHandler(this, &MyForm::button510_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(524, 422);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(65, 27);
			this->button59->TabIndex = 10;
			this->button59->Text = L"3 x 3";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(808, 359);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(65, 27);
			this->button58->TabIndex = 8;
			this->button58->Text = L"21 x 21";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(737, 359);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(65, 27);
			this->button57->TabIndex = 7;
			this->button57->Text = L"9 x 9";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(666, 359);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(65, 27);
			this->button56->TabIndex = 6;
			this->button56->Text = L"7 x 7";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(595, 359);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(65, 27);
			this->button55->TabIndex = 5;
			this->button55->Text = L"5 x 5";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(524, 359);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(65, 27);
			this->button54->TabIndex = 4;
			this->button54->Text = L"3 x 3";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(524, 471);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Alpha-Trimmed Mean Filter";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(524, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Median Filter";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(524, 339);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Spatial Low-Pass Filter";
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(524, 72);
			this->button53->Name = L"button53";
			this->button53->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button53->Size = System::Drawing::Size(173, 27);
			this->button53->TabIndex = 2;
			this->button53->Text = L"Gaussian Noise";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(524, 39);
			this->button52->Name = L"button52";
			this->button52->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button52->Size = System::Drawing::Size(173, 27);
			this->button52->TabIndex = 1;
			this->button52->Text = L"Impulse Noise 10%";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(524, 6);
			this->button51->Name = L"button51";
			this->button51->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button51->Size = System::Drawing::Size(173, 27);
			this->button51->TabIndex = 0;
			this->button51->Text = L"Impulse Noise 30%";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->Location = System::Drawing::Point(879, 6);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(512, 512);
			this->pictureBox52->TabIndex = 1;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->DoubleClick += gcnew System::EventHandler(this, &MyForm::pictureBox52_DoubleClick);
			// 
			// pictureBox51
			// 
			this->pictureBox51->Location = System::Drawing::Point(6, 6);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(512, 512);
			this->pictureBox51->TabIndex = 0;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->DoubleClick += gcnew System::EventHandler(this, &MyForm::pictureBox51_DoubleClick);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->pictureBox62);
			this->tabPage6->Controls->Add(this->button66);
			this->tabPage6->Controls->Add(this->button65);
			this->tabPage6->Controls->Add(this->button64);
			this->tabPage6->Controls->Add(this->label5);
			this->tabPage6->Controls->Add(this->button63);
			this->tabPage6->Controls->Add(this->button62);
			this->tabPage6->Controls->Add(this->button61);
			this->tabPage6->Controls->Add(this->label4);
			this->tabPage6->Controls->Add(this->pictureBox61);
			this->tabPage6->Location = System::Drawing::Point(4, 26);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1582, 557);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"Project 6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Location = System::Drawing::Point(737, 6);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(512, 512);
			this->pictureBox62->TabIndex = 33;
			this->pictureBox62->TabStop = false;
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(666, 491);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(65, 27);
			this->button66->TabIndex = 7;
			this->button66->Text = L"A=3";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(595, 491);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(65, 27);
			this->button65->TabIndex = 6;
			this->button65->Text = L"A=2";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(524, 491);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(65, 27);
			this->button64->TabIndex = 5;
			this->button64->Text = L"A=1";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button64_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(524, 471);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Spatial High-Boost Filter";
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(666, 430);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(65, 27);
			this->button63->TabIndex = 3;
			this->button63->Text = L"7 x 7";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(595, 430);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(65, 27);
			this->button62->TabIndex = 2;
			this->button62->Text = L"5 x 5";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(524, 430);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(65, 27);
			this->button61->TabIndex = 1;
			this->button61->Text = L"3 x 3";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(524, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Spatial High-Pass Filter";
			// 
			// pictureBox61
			// 
			this->pictureBox61->Location = System::Drawing::Point(6, 6);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(512, 512);
			this->pictureBox61->TabIndex = 1;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &MyForm::pictureBox61_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->pictureBox72);
			this->tabPage7->Controls->Add(this->button74);
			this->tabPage7->Controls->Add(this->button73);
			this->tabPage7->Controls->Add(this->label7);
			this->tabPage7->Controls->Add(this->button72);
			this->tabPage7->Controls->Add(this->button71);
			this->tabPage7->Controls->Add(this->label6);
			this->tabPage7->Controls->Add(this->pictureBox71);
			this->tabPage7->Location = System::Drawing::Point(4, 26);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1582, 557);
			this->tabPage7->TabIndex = 7;
			this->tabPage7->Text = L"Project 7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// pictureBox72
			// 
			this->pictureBox72->Location = System::Drawing::Point(669, 6);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(512, 512);
			this->pictureBox72->TabIndex = 7;
			this->pictureBox72->TabStop = false;
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(595, 491);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(65, 27);
			this->button74->TabIndex = 6;
			this->button74->Text = L"(2)";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::button74_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(524, 491);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(65, 27);
			this->button73->TabIndex = 5;
			this->button73->Text = L"(1)";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button73_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(521, 471);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Sobel Operator";
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(595, 426);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(65, 27);
			this->button72->TabIndex = 3;
			this->button72->Text = L"(2)";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button72_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(524, 426);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(65, 27);
			this->button71->TabIndex = 2;
			this->button71->Text = L"(1)";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button71_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(521, 406);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Prewitt Filter";
			// 
			// pictureBox71
			// 
			this->pictureBox71->Location = System::Drawing::Point(6, 6);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(512, 512);
			this->pictureBox71->TabIndex = 2;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Click += gcnew System::EventHandler(this, &MyForm::pictureBox71_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(153, 48);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1616, 605);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage0->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->panel41->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		array<PictureBox^> ^pbArray = {
			pictureBox01, pictureBox02,
			pictureBox11, pictureBox12, pictureBox13,
			pictureBox21, pictureBox22, pictureBox23, pictureBox24, pictureBox25,
			pictureBox31, pictureBox32,
			pictureBox41, pictureBox42, pictureBox43, pictureBox44,
			pictureBox51, pictureBox52,
			pictureBox61, pictureBox62,
			pictureBox71, pictureBox72 };
		for each(PictureBox^ pb in pbArray)
		{
			pb->ContextMenuStrip = contextMenuStrip1;
		}
	}

	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = SavePicture();
		if (!String::IsNullOrEmpty(path)) {
			Bitmap^ bitmap = ConvertBmpTo24Bit(safe_cast<Bitmap^>(((PictureBox^)contextMenuStrip1->SourceControl)->Image));
			bitmap->Save(path);
		}
	}

/// Read/Write bitmap
#pragma region Project0

	private: System::Void button01_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture01FilePath, pictureBox01, false);
	}

	private: System::Void pictureBox01_Click(System::Object^  sender, System::EventArgs^  e) {
		button01->PerformClick();
	}

	typedef unsigned char BYTE;
	typedef unsigned long DWORD;
	private: System::Void button02_Click(System::Object^  sender, System::EventArgs^  e) {
		// Set System::String^ to char*
		const char* picSource = ConvertString(picture01FilePath);
		const char* picTarget = ConvertString(
			picture01FilePath->Substring(0, picture01FilePath->LastIndexOf("\\") + 1) +
			picture01FilePath->Substring(picture01FilePath->LastIndexOf('\\') + 1)->Split('.')[0] + "_prj0" + ".bmp");

		// Convert bitmap color to grey
		BitmapComputer(picSource, picTarget);

		pictureBox02->Image = safe_cast<Bitmap^>(Image::FromFile(gcnew String(picTarget)));
		return;
	}

#pragma endregion

/// (1) kI1 + mI2
/// (2) I1 – I2
#pragma region Project1

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture11FilePath, pictureBox11, false);
	}

	private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
		button11->PerformClick();
	}

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture12FilePath, pictureBox12, false);
	}

	private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
		button12->PerformClick();
	}

	// mode_set_int 表示 I1 係數值， I2 係數值則為 (1 - mode_set)
	private: int coefficient_i = -1;
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		// 調整 mode_set 係數值
		if (coefficient_i >= 10) {
			coefficient_i = 0;
		}
		else {
			coefficient_i += 1;
		}
		label11->Text = String::Format("{0} I1 + {1} I2", (double)coefficient_i / 10, (double)(10 - coefficient_i) / 10);

		double coefficient_d = (double)coefficient_i / 10;

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(picture11FilePath));
		Bitmap^ image2 = safe_cast<Bitmap^>(Image::FromFile(picture12FilePath));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				// (1) kI1 + mI2
				for (int i = 0; i < 3; i++) {
					p1[i] = (Byte)(p1[i] * coefficient_d + p2[i] * (1 - coefficient_d));
				}
				p1 += 3;
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);

		pictureBox13->Image = image1;
	}

	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		// 三次迴圈，每次跑的迴圈分別是處理
		// 1. 對 Source Picture 做 Y-image 處理並將結果顯示在 pictureBox2
		// 2. 對 Source Picture 做 H-image 處理並將結果顯示在 pictureBox3
		// 3. 將 Y-image 與 H-image 做相減處理並將結果顯示在 pictureBox4
		for (int i = 0; i < 3; i++) {
			Bitmap^ image = safe_cast<Bitmap^>(Image::FromFile(picture11FilePath));
			Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
			int byteNumber_Width = image->Width * 3;
			Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
			IntPtr ptr = imageData->Scan0;
			int bytesOfSkip = imageData->Stride - byteNumber_Width;
			Byte* p = (Byte *)((Void *)ptr);

			for (int y = 0; y < image->Height; y++) {
				for (int x = 0; x < image->Width; x++) {
					// 決定目前該處理的方式
					switch (i) {
						case 0: {
							// Y-image : R * 0.299, G * 0.587, B * 0.114
							Byte Y_N = (double)p[0] * 0.114 + (double)p[1] * 0.587 + (double)p[2] * 0.299;
							for (int j = 0; j < 3; j++) { p[j] = Y_N; }
							break;
						}
						case 1: {
							// H-image : (R + G + B) / 3
							Byte I_N = (p[0] + p[1] + p[2]) / 3;
							for (int j = 0; j < 3; j++) { p[j] = I_N; }
							break;
						}
						case 2: {
							// Y-image - H-image
							Byte Y_N = (double)p[0] * 0.114 + (double)p[1] * 0.587 + (double)p[2] * 0.299;
							Byte I_N = (p[0] + p[1] + p[2]) / 3;
							for (int j = 0; j < 3; j++) { p[j] = Y_N - I_N + 128; }
							break;
						}
					}
					p += 3;
				}
				p += bytesOfSkip;
			}
			image->UnlockBits(imageData);

			// 選擇顯示的 pictureBox 並塞入 image1
			switch (i) {
				case 0: {
					pictureBox11->Image = image;
					break;
				}
				case 1: {
					pictureBox12->Image = image;
					break;
				}
				case 2: {
					pictureBox13->Image = image;
					break;
				}
			}
		}
	}

#pragma endregion

#pragma region Project 2

	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture21FilePath, pictureBox21, false);
	}

	private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
		button21->PerformClick();
	}

	/// Zero-order interpolation (Nearest Neighbor)
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		// 將影像顯示在 pictureBox2
		pictureBox22->Image = ZeroOrder(safe_cast<Bitmap^>(Image::FromFile(picture21FilePath)), (double)numericUpDown21->Value, (double)numericUpDown21->Value);
	}

	/// First-order interpolation (Bilinear)
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		// 將影像顯示在 pictureBox2
		pictureBox22->Image = 
			FirstOrder(safe_cast<Bitmap^>(Image::FromFile(picture21FilePath)), (double)numericUpDown21->Value, (double)numericUpDown21->Value);
	}

	/// PSNR
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
		// Source picture
		Bitmap^ bitmap = safe_cast<Bitmap^>(Image::FromFile(picture21FilePath));
		// 縮小倍率
		double rate = (double)numericUpDown21->Value;
		// 利用 First-order 縮小圖片
		Bitmap^ zoomOutImage = ConvertBmpTo24Bit(FirstOrder(bitmap, rate, rate));

		// 放大倍率
		rate = (double)bitmap->Width / zoomOutImage->Width;
		// Zero-order
		Bitmap^ zeroOrderBmp = ConvertBmpTo24Bit(ZeroOrder(zoomOutImage, rate, rate));
		pictureBox22->Image = zeroOrderBmp;
		pictureBox23->Image = SubBitmap(bitmap, zeroOrderBmp);
		// First-order
		Bitmap^ firstOrderBmp = ConvertBmpTo24Bit(FirstOrder(zoomOutImage, rate, rate));
		pictureBox24->Image = firstOrderBmp;
		pictureBox25->Image = SubBitmap(bitmap, firstOrderBmp);

		/*
		 * PSNR = 20*log(MAX / MSE^0.5)
		 *
		 * 假設有兩圖片 I、J，長寬皆為 m 與 n
		 * 則 MSE = ||I[i, j] - K[i, j]|| ^2 / (m * n), { 0 <= i <= m, 0 <= j <= n }
		 */
		double psnr1 = PSNRvalue(ConvertBmpTo24Bit(safe_cast<Bitmap^>(Image::FromFile(picture21FilePath))), ConvertBmpTo24Bit(safe_cast<Bitmap^>(pictureBox22->Image)));
		double psnr2 = PSNRvalue(ConvertBmpTo24Bit(safe_cast<Bitmap^>(Image::FromFile(picture21FilePath))), ConvertBmpTo24Bit(safe_cast<Bitmap^>(pictureBox24->Image)));
		label21->Text = psnr1.ToString("F3");
		label22->Text = psnr2.ToString("F3");
	}

	/// Zero-order interpolation (Nearest Neighbor)
	private: System::Drawing::Bitmap^ ZeroOrder(Bitmap^ bmpSrc, double rate_x, double rate_y) {
		Bitmap^ image1 = bmpSrc;
		Bitmap^ image2 = gcnew Bitmap(image1->Width * rate_x, image1->Height * rate_y);
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		// 偏移量
		int offset = (image1->Width) * 3;
		if (offset % 4 != 0) { offset = offset + 4 - offset % 4; }
		// 巡迴每一個像素
		for (int y = 0; y < image2->Height; y++) {
			for (int x = 0; x < image2->Width; x++) {
				int src_w = (int)((double)x / rate_x + 0.5);
				int src_h = (int)((double)y / rate_y + 0.5);
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(image1->Height))) && (src_w < ((int)(image1->Width)))) {
					p1 = ((Byte *)((void *)ptr1));
					p1 += (((int)src_h) * (offset)) + ((int)src_w * 3);

					p2[0] = (Byte)p1[0];
					p2[1] = (Byte)p1[1];
					p2[2] = (Byte)p1[2];
				}
				else {
					p2[0] = (Byte)255;
					p2[1] = (Byte)255;
					p2[2] = (Byte)255;
				}
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

	/// First-order interpolation (Bilinear)
	private: System::Drawing::Bitmap^ FirstOrder(Bitmap^ bmpSrc, double rate_x, double rate_y) {
		Bitmap^ image1 = bmpSrc;
		Bitmap^ image2 = gcnew Bitmap(image1->Width * rate_x, image1->Height);
		Bitmap^ image3 = gcnew Bitmap(image1->Width * rate_x, image1->Height * rate_y);
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		Rectangle rect3 = Rectangle(0, 0, image3->Width, image3->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		int byteNumber_Width3 = image3->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData3 = image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		IntPtr ptr3 = imageData3->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		int bytesOfSkip3 = imageData3->Stride - byteNumber_Width3;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);
		Byte* p3 = (Byte *)((Void *)ptr3);

		// 橫向放大
		for (int y = 0; y < image2->Height; y++) {
			for (int x = 0; x < image2->Width; x++) {
				int src_w = (int)(x / rate_x);
				int src_h = (int)(y);
				int r = (int)(x - (((int)((double)x / rate_x)) * rate_x));
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(image1->Height))) && (src_w < ((int)(image1->Width)) - 1)) {
					p1 = ((Byte*)((Void*)ptr1));
					p2[0] = (Byte)(int)((double)((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 0)) * (rate_x - r) + ((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 3 + 0)) * (r))) / rate_x);
					p2[1] = (Byte)(int)((double)((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 1)) * (rate_x - r) + ((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 3 + 1)) * (r))) / rate_x);
					p2[2] = (Byte)(int)((double)((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 2)) * (rate_x - r) + ((double)(*(p1 + (src_w * 3) + (src_h * imageData1->Stride) + 3 + 2)) * (r))) / rate_x);
				}
				else {
					p2[0] = (Byte)255;
					p2[1] = (Byte)255;
					p2[2] = (Byte)255;
				}
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		// 直向放大
		for (int y = 0; y < image3->Height; y++) {
			for (int x = 0; x < image3->Width; x++) {
				int src_w = (int)(x);
				int src_h = (int)(y / rate_y);
				int r = (int)(y - (((int)((double)y / rate_y)) * rate_y));
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(image2->Height) - 1)) && (src_w < ((int)(image2->Width)))) {
					p2 = ((Byte*)((Void*)ptr2));
					p3[0] = (Byte)(int)((double)((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + 0)) * (rate_y - r) + ((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + (imageData2->Stride) + 0)) * (r))) / rate_y);
					p3[1] = (Byte)(int)((double)((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + 1)) * (rate_y - r) + ((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + (imageData2->Stride) + 1)) * (r))) / rate_y);
					p3[2] = (Byte)(int)((double)((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + 2)) * (rate_y - r) + ((double)(*(p2 + (src_w * 3) + (src_h * imageData2->Stride) + (imageData2->Stride) + 2)) * (r))) / rate_y);
				}
				else {
					p3[0] = (Byte)255;
					p3[1] = (Byte)255;
					p3[2] = (Byte)255;
				}
				p3 += 3;
			}
			p2 += bytesOfSkip2;
			p3 += bytesOfSkip3;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		image3->UnlockBits(imageData3);
		return image3;
	}

	private: System::Drawing::Bitmap^ SubBitmap(Bitmap^ bitmap1, Bitmap^ bitmap2) {
		Bitmap^ image1 = bitmap1;
		Bitmap^ image2 = bitmap2;
		Bitmap^ image3 = gcnew Bitmap(image1->Width, image1->Height);
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		Rectangle rect3 = Rectangle(0, 0, image1->Width, image1->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		int byteNumber_Width3 = image1->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		Imaging::BitmapData^ imageData3 = image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		IntPtr ptr3 = imageData3->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		int bytesOfSkip3 = imageData3->Stride - byteNumber_Width3;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);
		Byte* p3 = (Byte *)((Void *)ptr3);

		for (int y = 0; y < image2->Height; y++) {
			for (int x = 0; x < image2->Width; x++) {
				p3[0] = Math::Abs(p1[0] - p2[0]);
				p3[1] = Math::Abs(p1[1] - p2[1]);
				p3[2] = Math::Abs(p1[2] - p2[2]);

				p1 += 3;
				p2 += 3;
				p3 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
			p3 += bytesOfSkip3;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		image3->UnlockBits(imageData3);
		return image3;
	}

	private: double PSNRvalue(Bitmap^ bitmap1, Bitmap^ bitmap2) {
		// Check both bitmap width, height and bit depth
		if (  bitmap1->Width  != bitmap2->Width  || 
			  bitmap1->Height != bitmap2->Height || 
			!(bitmap1->PixelFormat == bitmap2->PixelFormat && bitmap1->PixelFormat == Imaging::PixelFormat::Format24bppRgb)) {
			return -1;
		}

		Bitmap^ image1 = bitmap1;
		Bitmap^ image2 = bitmap2;
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		// MSE value
		double mse = 0;
		// 巡迴每一個像素
		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				mse += Math::Abs(p1[0] - p2[0]) + Math::Abs(p1[1] - p2[1]) + Math::Abs(p1[2] - p2[2]);
				p1 += 3;
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);

		// MSE
		mse /= (image1->Width * image1->Height * 3);
		// MAX
		double max = Math::Pow((double)2, (double)8) - 1;
		// 返回 PSNR 值
		return (20 * Math::Log10(max / Math::Pow(mse, 0.5)));
	}

#pragma endregion

#pragma region Project 3

	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture31FilePath, pictureBox31, true);
	}

	private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
		button31->PerformClick();
	}

	// Button : 將圖片進行 Histogram Shrink 處理
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
		Bitmap^ image = ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture31FilePath)));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		/* Step 1 : Set the rMax and rMin */
		unsigned char rMax = 0;
		unsigned char rMin = 255;
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				// Set the rMax
				if (*p > rMax) { rMax = *p; }
				// Set the rMin
				if (*p < rMin) { rMin = *p; }
				// Move
				p += 3;
			}
			p += bytesOfSkip;
		}

		// Re-Move p1 'ptr
		p = p - (image->Height * image->Width) * 3;

		// Set sMax and sMin
		unsigned char sMax = 200;
		unsigned char sMin = 50;
		/* Step 2 :  Shrink(r(x, y)) = (sMax(x, y) - sMin(x, y)) * (r(x, y) - rMin) / (rMax - rMin) + sMin(x, y) */
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				if (rMax - rMin == 0) {
					for (int i = 0; i < 3; i++) {
						p[i] = p[i];
					}
				}
				else {
					// sMax(x, y) ==> sMax, sMin(x, y) ==> sMin, r(x, y) ==> r
					for (int i = 0; i < 3; i++) {
						p[i] = (sMax - sMin) * (p[i] - rMin) / (rMax - rMin) + sMin;
					}
				}
				p += 3;
			}
			p += bytesOfSkip;
		}
		image->UnlockBits(imageData);

		pictureBox32->Image = image;
		pictureBox32->Tag = "Histogram Shrink";
	}

	// Button : 將圖片進行 Histogram Stretch 處理
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
		Bitmap^ image = ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture31FilePath)));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		/* Step 1 : Set the rMax and rMin */
		unsigned char rMax = 0;
		unsigned char rMin = 255;

		bool b_IsClip = false;
		unsigned char m_TMax;

		if (b_IsClip) { m_TMax = (rMin * (1 - 0.03)); } // 是否要做 Clipping
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				if (b_IsClip) {
					if (*p < m_TMax) {
						// Set rMax
						if (*p > rMax) { rMax = *p; }
						// Set rMin
						if (*p < rMin) { rMin = *p; }
					}
				}
				else {
					// Set rMax
					if (*p > rMax) { rMax = *p; }
					// Set rMin
					if (*p < rMin) { rMin = *p; }
				} p += 3;
			}
			p += bytesOfSkip;
		}

		// Re-Move p1 'ptr
		p = p - (image->Height * image->Width) * 3;
		// Set sMax and sMin
		unsigned char sMax = 255;
		unsigned char sMin = 0;
		// Step 2 : Stretch(r(x, y) = ((r(x, y) - rMin) * (sMax - sMin)) / (rMax - rMin) + sMin
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				for (int i = 0; i < 3; i++) { p[i] = ((p[i] - rMin) * (sMax - sMin)) / (rMax - rMin) + sMin; }
				p += 3;
			}
			p += bytesOfSkip;
		}
		image->UnlockBits(imageData);

		pictureBox32->Image = image;
		pictureBox32->Tag = "Histogram Stretch";
	}

	// Button : 將圖片進行 Histogram Equalization 處理
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
		Bitmap^ image = ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture31FilePath)));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		// 總計點數
		int pointCount = 0;
		// 255 累計
		int count255[256] = { 0 };
		// 255 歸零
		for (int i = 0; i < 256; i++) { count255[i] = 0; }
		// 255 Counter
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				count255[*p]++; pointCount++;
				p += 3;
			}
			p += bytesOfSkip;
		}
		p = p - (image->Height * image->Width) * 3;
		/* Step 1 : Calculate the running sum of the probability Pr(Rk) according to Eq. (3) */
		int tmpCount = 0;
		for (int i = 0; i < 256; i++) {
			tmpCount += count255[i];
			count255[i] = tmpCount;
		}
		/* Step 2 : Multiply Sk by Smax */
		for (int i = 0; i < 256; i++) { count255[i] = (int)((double)count255[i] / (double)pointCount * 255); }
		/* Step 3 : Get the transfomation function T(r) by mapping from r to s */
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				for (int i = 0; i < 3; i++) { p[i] = count255[p[i]]; }
				p += 3;
			}
			p += bytesOfSkip;
		}
		image->UnlockBits(imageData);

		pictureBox32->Image = image;
		pictureBox32->Tag = "Histogram Equalization";
	}

	private: System::Void linkLabel32_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		FmChart^ fmChart = gcnew FmChart;
		fmChart->Text = pictureBox32->Tag->ToString();
		fmChart->AddChartArea("Pixel", 255, 0);
		fmChart->AddSeries("Source", "Pixel", GetPictureValues(ConvertBmpTo24Bit(safe_cast<Bitmap^>(pictureBox31->Image))), Color::DodgerBlue);
		fmChart->AddSeries("Target", "Pixel", GetPictureValues(ConvertBmpTo24Bit(safe_cast<Bitmap^>(pictureBox32->Image))), Color::Red);
		fmChart->Show();
	}

	private: int* GetPictureValues(Bitmap^ bmpSrc) {
		Bitmap^ image = bmpSrc;
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		int* values = (int*)malloc(256 * (sizeof(int)));
		for (int i = 0; i < 256; i++) {
			values[i] = 0;
		}

		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				values[p[0]]++;
				p += 3;
			}
			p += bytesOfSkip;
		}
		image->UnlockBits(imageData);
		return values;
	}

#pragma endregion

#pragma region Project 4

	private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture41FilePath, pictureBox41, true);
	}

	private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {
		button41->PerformClick();
	}

	private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox42->Image = GaussianNoise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture41FilePath))), 60, true);
	}

	private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox43->Image = UniformNoise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture41FilePath))), 500, true);
	}

	private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox44->Image = ImpulseNoise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture41FilePath))), 0.1, 0.1);
	}

	private: System::Drawing::Bitmap^ GaussianNoise(Bitmap^ bmpSrc, float std_dev, bool showChart) {
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		// 產生的雜訊
		float noise;
		// 放置雜訊的 Buffer
		float pixel;
		// 計算根號 12
		float sqrt_12 = (float)3.464f;
		// 計算根號 10
		float sqrt_10 = (float)3.162f;
		// 高斯的值
		float fGaussianValue;

		float mean = 0;
		fGaussianValue = (sqrt_12 * std_dev) / sqrt_10;

		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				// 產生雜訊
				float total = 0;
				for (int i = 0; i < 10; i++) { total += (float)(((float)rand()) / (RAND_MAX + 1) - 0.5f); }
				// 配給雜訊
				noise = (float)((fGaussianValue * total) + mean);
				for (int i = 0; i < 3; i++) {
					pixel = noise + p[i];
					if (pixel > 255) {
						pixel = 255;
					}
					else if (pixel < 0) {
						pixel = 0;
					}
					p[i] = (Byte)pixel;
				}
				p += 3;
			}
			p += bytesOfSkip;
		}
		image->UnlockBits(imageData);

		if (showChart) {
			GaussianNoiseChart(bmpSrc, image);
		}

		return image;
	}

	private: System::Void GaussianNoiseChart(Bitmap^ source, Bitmap^ solution) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(source));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(solution));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		int values[511] = { 0 };
		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				values[p1[0] - p2[0] + 255]++;
				p1 += 3;
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);

		FmChart^ fmChart = gcnew FmChart;
		fmChart->Text = "Gaussian Noise Chart";
		fmChart->AddChartArea("Pixel", 255, -255);
		fmChart->AddSeries("Count", "Pixel", values, Color::DodgerBlue);
		fmChart->Show();
	}

	private: System::Drawing::Bitmap^ UniformNoise(Bitmap^ bmpSrc, int nNoiseProbability /* 雜訊出現機率 */, bool showChart) {
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		// 原始圖片總 Pixel 數
		long pixelsCount = image->Height * image->Width;
		// 標記是否已撒入雜訊之地圖
		bool* pRandMap = new bool[pixelsCount];
		// 地圖初始化
		for (int i = 0; i < (pixelsCount); i++) { pRandMap[i] = false; }
		// 欲雜訊化之 Pixel 數
		long noisePixelsCount = (pixelsCount * (nNoiseProbability / 1000.0f));

		//
		int values[256] = { 0 };

		// 雜訊範圍
		int noiseRange = (210 - 50);
		// 雜訊最小值
		int nRangeMin = 50;
		while (noisePixelsCount > 0) {
			// 產生雜訊的圖像高值
			int randHeight = rand() % image->Height;
			// 產生雜訊的圖像寬值
			int randWidth = rand() % image->Width;

			int randPixelIndex = randHeight * image->Width + randWidth;
			if (pRandMap[randPixelIndex] == false) {
				int offset = (randHeight * image->Width * 3) + (randWidth * 3);
				Byte noise = (Byte)((rand() % noiseRange) + nRangeMin);
				for (int i = 0; i < 3; i++) {
					p[offset + i] = noise;
					pRandMap[randPixelIndex] = true;
				}
				noisePixelsCount--;

				//
				values[(int)noise]++;
			}
		}
		// 刪除 pRandMap 所配置記憶體
		delete[] pRandMap;
		image->UnlockBits(imageData);

		// 顯示 UniformNoiseChart
		if (showChart) {
			FmChart^ fmChart = gcnew FmChart;
			fmChart->Text = "Uniform Noise Chart";
			fmChart->AddChartArea("Pixel", 255, -255);
			fmChart->AddSeries("Count", "Pixel", values, Color::DodgerBlue);
			fmChart->Show();
		}

		return image;
	}

	private: System::Drawing::Bitmap^ ImpulseNoise(Bitmap^ bmpSrc, float saltPercent, float pepperPercent) {
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		// 定義 Salt 值
		Byte salt = 255;
		// 定義 Pepper 值
		Byte pepper = 0;
		// 原始圖片總 Pixel 數
		int pixelsCount = image->Height * image->Width;
		// 標記是否已撒入雜訊之地圖
		bool* pRandMap = new bool[pixelsCount];
		// 地圖初始化
		for (int i = 0; i < (pixelsCount); i++) { pRandMap[i] = false; }

		// 欲雜訊化之 Pixel 數
		long noisePixelsCount = pixelsCount * (saltPercent + pepperPercent);
		// 已雜訊化 Pixel 數
		long count = 0;
		while (count < noisePixelsCount) {
			// 產生雜訊的圖像高值
			int randHeight = rand() % image->Height;
			// 產生雜訊的圖像寬值
			int randWidth = rand() % image->Width;

			int RandPixelIndex = randHeight * image->Width + randWidth;
			if (pRandMap[RandPixelIndex] == false) {
				int Offset = (randHeight * image->Width * 3) + (randWidth * 3);
				if (count < (noisePixelsCount / 2)) {
					// 撒入 Salt
					for (int i = 0; i < 3; i++) { p[Offset + i] = salt; }
				}
				else {
					// 撒入 Pepper
					for (int i = 0; i < 3; i++) { p[Offset + i] = pepper; }
				}
				pRandMap[RandPixelIndex] = true;
				count++;
			}
		}
		// 刪除 pRandMap 所配置記憶體
		delete[] pRandMap;
		image->UnlockBits(imageData);
		return image;
	}

#pragma endregion

#pragma region Project 5

	private: System::Void pictureBox51_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture51FilePath, pictureBox51, true);
	}

	private: System::Void pictureBox52_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(String::Format("PSNR : {0}", PSNRvalue(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture51FilePath))), safe_cast<Bitmap^>(pictureBox52->Image))));
	}

	private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
		Bitmap^ image = ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture51FilePath)));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		/* Make Impulse Noise 30% */
		Byte salt = 255;
		Byte pepper = 0;
		long pixelsCount = image->Height * image->Width;
		bool *pRandMap = new bool[pixelsCount];
		for (int i = 0; i < (pixelsCount); i++) { pRandMap[i] = false; }

		long noisePixelsCount = pixelsCount * (0.15f + 0.15f);
		long count = 0;
		while (count < noisePixelsCount) {
			int randHeight = rand() % image->Height;
			int randWidth = rand() % image->Width;

			int randPixelIndex = randHeight * image->Width + randWidth;
			if (pRandMap[randPixelIndex] == false) {
				int offset = (randHeight * image->Width * 3) + (randWidth * 3);
				if (count < (noisePixelsCount / 2)) {
					for (int i = 0; i < 3; i++) { p[offset + i] = salt; }
				}
				else {
					for (int i = 0; i < 3; i++) { p[offset + i] = pepper; }
				}
				pRandMap[randPixelIndex] = true;
				count++;
			}
		}
		delete[] pRandMap;
		image->UnlockBits(imageData);

		pictureBox51->Image = image;
	}

	private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
		Bitmap^ image = ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture51FilePath)));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		int byteNumber_Width = image->Width * 3;
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imageData->Scan0;
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		Byte* p = (Byte *)((Void *)ptr);

		/* Make Impulse Noise 30% */
		Byte salt = 255;
		Byte pepper = 0;
		long pixelsCount = image->Height * image->Width;
		bool *pRandMap = new bool[pixelsCount];
		for (int i = 0; i < (pixelsCount); i++) { pRandMap[i] = false; }

		long noisePixelsCount = pixelsCount * (0.05f + 0.05f);
		long count = 0;
		while (count < noisePixelsCount) {
			int randHeight = rand() % image->Height;
			int randWidth = rand() % image->Width;

			int randPixelIndex = randHeight * image->Width + randWidth;
			if (pRandMap[randPixelIndex] == false) {
				int offset = (randHeight * image->Width * 3) + (randWidth * 3);
				if (count < (noisePixelsCount / 2)) {
					for (int i = 0; i < 3; i++) { p[offset + i] = salt; }
				}
				else {
					for (int i = 0; i < 3; i++) { p[offset + i] = pepper; }
				}
				pRandMap[randPixelIndex] = true;
				count++;
			}
		}
		delete[] pRandMap;
		image->UnlockBits(imageData);

		pictureBox51->Image = image;
	}

	private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox51->Image = GaussianNoise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture51FilePath))), 20, false);
	}

	private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = SpatialLowPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 3);
	}

	private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = SpatialLowPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 5);
	}

	private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = SpatialLowPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 7);
	}

	private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = SpatialLowPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 9);
	}

	private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = SpatialLowPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 21);
	}

	private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = MedianFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 3);
	}

	private: System::Void button510_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = MedianFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 5);
	}

	private: System::Void button511_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = AlphaTrimmedMeanFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 1);
	}

	private: System::Void button522_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = AlphaTrimmedMeanFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 2);
	}

	private: System::Void button533_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox52->Image = AlphaTrimmedMeanFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox51->Image)), 4);
	}

	// Spatial Low-Pass Filter
	private: System::Drawing::Bitmap^ SpatialLowPassFilter(Bitmap^ bmpSrc, int mask) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		/* Compute */
		bool OKAY = false;
		long long filterPixel = 0;
		int *_array = new int[mask * mask];
		for (int i = 0; i < (mask * mask); i++) { _array[i] = 0; }
		for (int y = ((mask - 1) / 2); y < image2->Height - ((mask - 1) / 2); y++) {
			for (int x = ((mask - 1) / 2); x < image2->Width - ((mask - 1) / 2); x++) {
				if ((x == image2->Width - ((mask + 1) / 2)) && (y == image2->Height - ((mask + 1) / 2))) {
					OKAY = !OKAY;
					break;
				}
				int count = 0;
				for (int i = -((mask - 1) / 2); i <= ((mask - 1) / 2); i++) {
					for (int j = -((mask - 1) / 2); j <= ((mask - 1) / 2); j++) {
						p1 = ((Byte*)((Void*)ptr1));
						p1 += (int)(y + j) * (imageData1->Stride) + (int)(x + i) * 3;
						_array[count++] = (int)p1[0];
					}
				}

				p2 = (Byte*)((Void*)ptr2);
				p2 += (((int)y) *(imageData1->Stride)) + ((int)x * 3);

				filterPixel = 0;
				for (int i = 0; i < mask * mask; i++) { filterPixel += _array[i]; }

				filterPixel /= mask * mask;
				if (filterPixel >= 255) {
					filterPixel = 255;
				}
				for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)filterPixel; }
			}
			if (OKAY) { break; }
		}
		delete[] _array;
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

	// Median Filter
	private: System::Drawing::Bitmap^ MedianFilter(Bitmap^ bmpSrc, int mask) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		/* Compute */
		bool OKAY = false;
		long long holdPixel = 0;
		int *_array = new int[mask * mask];
		for (int i = 0; i < (mask * mask); i++) { _array[i] = 0; }
		for (int y = ((mask - 1) / 2); y < image2->Height - ((mask - 1) / 2); y++) {
			for (int x = ((mask - 1) / 2); x < image2->Width - ((mask - 1) / 2); x++) {
				if ((x == image2->Width - ((mask + 1) / 2)) && (y == image2->Height - ((mask + 1) / 2))) {
					OKAY = !OKAY;
					break;
				}
				int count = 0;
				for (int i = -((mask - 1) / 2); i <= ((mask - 1) / 2); i++) {
					for (int j = -((mask - 1) / 2); j <= ((mask - 1) / 2); j++) {
						p1 = ((Byte*)((Void*)ptr1));
						p1 += (int)(y + j) * (imageData1->Stride) + (int)(x + i) * 3;
						_array[count++] = (int)p1[0];
					}
				}

				p2 = (Byte*)((Void*)ptr2);
				p2 += (((int)y) *(imageData1->Stride)) + ((int)x * 3);

				holdPixel = 0;
				for (int i = 0; i < mask * mask; i++) {
					for (int j = 0; j < mask * mask - 1; j++) {
						if (_array[j] > _array[j + 1]) {
							holdPixel = _array[j + 1];
							_array[j + 1] = _array[j];
							_array[j] = holdPixel;
						}
					}
				}
				for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)_array[mask * mask / 2]; }
			}
			if (OKAY) { break; }
		}
		delete[] _array;
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

	// Alpha-Trimmed Mean Filter
	private: System::Drawing::Bitmap^ AlphaTrimmedMeanFilter(Bitmap^ bmpSrc, int  T /* 1 (7), 2(5), 4(N) */) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		/* Compute */
		bool OKAY = false;
		long long holdPixel = 0, sumPixel = 0;
		int *_array = new int[9];
		for (int i = 0; i < 9; i++) { _array[i] = 0; }
		for (int y = 1; y < image2->Height - 1; y++) {
			for (int x = 1; x < image2->Width - 1; x++) {
				if ((x == image2->Width - 2) && (y == image2->Height - 2)) {
					OKAY = !OKAY;
					break;
				}
				int Count = 0;
				for (int i = -1; i <= 1; i++) {
					for (int j = -1; j <= 1; j++) {
						p1 = ((Byte*)((Void*)ptr1));
						p1 += (int)(y + j) * (imageData1->Stride) + (int)(x + i) * 3;
						_array[Count++] = (int)p1[0];
					}
				}

				p2 = (Byte*)((Void*)ptr2);
				p2 += (((int)y) *(imageData1->Stride)) + ((int)x * 3);

				holdPixel = 0;
				for (int i = 0; i < 9; i++) {
					for (int j = 0; j < 8; j++) {
						if (_array[j] > _array[j + 1]) {
							holdPixel = _array[j + 1];
							_array[j + 1] = _array[j];
							_array[j] = holdPixel;
						}
					}
				}

				switch (T)
				{
					case 1:
						sumPixel = 0;
						for (int i = 1; i <= 7; i++) { sumPixel += _array[i]; }

						sumPixel /= 7;
						if (sumPixel >= 255) { sumPixel = 255; }
						for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)sumPixel; }
						break;

					case 2:
						sumPixel = 0;
						for (int i = 2; i <= 6; i++) { sumPixel += _array[i]; }

						sumPixel /= 5;
						if (sumPixel >= 255) { sumPixel = 255; }
						for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)sumPixel; }
						break;

					case 4:
						for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)_array[4]; }
						break;
				}
			}
			if (OKAY) { break; }
		}
		delete[] _array;
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

#pragma endregion

#pragma region Project 6

	private: System::Void pictureBox61_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture61FilePath, pictureBox61, true);
	}
	private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 3);
	}
	private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 5);
	}
	private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighPassFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 7);
	}
	private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighBoostFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 1);
	}
	private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighBoostFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 2);
	}
	private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox62->Image = SpatialHighBoostFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox61->Image)), 3);
	}

	private: System::Drawing::Bitmap^ SpatialHighPassFilter(Bitmap^ bmpSrc, int mask) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		/* Compute */
		bool OKAY = false;
		long long holdPixel = 0;
		int *_array = new int[mask * mask];
		for (int i = 0; i < (mask * mask); i++) { _array[i] = 0; }
		for (int y = ((mask - 1) / 2); y < image2->Height - ((mask - 1) / 2); y++) {
			for (int x = ((mask - 1) / 2); x < image2->Width - ((mask - 1) / 2); x++) {
				if ((x == image2->Width - ((mask + 1) / 2)) && (y == image2->Height - ((mask + 1) / 2))) {
					OKAY = !OKAY;
					break;
				}
				int count = 0;
				for (int i = -((mask - 1) / 2); i <= ((mask - 1) / 2); i++) {
					for (int j = -((mask - 1) / 2); j <= ((mask - 1) / 2); j++) {
						p1 = ((Byte*)((Void*)ptr1));
						p1 += (int)(y + j) * (imageData1->Stride) + (int)(x + i) * 3;
						_array[count++] = (int)p1[0];
					}
				}

				p2 = (Byte*)((Void*)ptr2);
				p2 += (((int)y) *(imageData1->Stride)) + ((int)x * 3);

				holdPixel = (int)_array[mask * mask / 2] * (mask * mask - 1);
				for (int i = 0; i < mask * mask; i++) { holdPixel = (i == (mask * mask / 2)) ? holdPixel : holdPixel - (int)_array[i]; }

				holdPixel /= mask * mask;
				if (holdPixel <= 0) {
					holdPixel = 0;
				}
				else if (holdPixel >= 255) {
					holdPixel = 255;
				}
				for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)holdPixel; }
			}
			if (OKAY) { break; }
		}
		delete[] _array;
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

	private: System::Drawing::Bitmap^ SpatialHighBoostFilter(Bitmap^ bmpSrc, int boost_A) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		/* Compute */
		int boost_W = boost_A + 7;
		bool OKAY = false;
		long long holdPixel = 0;
		int *_Array = new int[9];
		for (int i = 0; i < 9; i++) { _Array[i] = 0; }
		for (int y = 1; y < image2->Height - 1; y++) {
			for (int x = 1; x < image2->Width - 1; x++) {
				if ((x == image2->Width - 2) && (y == image2->Height - 2)) {
					OKAY = !OKAY;
					break;
				}
				int count = 0;
				for (int i = -1; i <= 1; i++) {
					for (int j = -1; j <= 1; j++) {
						p1 = ((Byte*)((Void*)ptr1));
						p1 += (int)(y + j) * (imageData1->Stride) + (int)(x + i) * 3;
						_Array[count++] = (int)p1[0];
					}
				}

				p2 = (Byte*)((Void*)ptr2);
				p2 += (((int)y) *(imageData1->Stride)) + ((int)x * 3);

				holdPixel = (int)_Array[4] * boost_W;
				for (int i = 0; i < 9; i++) { holdPixel = (i == 4) ? holdPixel : holdPixel - (int)_Array[i]; }
				if (holdPixel <= 0) {
					holdPixel = 0;
				}
				else if (holdPixel >= 255) {
					holdPixel = 255;
				}
				for (int i = 0; i < 3; i++) { p2[i] = (Byte)(int)holdPixel; }
			}
			if (OKAY) { break; }
		}
		delete[] _Array;
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

#pragma endregion

#pragma region Project 7

	private: System::Void pictureBox71_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectPicture(picture71FilePath, pictureBox71, true);
	}

	private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox72->Image = PrewittFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox71->Image)), 1);
	}

	private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox72->Image = PrewittFilter(ColorToGray(safe_cast<Bitmap^>(pictureBox71->Image)), 2);
	}

	private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox72->Image = SobelOperator(ColorToGray(safe_cast<Bitmap^>(pictureBox71->Image)), 1);
	}

	private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox72->Image = SobelOperator(ColorToGray(safe_cast<Bitmap^>(pictureBox71->Image)), 2);
	}

	private: System::Drawing::Bitmap^ PrewittFilter(Bitmap^ bmpSrc, int style) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = gcnew Bitmap((int)((image1->Width)), (int)((image1->Height)), System::Drawing::Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		int count = 0;
		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				if (!((y == 0) || (x == 0) || (y == image1->Height - 1) || (x == image1->Width - 1))) {
					int pixels[9] = { 0 };
					int pixelsPoint = 0;
					for (int i = -1; i <= 1; i++) {
						for (int j = -1; j <= 1; j++) {
							pixels[pixelsPoint++] = (p1 + 3 * image1->Height * i + 3 * j)[0];
						}
					}

					int answer =
						style == 1 ?
						abs((pixels[6] + pixels[7] + pixels[8]) - (pixels[0] + pixels[1] + pixels[2])) + abs((pixels[2] + pixels[5] + pixels[8]) - (pixels[0] + pixels[3] + pixels[6])) :
						style == 2 ?
						abs((pixels[1] + pixels[2] + pixels[5]) - (pixels[3] + pixels[6] + pixels[7])) + abs((pixels[5] + pixels[7] + pixels[8]) - (pixels[0] + pixels[1] + pixels[3])) :
						0;
					for (int i = 0; i < 3; i++) { p2[i] = answer; }
				}
				p1 += 3;
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

	private: System::Drawing::Bitmap^ SobelOperator(Bitmap^ bmpSrc, int style) {
		Bitmap^ image1 = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Bitmap^ image2 = gcnew Bitmap((int)((image1->Width)), (int)((image1->Height)), System::Drawing::Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		int byteNumber_Width1 = image1->Width * 3;
		int byteNumber_Width2 = image2->Width * 3;
		Imaging::BitmapData^ imageData1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imageData2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imageData1->Scan0;
		IntPtr ptr2 = imageData2->Scan0;
		int bytesOfSkip1 = imageData1->Stride - byteNumber_Width1;
		int bytesOfSkip2 = imageData2->Stride - byteNumber_Width2;
		Byte* p1 = (Byte *)((Void *)ptr1);
		Byte* p2 = (Byte *)((Void *)ptr2);

		int count = 0;
		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				if (!((y == 0) || (x == 0) || (y == image1->Height - 1) || (x == image1->Width - 1))) {
					int pixels[9] = { 0 };
					int pixelsPoint = 0;
					for (int i = -1; i <= 1; i++) {
						for (int j = -1; j <= 1; j++) {
							pixels[pixelsPoint++] = (p1 + 3 * image1->Height * i + 3 * j)[0];
						}
					}

					int answer =
						style == 1 ?
						abs((pixels[6] + 2 * pixels[7] + pixels[8]) - (pixels[0] + 2 * pixels[1] + pixels[2])) + abs((pixels[2] + 2 * pixels[5] + pixels[8]) - (pixels[0] + 2 * pixels[3] + pixels[6])) :
						style == 2 ?
						abs((pixels[1] + 2 * pixels[2] + pixels[5]) - (pixels[3] + 2 * pixels[6] + pixels[7])) + abs((pixels[5] + 2 * pixels[7] + pixels[8]) - (pixels[0] + 2 * pixels[1] + pixels[3])) :
						0;
					for (int i = 0; i < 3; i++) { p2[i] = answer; }
				}
				p1 += 3;
				p2 += 3;
			}
			p1 += bytesOfSkip1;
			p2 += bytesOfSkip2;
		}
		image1->UnlockBits(imageData1);
		image2->UnlockBits(imageData2);
		return image2;
	}

#pragma endregion

};
}
