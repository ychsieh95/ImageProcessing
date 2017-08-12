#pragma once

namespace ImageProcessing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Chart 的摘要
	/// </summary>
	public ref class FmChart : public System::Windows::Forms::Form
	{
	public:
		FmChart(void)
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
		~FmChart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(900, 470);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// FmChart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 471);
			this->Controls->Add(this->chart1);
			this->Name = L"FmChart";
			this->Text = L"FmChart";
			this->Resize += gcnew System::EventHandler(this, &FmChart::FmChart_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FmChart_Resize(System::Object^  sender, System::EventArgs^  e) {
		// 917, 510
		// 900, 470
		chart1->Width = this->Width - 17;
		chart1->Height = this->Height - 40;
	}

	public: System::Void AddChartArea(String^ chartAreaName, int axisXMaximum, int axisXMinimum) {
		chart1->ChartAreas->Add(chartAreaName);
		chart1->ChartAreas[chartAreaName]->AxisX->Maximum = axisXMaximum;
		chart1->ChartAreas[chartAreaName]->AxisX->Minimum = axisXMinimum;
	}

	public: System::Void AddSeries(String^ seriesName, String^ chartAreaName, int* values, Color color) {
		chart1->Series->Add(seriesName);
		chart1->Series[seriesName]->Color = color;
		for (int i = chart1->ChartAreas[chartAreaName]->AxisX->Minimum; i <= chart1->ChartAreas[chartAreaName]->AxisX->Maximum; i++) {
			chart1->Series[seriesName]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
			chart1->Series[seriesName]->Points->AddXY(i, *(values++));
		}
	}
	};
}
