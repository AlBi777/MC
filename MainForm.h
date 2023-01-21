#pragma once
#define max 99

struct matrix {
	int row = 0;
	int column = 0;
	int mat[max][max];
}A,B,C;



namespace MC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ Delete_A;

	private: System::Windows::Forms::Button^ Create_A;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ Delete_B;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Button^ Create_B;

	private: System::Windows::Forms::Button^ Delete_res;
	private: System::Windows::Forms::TextBox^ ResB;
	private: System::Windows::Forms::TextBox^ ResA;
	private: System::Windows::Forms::Label^ LB;

	private: System::Windows::Forms::Label^ LA;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Button^ multiply_a;

	private: System::Windows::Forms::Button^ Tr_a;
	private: System::Windows::Forms::Button^ pow_a;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Button^ opr_a;


	private: System::Windows::Forms::Button^ obrM_A;

	private: System::Windows::Forms::Button^ Delete_all;

	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ ObrM_B;


	private: System::Windows::Forms::Button^ opr_b;

	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ tr_b;

	private: System::Windows::Forms::Button^ pow_b;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Button^ multiply_b;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Delete_A = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Create_A = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Delete_B = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Create_B = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Delete_res = (gcnew System::Windows::Forms::Button());
			this->ResB = (gcnew System::Windows::Forms::TextBox());
			this->ResA = (gcnew System::Windows::Forms::TextBox());
			this->LB = (gcnew System::Windows::Forms::Label());
			this->LA = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Delete_all = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->Tr_a = (gcnew System::Windows::Forms::Button());
			this->pow_a = (gcnew System::Windows::Forms::Button());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->multiply_a = (gcnew System::Windows::Forms::Button());
			this->opr_a = (gcnew System::Windows::Forms::Button());
			this->obrM_A = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->ObrM_B = (gcnew System::Windows::Forms::Button());
			this->opr_b = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->tr_b = (gcnew System::Windows::Forms::Button());
			this->pow_b = (gcnew System::Windows::Forms::Button());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->multiply_b = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1251, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->Delete_A);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->Create_A);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 324);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Матрица А";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Столбцы:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Строки:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(305, 244);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 22);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Delete_A
			// 
			this->Delete_A->Location = System::Drawing::Point(235, 272);
			this->Delete_A->Name = L"Delete_A";
			this->Delete_A->Size = System::Drawing::Size(130, 32);
			this->Delete_A->TabIndex = 4;
			this->Delete_A->Text = L"Удалить";
			this->Delete_A->UseVisualStyleBackColor = true;
			this->Delete_A->Click += gcnew System::EventHandler(this, &MainForm::Delete_A_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(69, 244);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 22);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Create_A
			// 
			this->Create_A->Location = System::Drawing::Point(12, 272);
			this->Create_A->Name = L"Create_A";
			this->Create_A->Size = System::Drawing::Size(117, 32);
			this->Create_A->TabIndex = 4;
			this->Create_A->Text = L"Создать";
			this->Create_A->UseVisualStyleBackColor = true;
			this->Create_A->Click += gcnew System::EventHandler(this, &MainForm::Create_A_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(359, 222);
			this->dataGridView1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->Delete_B);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->Create_B);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Location = System::Drawing::Point(456, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(371, 324);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Матрица В";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(232, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Столбцы:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Строки:";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(305, 244);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(60, 22);
			this->numericUpDown3->TabIndex = 12;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Delete_B
			// 
			this->Delete_B->Location = System::Drawing::Point(235, 272);
			this->Delete_B->Name = L"Delete_B";
			this->Delete_B->Size = System::Drawing::Size(130, 32);
			this->Delete_B->TabIndex = 9;
			this->Delete_B->Text = L"Удалить";
			this->Delete_B->UseVisualStyleBackColor = true;
			this->Delete_B->Click += gcnew System::EventHandler(this, &MainForm::Delete_B_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(69, 244);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 22);
			this->numericUpDown4->TabIndex = 11;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Create_B
			// 
			this->Create_B->Location = System::Drawing::Point(12, 272);
			this->Create_B->Name = L"Create_B";
			this->Create_B->Size = System::Drawing::Size(117, 32);
			this->Create_B->TabIndex = 10;
			this->Create_B->Text = L"Создать";
			this->Create_B->UseVisualStyleBackColor = true;
			this->Create_B->Click += gcnew System::EventHandler(this, &MainForm::Create_B_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(359, 222);
			this->dataGridView2->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Delete_res);
			this->groupBox3->Controls->Add(this->ResB);
			this->groupBox3->Controls->Add(this->ResA);
			this->groupBox3->Controls->Add(this->LB);
			this->groupBox3->Controls->Add(this->LA);
			this->groupBox3->Controls->Add(this->dataGridView3);
			this->groupBox3->Location = System::Drawing::Point(849, 31);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(371, 324);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Матрица С";
			// 
			// Delete_res
			// 
			this->Delete_res->Location = System::Drawing::Point(272, 250);
			this->Delete_res->Name = L"Delete_res";
			this->Delete_res->Size = System::Drawing::Size(96, 57);
			this->Delete_res->TabIndex = 5;
			this->Delete_res->Text = L"Удалить";
			this->Delete_res->UseVisualStyleBackColor = true;
			this->Delete_res->Click += gcnew System::EventHandler(this, &MainForm::Delete_res_Click);
			// 
			// ResB
			// 
			this->ResB->Location = System::Drawing::Point(187, 285);
			this->ResB->Name = L"ResB";
			this->ResB->Size = System::Drawing::Size(79, 22);
			this->ResB->TabIndex = 4;
			// 
			// ResA
			// 
			this->ResA->Location = System::Drawing::Point(187, 249);
			this->ResA->Name = L"ResA";
			this->ResA->Size = System::Drawing::Size(79, 22);
			this->ResA->TabIndex = 3;
			// 
			// LB
			// 
			this->LB->AutoSize = true;
			this->LB->Location = System::Drawing::Point(6, 288);
			this->LB->Name = L"LB";
			this->LB->Size = System::Drawing::Size(181, 16);
			this->LB->TabIndex = 2;
			this->LB->Text = L"Результат для матрицы В :";
			// 
			// LA
			// 
			this->LA->AutoSize = true;
			this->LA->Location = System::Drawing::Point(6, 250);
			this->LA->Name = L"LA";
			this->LA->Size = System::Drawing::Size(181, 16);
			this->LA->TabIndex = 1;
			this->LA->Text = L"Результат для матрицы А :";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(6, 21);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(359, 222);
			this->dataGridView3->TabIndex = 0;
			// 
			// plus
			// 
			this->plus->Location = System::Drawing::Point(16, 70);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(30, 30);
			this->plus->TabIndex = 4;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MainForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Location = System::Drawing::Point(16, 116);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(30, 30);
			this->minus->TabIndex = 5;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MainForm::minus_Click);
			// 
			// multiply
			// 
			this->multiply->Location = System::Drawing::Point(16, 165);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(30, 30);
			this->multiply->TabIndex = 6;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MainForm::multiply_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->Delete_all);
			this->groupBox4->Controls->Add(this->plus);
			this->groupBox4->Controls->Add(this->multiply);
			this->groupBox4->Controls->Add(this->minus);
			this->groupBox4->Location = System::Drawing::Point(389, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(61, 550);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			// 
			// Delete_all
			// 
			this->Delete_all->Location = System::Drawing::Point(16, 330);
			this->Delete_all->Name = L"Delete_all";
			this->Delete_all->Size = System::Drawing::Size(30, 193);
			this->Delete_all->TabIndex = 7;
			this->Delete_all->Text = L"О\r\nч\r\nи\r\nс\r\nт\r\nи\r\nт\r\nь";
			this->Delete_all->UseVisualStyleBackColor = true;
			this->Delete_all->Click += gcnew System::EventHandler(this, &MainForm::Delete_all_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->Tr_a);
			this->groupBox5->Controls->Add(this->pow_a);
			this->groupBox5->Controls->Add(this->numericUpDown6);
			this->groupBox5->Controls->Add(this->numericUpDown5);
			this->groupBox5->Controls->Add(this->multiply_a);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(12, 361);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(371, 114);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Дополнительные действия для матрицы А";
			// 
			// Tr_a
			// 
			this->Tr_a->Location = System::Drawing::Point(6, 78);
			this->Tr_a->Name = L"Tr_a";
			this->Tr_a->Size = System::Drawing::Size(359, 23);
			this->Tr_a->TabIndex = 4;
			this->Tr_a->Text = L"Транспонировать матрицу А";
			this->Tr_a->UseVisualStyleBackColor = true;
			// 
			// pow_a
			// 
			this->pow_a->Location = System::Drawing::Point(6, 49);
			this->pow_a->Name = L"pow_a";
			this->pow_a->Size = System::Drawing::Size(293, 23);
			this->pow_a->TabIndex = 3;
			this->pow_a->Text = L"Ввозвести матрицу в n-ую степень";
			this->pow_a->UseVisualStyleBackColor = true;
			this->pow_a->Click += gcnew System::EventHandler(this, &MainForm::pow_a_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(305, 50);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(60, 22);
			this->numericUpDown6->TabIndex = 2;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown5->Location = System::Drawing::Point(305, 22);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(60, 22);
			this->numericUpDown5->TabIndex = 1;
			// 
			// multiply_a
			// 
			this->multiply_a->Location = System::Drawing::Point(6, 21);
			this->multiply_a->Name = L"multiply_a";
			this->multiply_a->Size = System::Drawing::Size(293, 23);
			this->multiply_a->TabIndex = 0;
			this->multiply_a->Text = L"Умножить матрицу на";
			this->multiply_a->UseVisualStyleBackColor = true;
			// 
			// opr_a
			// 
			this->opr_a->Location = System::Drawing::Point(6, 21);
			this->opr_a->Name = L"opr_a";
			this->opr_a->Size = System::Drawing::Size(359, 23);
			this->opr_a->TabIndex = 5;
			this->opr_a->Text = L"Вычилить определитель";
			this->opr_a->UseVisualStyleBackColor = true;
			// 
			// obrM_A
			// 
			this->obrM_A->Location = System::Drawing::Point(6, 50);
			this->obrM_A->Name = L"obrM_A";
			this->obrM_A->Size = System::Drawing::Size(359, 23);
			this->obrM_A->TabIndex = 7;
			this->obrM_A->Text = L"Найти обратную матрицу";
			this->obrM_A->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->obrM_A);
			this->groupBox6->Controls->Add(this->opr_a);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->Location = System::Drawing::Point(12, 481);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(371, 100);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Вычисления для матрицы А";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->ObrM_B);
			this->groupBox7->Controls->Add(this->opr_b);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox7->Location = System::Drawing::Point(450, 481);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(371, 100);
			this->groupBox7->TabIndex = 11;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Вычисления для матрицы В";
			// 
			// ObrM_B
			// 
			this->ObrM_B->Location = System::Drawing::Point(6, 50);
			this->ObrM_B->Name = L"ObrM_B";
			this->ObrM_B->Size = System::Drawing::Size(359, 23);
			this->ObrM_B->TabIndex = 7;
			this->ObrM_B->Text = L"Найти обратную матрицу";
			this->ObrM_B->UseVisualStyleBackColor = true;
			// 
			// opr_b
			// 
			this->opr_b->Location = System::Drawing::Point(6, 21);
			this->opr_b->Name = L"opr_b";
			this->opr_b->Size = System::Drawing::Size(359, 23);
			this->opr_b->TabIndex = 5;
			this->opr_b->Text = L"Вычилить определитель";
			this->opr_b->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->tr_b);
			this->groupBox8->Controls->Add(this->pow_b);
			this->groupBox8->Controls->Add(this->numericUpDown7);
			this->groupBox8->Controls->Add(this->numericUpDown8);
			this->groupBox8->Controls->Add(this->multiply_b);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox8->Location = System::Drawing::Point(450, 361);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(371, 114);
			this->groupBox8->TabIndex = 10;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Дополнительные действия для матрицы В";
			// 
			// tr_b
			// 
			this->tr_b->Location = System::Drawing::Point(6, 78);
			this->tr_b->Name = L"tr_b";
			this->tr_b->Size = System::Drawing::Size(359, 23);
			this->tr_b->TabIndex = 4;
			this->tr_b->Text = L"Транспонировать матрицу В";
			this->tr_b->UseVisualStyleBackColor = true;
			// 
			// pow_b
			// 
			this->pow_b->Location = System::Drawing::Point(6, 49);
			this->pow_b->Name = L"pow_b";
			this->pow_b->Size = System::Drawing::Size(293, 23);
			this->pow_b->TabIndex = 3;
			this->pow_b->Text = L"Ввозвести матрицу в n-ую степень";
			this->pow_b->UseVisualStyleBackColor = true;
			this->pow_b->Click += gcnew System::EventHandler(this, &MainForm::pow_b_Click);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(305, 50);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(60, 22);
			this->numericUpDown7->TabIndex = 2;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown8->Location = System::Drawing::Point(305, 22);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, System::Int32::MinValue });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(60, 22);
			this->numericUpDown8->TabIndex = 1;
			// 
			// multiply_b
			// 
			this->multiply_b->Location = System::Drawing::Point(6, 21);
			this->multiply_b->Name = L"multiply_b";
			this->multiply_b->Size = System::Drawing::Size(293, 23);
			this->multiply_b->TabIndex = 0;
			this->multiply_b->Text = L"Умножить матрицу на";
			this->multiply_b->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1251, 670);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Матричный калькулятор";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion














		// Для матрицы А
	private: System::Void Create_A_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row != 0 || A.column != 0) {
			dataGridView1->RowCount = 0;
			dataGridView1->ColumnCount = 0;
		}
		dataGridView1->RowCount = A.row = Convert::ToInt32(numericUpDown1->Value);
		dataGridView1->ColumnCount = A.column = Convert::ToInt32(numericUpDown2->Value);
	}
	private: System::Void Delete_A_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowCount = 0; A.row = 0;
		dataGridView1->ColumnCount = 0; A.column = 0;
	}
		   // Для матрицы В
	private: System::Void Create_B_Click(System::Object^ sender, System::EventArgs^ e) {
		if (B.row != 0 || B.column != 0) {
			dataGridView2->RowCount = 0;
			dataGridView2->ColumnCount = 0;
		}
		dataGridView2->RowCount = B.row = Convert::ToInt32(numericUpDown4->Value);
		dataGridView2->ColumnCount = B.column = Convert::ToInt32(numericUpDown3->Value);
	}
	private: System::Void Delete_B_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->RowCount = 0; B.row = 0;
		dataGridView2->ColumnCount = 0; B.column = 0;

	}
		   // Для матрицы С
	private: System::Void Delete_res_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView3->RowCount = 0; C.row = 0;
		dataGridView3->ColumnCount = 0; C.column = 0;
		ResA->Text = L""; ResB->Text = L"";
	}

		   // Операции с двумя матрицами
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row == 0 || B.column == 0) { MessageBox::Show("Матрицы пусты", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы пусты
		if (A.row != B.row || B.column != A.column) { MessageBox::Show("Матрицы не подходят по условиям для операции!\nКоличество строк и столбцов матриц должны быть равны!", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы не подходят по условиям
		if (C.row != 0 || C.column != 0) {
			dataGridView3->RowCount = 0;
			dataGridView3->ColumnCount = 0;
		}
		C = B;
		dataGridView3->RowCount = C.row;
		dataGridView3->ColumnCount = C.column;

		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) + Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
			}
		}
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row == 0 || B.column == 0) { MessageBox::Show("Матрицы пусты", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы пусты
		if (A.row != B.row || B.column != A.column) { MessageBox::Show("Матрицы не подходят по условиям для операции!\nКоличество строк и столбцов матриц должны быть равны!", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы не подходят по условиям
		if (C.row != 0 || C.column != 0) {
			dataGridView3->RowCount = 0;
			dataGridView3->ColumnCount = 0;
		}
		C = B;
		dataGridView3->RowCount = C.row;
		dataGridView3->ColumnCount = C.column;

		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) - Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
			}
		}
	}
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row == 0 || B.column == 0) { MessageBox::Show("Матрицы пусты", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы пусты
		if (A.column != B.row) { MessageBox::Show("Матрицы не подходят по условиям для операции!\nКоличество столбцов матрицы А = количество строк матрицы В!", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы не подходят по условиям

		if (C.row != 0 || C.column != 0) {
			dataGridView3->RowCount = 0;
			dataGridView3->ColumnCount = 0;
		}

		C.row = A.row;
		C.column = B.column;
		dataGridView3->RowCount = C.row;
		dataGridView3->ColumnCount = C.column;
		int t = A.column;

		// Запись в 2-мерные массивы из таблиц
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				A.mat[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		for (int i = 0; i < dataGridView2->Rows->Count; i++) {
			for (int j = 0; j < dataGridView2->Columns->Count; j++) {
				B.mat[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
			}
		}
		// Очистка
		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				C.mat[i][j] = 0;
			}
		}
			// Умножение
			for (int i = 0; i < C.row; i++) {
				for (int j = 0; j < C.column; j++) {
					for (int k = 0; k < t; k++) {
						C.mat[i][j] += A.mat[i][k] * B.mat[k][j];
					}
				}
			}

			//Вывод
			for (int i = 0; i < dataGridView3->Rows->Count; i++) {
				for (int j = 0; j < dataGridView3->Columns->Count; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = C.mat[i][j];
				}
			}


		
	}
	
	
	private: System::Void Delete_all_Click(System::Object^ sender, System::EventArgs^ e) {
		// Полная очистка инф. полей
		dataGridView1->RowCount = 0; A.row = 0; // A
		dataGridView1->ColumnCount = 0; A.column = 0;

		dataGridView2->RowCount = 0; B.row = 0; // B
		dataGridView2->ColumnCount = 0; B.column = 0;

		dataGridView3->RowCount = 0; C.row = 0; // C
		dataGridView3->ColumnCount = 0; C.column = 0;
		ResA->Text = L""; ResB->Text = L"";
		
	}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void pow_a_Click(System::Object^ sender, System::EventArgs^ e) {
	if (A.row == 0 || A.column == 0) { MessageBox::Show("Матрица пуста", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы пусты
	if (A.column != A.row) { MessageBox::Show("Матрица не подходит по условиям для операции!\nКоличество столбцов = количество строк матрицы А!", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы не подходят по условиям

	if (C.row != 0 || C.column != 0) {
		dataGridView3->RowCount = 0;
		dataGridView3->ColumnCount = 0;
	}

	C = A;
	dataGridView3->RowCount = C.row;
	dataGridView3->ColumnCount = C.column;
	int t = A.column;

	// Запись в 2-мерные массивы из таблиц
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		for (int j = 0; j < dataGridView1->Columns->Count; j++) {
			A.mat[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}
	// Очистка
	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		for (int j = 0; j < dataGridView3->Columns->Count; j++) {
			C.mat[i][j] = 0;
		}
	}
	// Ввозведение в степень
	int st = Convert::ToInt32(numericUpDown6->Value);
	B = A;
	for (int step = 1; step < st; step++) {

		for (int i = 0; i < C.row; i++) {
			for (int j = 0; j < C.column; j++) {
				for (int k = 0; k < t; k++) {
					C.mat[i][j] += A.mat[i][k] * B.mat[k][j];
				}
			}
		}
		A = C;
		// Очистка
		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				C.mat[i][j] = 0;
			}
		}
	}
	C = A;
	//  Вывод
	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		for (int j = 0; j < dataGridView3->Columns->Count; j++) {
			dataGridView3->Rows[i]->Cells[j]->Value = C.mat[i][j];
		}
	}




}
private: System::Void pow_b_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B.row == 0 || B.column == 0) { MessageBox::Show("Матрица пуста", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы пусты
	if (B.column != B.row) { MessageBox::Show("Матрица не подходит по условиям для операции!\nКоличество столбцов = количество строк матрицы А!", "Внимание", MessageBoxButtons::OK); return; } // Если матрицы не подходят по условиям

	if (C.row != 0 || C.column != 0) {
		dataGridView3->RowCount = 0;
		dataGridView3->ColumnCount = 0;
	}

	C = B;
	dataGridView3->RowCount = C.row;
	dataGridView3->ColumnCount = C.column;
	int t = B.column;

	// Запись в 2-мерные массив из таблицы
	for (int i = 0; i < dataGridView2->Rows->Count; i++) {
		for (int j = 0; j < dataGridView2->Columns->Count; j++) {
			B.mat[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
		}
	}
	// Очистка
	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		for (int j = 0; j < dataGridView3->Columns->Count; j++) {
			C.mat[i][j] = 0;
		}
	}
	// Ввозведение в степень
	int st = Convert::ToInt32(numericUpDown7->Value);
	A = B;
	for (int step = 1; step < st; step++) {

		for (int i = 0; i < C.row; i++) {
			for (int j = 0; j < C.column; j++) {
				for (int k = 0; k < t; k++) {
					C.mat[i][j] += B.mat[i][k] * A.mat[k][j];
				}
			}
		}
		B = C;
		// Очистка
		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				C.mat[i][j] = 0;
			}
		}
	}
	C = B;
	//  Вывод
	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		for (int j = 0; j < dataGridView3->Columns->Count; j++) {
			dataGridView3->Rows[i]->Cells[j]->Value = C.mat[i][j];
		}
	}





}
};
}
