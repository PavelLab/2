#pragma once
#include "Experiment.h"
#include "cpp/src/statistics.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Experiment *pExperiment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
		   Hypothesis* pHypoth;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DrawGraph();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^ button_start;

	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^ textProbab1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^ textProbab2;




	private: System::Windows::Forms::TextBox^ textNumb_of_tests;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ y_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;









	private: System::Windows::Forms::TextBox^ text_range_func;



	private: System::Windows::Forms::Button^ button_draw;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::Label^ label5;











	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_number_of_inter;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_alpha;
	private: System::Windows::Forms::Label^ label_r0;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;



private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;



































































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->y_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textProbab1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textProbab2 = (gcnew System::Windows::Forms::TextBox());
			this->textNumb_of_tests = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->text_range_func = (gcnew System::Windows::Forms::TextBox());
			this->button_draw = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_number_of_inter = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_alpha = (gcnew System::Windows::Forms::TextBox());
			this->label_r0 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(39, 13);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(647, 463);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button_start
			// 
			this->button_start->Location = System::Drawing::Point(880, 652);
			this->button_start->Margin = System::Windows::Forms::Padding(4);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(189, 36);
			this->button_start->TabIndex = 1;
			this->button_start->Text = L"Start";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->y_i, this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(762, 13);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(237, 426);
			this->dataGridView1->TabIndex = 2;
			// 
			// y_i
			// 
			this->y_i->HeaderText = L"y_i";
			this->y_i->MinimumWidth = 6;
			this->y_i->Name = L"y_i";
			this->y_i->ReadOnly = true;
			this->y_i->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"n_i";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"n_i/n";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 60;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(411, 669);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"p1";
			// 
			// textProbab1
			// 
			this->textProbab1->Location = System::Drawing::Point(443, 666);
			this->textProbab1->Margin = System::Windows::Forms::Padding(4);
			this->textProbab1->Name = L"textProbab1";
			this->textProbab1->Size = System::Drawing::Size(63, 22);
			this->textProbab1->TabIndex = 4;
			this->textProbab1->Text = L"0,3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(411, 710);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"p2";
			// 
			// textProbab2
			// 
			this->textProbab2->Location = System::Drawing::Point(443, 705);
			this->textProbab2->Margin = System::Windows::Forms::Padding(4);
			this->textProbab2->Name = L"textProbab2";
			this->textProbab2->Size = System::Drawing::Size(64, 22);
			this->textProbab2->TabIndex = 6;
			this->textProbab2->Text = L"0,4";
			// 
			// textNumb_of_tests
			// 
			this->textNumb_of_tests->Location = System::Drawing::Point(778, 659);
			this->textNumb_of_tests->Margin = System::Windows::Forms::Padding(4);
			this->textNumb_of_tests->Name = L"textNumb_of_tests";
			this->textNumb_of_tests->Size = System::Drawing::Size(64, 22);
			this->textNumb_of_tests->TabIndex = 7;
			this->textNumb_of_tests->Text = L"100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(608, 664);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Количество испытаний";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(1052, 13);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(250, 426);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"y_i";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"P(η=y_i)";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 80;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"n_i/n";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 60;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->Column3, this->Column4, this->Column5, this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView3->Location = System::Drawing::Point(160, 485);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(1142, 125);
			this->dataGridView3->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"E_η";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 70;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Выбор. `x";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 80;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"|E_η-`х|";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"D_η";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"S^2";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"|D_η-S^2|";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 80;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"`Me";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 40;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"`R";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 40;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Макс. отклонение частоты от вероятности";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Значение статистики Колмогорова";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 110;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Макс. отклонение эмпирической ФР от теоретической";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// text_range_func
			// 
			this->text_range_func->Location = System::Drawing::Point(778, 705);
			this->text_range_func->Margin = System::Windows::Forms::Padding(4);
			this->text_range_func->Name = L"text_range_func";
			this->text_range_func->Size = System::Drawing::Size(63, 22);
			this->text_range_func->TabIndex = 11;
			this->text_range_func->Text = L"5";
			// 
			// button_draw
			// 
			this->button_draw->Location = System::Drawing::Point(1103, 649);
			this->button_draw->Margin = System::Windows::Forms::Padding(4);
			this->button_draw->Name = L"button_draw";
			this->button_draw->Size = System::Drawing::Size(189, 36);
			this->button_draw->TabIndex = 12;
			this->button_draw->Text = L"Draw";
			this->button_draw->UseVisualStyleBackColor = true;
			this->button_draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(533, 706);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Область построения графиков [-1;";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(1146, 699);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 21);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"F(η)";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(1146, 730);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(63, 21);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"^F(η)";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 649);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(379, 102);
			this->label5->TabIndex = 16;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(49, 527);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Часть 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(49, 816);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Часть 3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(258, 798);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(167, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Количество интервалов";
			// 
			// textBox_number_of_inter
			// 
			this->textBox_number_of_inter->Location = System::Drawing::Point(443, 795);
			this->textBox_number_of_inter->Margin = System::Windows::Forms::Padding(4);
			this->textBox_number_of_inter->Name = L"textBox_number_of_inter";
			this->textBox_number_of_inter->Size = System::Drawing::Size(63, 22);
			this->textBox_number_of_inter->TabIndex = 20;
			this->textBox_number_of_inter->Text = L"3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(280, 837);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Уровень значимости";
			// 
			// textBox_alpha
			// 
			this->textBox_alpha->Location = System::Drawing::Point(443, 834);
			this->textBox_alpha->Margin = System::Windows::Forms::Padding(4);
			this->textBox_alpha->Name = L"textBox_alpha";
			this->textBox_alpha->Size = System::Drawing::Size(63, 22);
			this->textBox_alpha->TabIndex = 22;
			this->textBox_alpha->Text = L"0,9";
			// 
			// label_r0
			// 
			this->label_r0->AutoSize = true;
			this->label_r0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_r0->Location = System::Drawing::Point(569, 793);
			this->label_r0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_r0->Name = L"label_r0";
			this->label_r0->Size = System::Drawing::Size(0, 24);
			this->label_r0->TabIndex = 23;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn8,
					this->Column12, this->Column11, this->Column13
			});
			this->dataGridView4->Location = System::Drawing::Point(837, 771);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(439, 153);
			this->dataGridView4->TabIndex = 24;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"z_j-1";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"z_j";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 50;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"q_i";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"n_j";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 40;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(573, 888);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 36);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(680, 888);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 36);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1607, 1055);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label_r0);
			this->Controls->Add(this->textBox_alpha);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_number_of_inter);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button_draw);
			this->Controls->Add(this->text_range_func);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textNumb_of_tests);
			this->Controls->Add(this->textProbab2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textProbab1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Родионов. 10 вариант";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void DrawGraph() {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->XAxis->Title->Text = "Cлучайная величина";
			panel->YAxis->Title->Text = "F и ^F, функции распределения";
			panel->Title->Text = "График функций распределения"; 
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		double p_1 = Convert::ToDouble(textProbab1->Text);
		double p_2 = Convert::ToDouble(textProbab2->Text);

		int Numb_of_tests = Convert::ToDouble(textNumb_of_tests->Text);

		if (pExperiment) {
			delete pExperiment;
		}
		pExperiment = new Experiment(p_1, p_2, Numb_of_tests);

		
		//Вывод данных в таблицы 
		
		//Табл. распределения
		dataGridView1->Rows->Clear();
		for (int i=0; i<pExperiment->sort_vec.size();i++)
		{
			//Добавление на график
			//f1_list->Add(x, f1(x));
			//f2_list->Add(x, f2(x));
			
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = pExperiment->sort_vec[i].value; 			
			dataGridView1->Rows[i]->Cells[1]->Value = pExperiment->sort_vec[i].amount;
			dataGridView1->Rows[i]->Cells[2]->Value = pExperiment->Frequency(i);
			
		}

		//вер-ти и частоты
		dataGridView2->Rows->Clear();
		for (int i = 0; i < pExperiment->sort_vec.size(); i++)
		{
			//Печать в таблицу
			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = pExperiment->sort_vec[i].value;
			dataGridView2->Rows[i]->Cells[1]->Value = pExperiment->Second_player_probability(pExperiment->sort_vec[i].value);
			dataGridView2->Rows[i]->Cells[2]->Value = pExperiment->Frequency(i);

		}
		
		//остальные хар-ки
		dataGridView3->Rows->Clear();
		
			//Печать в таблицу
			dataGridView3->Rows[0]->Cells[0]->Value = pExperiment->Expected_value();
			dataGridView3->Rows[0]->Cells[1]->Value = pExperiment->Sample_mean();
			dataGridView3->Rows[0]->Cells[2]->Value = abs(pExperiment->Expected_value()- pExperiment->Sample_mean());
			dataGridView3->Rows[0]->Cells[3]->Value = pExperiment->Dispersion();
			dataGridView3->Rows[0]->Cells[4]->Value = pExperiment->Sample_variance();
			dataGridView3->Rows[0]->Cells[5]->Value = abs(pExperiment->Dispersion() - pExperiment->Sample_variance());
			dataGridView3->Rows[0]->Cells[6]->Value = pExperiment->Sample_median();
			dataGridView3->Rows[0]->Cells[7]->Value = pExperiment->Sample_range();
			dataGridView3->Rows[0]->Cells[8]->Value = pExperiment->Maximum_deviation();

	}


	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (pExperiment) {

			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();

			//списки точек
			PointPairList^ F_list = gcnew ZedGraph::PointPairList();
			PointPairList^ Sample_F_list = gcnew ZedGraph::PointPairList();

			double range_func = Convert::ToDouble(text_range_func->Text);
			//округляем в большую сторону
			int range_func_int = ceil(range_func);

			//строим отрезки
			if (checkBox1->Checked) {
				for (int i = 0; i <= range_func_int; i++) {
					F_list->Add(i - 0.999, pExperiment->Distribution_function(i - 0.999));
					F_list->Add(i, pExperiment->Distribution_function(i));
					//добавляем разрыв
					F_list->Add(PointPairBase::Missing, PointPairBase::Missing);
				}
				LineItem Curve1 = panel->AddCurve("F(η)", F_list, Color::Red, SymbolType::None);
			}
			if (checkBox2->Checked) {
				for (int i = 0; i <= range_func_int; i++) {
					Sample_F_list->Add(i - 0.999, pExperiment->Sample_distribution_function(i - 0.999));
					Sample_F_list->Add(i, pExperiment->Sample_distribution_function(i));
					if (pExperiment->Sample_distribution_function(i) != 1)
						Sample_F_list->Add(PointPairBase::Missing, PointPairBase::Missing);
				}
				LineItem Curve2 = panel->AddCurve("^F(η)", Sample_F_list, Color::Blue, SymbolType::None);
			}

			//Считаем значение статистики Колмогова
			double Kolmog_value=0;
			for (double i = 0.5; i < pExperiment->sort_vec[pExperiment->sort_vec.size() - 1].value + 1; i++) {
				if (Kolmog_value < abs(pExperiment->Distribution_function(i) - pExperiment->Sample_distribution_function(i)))
					Kolmog_value = abs(pExperiment->Distribution_function(i) - pExperiment->Sample_distribution_function(i));
			}
			//Выводим значение D и статистику Колмогорова
			dataGridView3->Rows[0]->Cells[9]->Value = sqrt(pExperiment->size)*Kolmog_value;
			dataGridView3->Rows[0]->Cells[10]->Value = Kolmog_value;

			// Устанавливаем интересующий нас интервал по оси X
			panel->XAxis->Scale->Min = -1;
			panel->XAxis->Scale->Max = range_func;

			//Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = 0;
			panel->YAxis->Scale->Max = 1.2;

			// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
			// В противном случае на рисунке будет показана только часть графика, 
			// которая умещается в интервалы по осям, установленные по умолчанию
			zedGraphControl1->AxisChange();
			// Обновляем график
			zedGraphControl1->Invalidate();
		}
	}
		   
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	if (pExperiment) {
		if (pHypoth) {
			delete pHypoth;
		}

		int k = Convert::ToInt32(textBox_number_of_inter->Text);
		double alpha = Convert::ToDouble(textBox_alpha->Text);

		pHypoth = new Hypothesis(pExperiment, k);

		for (int i = 0; i < k; i++)
		{	//Печать в таблицу
			pHypoth->intervals[i].left_boundary = Convert::ToDouble(dataGridView4->Rows[i]->Cells[0]->Value) ;
			pHypoth->intervals[i].right_boundary = Convert::ToDouble(dataGridView4->Rows[i]->Cells[1]->Value);
		}
		pHypoth->calculate_probab();
		pHypoth->calculate_quantity();

		for (int i = 0; i < k; i++)
		{	//Печать в таблицу
			dataGridView4->Rows[i]->Cells[2]->Value = pHypoth->intervals[i].probability;
			dataGridView4->Rows[i]->Cells[3]->Value = pHypoth->intervals[i].quantity;
		}
		
		double xi = alglib::invchisquaredistribution(k - 1, alpha);
		double R_o = pHypoth->calculate_R_o();

		label_r0->Text = "Ro: "+R_o;
		//label_r0->Text += "\nXi: " + xi;
		if (R_o <= xi)
			label_r0->Text += "\n Принимаем гипотезу";
		else label_r0->Text += "\n Отвергаем гипотезу";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView4->Rows->Clear();
}
};
}
