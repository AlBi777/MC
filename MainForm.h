#pragma once

struct matrix {
	int row = 0;
	int column = 0;
}A,B,C;



namespace MC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ??????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????ToolStripMenuItem;
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



	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->??????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->??????????ToolStripMenuItem,
					this->?????ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1251, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ??????????ToolStripMenuItem
			// 
			this->??????????ToolStripMenuItem->Name = L"??????????ToolStripMenuItem";
			this->??????????ToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->??????????ToolStripMenuItem->Text = L"? ?????????";
			// 
			// ?????ToolStripMenuItem
			// 
			this->?????ToolStripMenuItem->Name = L"?????ToolStripMenuItem";
			this->?????ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->?????ToolStripMenuItem->Text = L"?????";
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
			this->groupBox1->Text = L"??????? ?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"???????:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"??????:";
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
			this->Delete_A->Text = L"???????";
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
			this->Create_A->Text = L"???????";
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
			this->groupBox2->Text = L"??????? ?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(232, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"???????:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"??????:";
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
			this->Delete_B->Text = L"???????";
			this->Delete_B->UseVisualStyleBackColor = true;
			this->Delete_B->Click += gcnew System::EventHandler(this, &MainForm::Delete_B_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(63, 244);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 22);
			this->numericUpDown4->TabIndex = 11;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Create_B
			// 
			this->Create_B->Location = System::Drawing::Point(6, 272);
			this->Create_B->Name = L"Create_B";
			this->Create_B->Size = System::Drawing::Size(117, 32);
			this->Create_B->TabIndex = 10;
			this->Create_B->Text = L"???????";
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
			this->groupBox3->Text = L"??????? ?";
			// 
			// Delete_res
			// 
			this->Delete_res->Location = System::Drawing::Point(293, 250);
			this->Delete_res->Name = L"Delete_res";
			this->Delete_res->Size = System::Drawing::Size(75, 57);
			this->Delete_res->TabIndex = 5;
			this->Delete_res->Text = L"???????";
			this->Delete_res->UseVisualStyleBackColor = true;
			this->Delete_res->Click += gcnew System::EventHandler(this, &MainForm::Delete_res_Click);
			// 
			// ResB
			// 
			this->ResB->Location = System::Drawing::Point(187, 285);
			this->ResB->Name = L"ResB";
			this->ResB->Size = System::Drawing::Size(100, 22);
			this->ResB->TabIndex = 4;
			// 
			// ResA
			// 
			this->ResA->Location = System::Drawing::Point(187, 249);
			this->ResA->Name = L"ResA";
			this->ResA->Size = System::Drawing::Size(100, 22);
			this->ResA->TabIndex = 3;
			// 
			// LB
			// 
			this->LB->AutoSize = true;
			this->LB->Location = System::Drawing::Point(6, 288);
			this->LB->Name = L"LB";
			this->LB->Size = System::Drawing::Size(181, 16);
			this->LB->TabIndex = 2;
			this->LB->Text = L"????????? ??? ??????? ? :";
			// 
			// LA
			// 
			this->LA->AutoSize = true;
			this->LA->Location = System::Drawing::Point(6, 250);
			this->LA->Name = L"LA";
			this->LA->Size = System::Drawing::Size(181, 16);
			this->LA->TabIndex = 1;
			this->LA->Text = L"????????? ??? ??????? ? :";
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
			this->plus->Location = System::Drawing::Point(16, 21);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(30, 30);
			this->plus->TabIndex = 4;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MainForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Location = System::Drawing::Point(16, 67);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(30, 30);
			this->minus->TabIndex = 5;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MainForm::minus_Click);
			// 
			// multiply
			// 
			this->multiply->Location = System::Drawing::Point(16, 116);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(30, 30);
			this->multiply->TabIndex = 6;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MainForm::multiply_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->plus);
			this->groupBox4->Controls->Add(this->multiply);
			this->groupBox4->Controls->Add(this->minus);
			this->groupBox4->Location = System::Drawing::Point(389, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(61, 324);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1251, 670);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"????????? ???????????";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ??? ??????? ?
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
		   // ??? ??????? ?
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
		   // ??? ??????? ?
	private: System::Void Delete_res_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView3->RowCount = 0; C.row = 0;
		dataGridView3->ColumnCount = 0; C.column = 0;
		ResA->Text = L""; ResB->Text = L"";
		LA->Text = L"????????? ??? ??????? ? :"; LB->Text = L"????????? ??? ??????? B :";
	}

		   // ???????? ? ????? ?????????
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row == 0 || B.column == 0) { MessageBox::Show("??????? ?????", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?????
		if (A.row != B.row || B.column != A.column) { MessageBox::Show("??????? ?? ???????? ?? ???????? ??? ????????!\n?????????? ????? ? ???????? ?????? ?????? ???? ?????!", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?? ???????? ?? ????????
		if (C.row != 0 || C.column != 0) {
			dataGridView3->RowCount = 0;
			dataGridView3->ColumnCount = 0;
		}
		C = B;
		dataGridView3->RowCount = C.row;
		dataGridView3->ColumnCount = C.column;
		
		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) +Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
			}
		}
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (A.row == 0 || B.column == 0) { MessageBox::Show("??????? ?????", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?????
		if (A.row != B.row || B.column != A.column) { MessageBox::Show("??????? ?? ???????? ?? ???????? ??? ????????!\n?????????? ????? ? ???????? ?????? ?????? ???? ?????!", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?? ???????? ?? ????????
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
		if (A.row == 0 || B.column == 0) { MessageBox::Show("??????? ?????", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?????
		if (A.row != B.column) { MessageBox::Show("??????? ?? ???????? ?? ???????? ??? ????????!\n?????????? ????? ??????? ? = ?????????? ???????? ??????? ?!", "????????", MessageBoxButtons::OK); return; } // ???? ??????? ?? ???????? ?? ????????
	
		if (C.row != 0 || C.column != 0) {
			dataGridView3->RowCount = 0;
			dataGridView3->ColumnCount = 0;
		}
		C.row = A.row;
		C.column = B.column;
		dataGridView3->RowCount = C.row;
		dataGridView3->ColumnCount = C.column;

		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			for (int j = 0; j < dataGridView3->Columns->Count; j++) {
				







			}
		}
	
	
	
	
	
	}
	};
}
