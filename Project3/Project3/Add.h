#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class Add : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^other;
	public:
		Add(System::Windows::Forms::Form ^o)
		{
			other = o;
			InitializeComponent();
			FillCombo();
			Radio_butt_check();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button3;







	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  fakc_ins;


	private: System::Windows::Forms::TextBox^  full_en;

	private: System::Windows::Forms::TextBox^  ins_fio_ua;

	private: System::Windows::Forms::TextBox^  fio_ins_ru;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox_kaf;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  id_wos_text;
	private: System::Windows::Forms::TextBox^  id_Scop_text;
	private: System::Windows::Forms::TextBox^  email_text;



	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->id_wos_text = (gcnew System::Windows::Forms::TextBox());
			this->id_Scop_text = (gcnew System::Windows::Forms::TextBox());
			this->email_text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_kaf = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->fakc_ins = (gcnew System::Windows::Forms::TextBox());
			this->full_en = (gcnew System::Windows::Forms::TextBox());
			this->ins_fio_ua = (gcnew System::Windows::Forms::TextBox());
			this->fio_ins_ru = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"На главную";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Add::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 26);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(151, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Добавить нового автора";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Add::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(173, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Добавить новую публикацию";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Add::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 72);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(150, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Добавить новый журнал";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Add::radioButton3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(6, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 104);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление информации";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Location = System::Drawing::Point(6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 102);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Удаление информации";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 70);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(108, 17);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Удалить журнал";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 47);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(106, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Удалить автора";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 24);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(132, 17);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Удалить публикацию";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(5, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(697, 374);
			this->tabControl1->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->id_wos_text);
			this->tabPage1->Controls->Add(this->id_Scop_text);
			this->tabPage1->Controls->Add(this->email_text);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->textBox_kaf);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->fakc_ins);
			this->tabPage1->Controls->Add(this->full_en);
			this->tabPage1->Controls->Add(this->ins_fio_ua);
			this->tabPage1->Controls->Add(this->fio_ins_ru);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 348);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавить";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// id_wos_text
			// 
			this->id_wos_text->Location = System::Drawing::Point(331, 260);
			this->id_wos_text->Name = L"id_wos_text";
			this->id_wos_text->Size = System::Drawing::Size(238, 20);
			this->id_wos_text->TabIndex = 35;
			this->id_wos_text->Visible = false;
			// 
			// id_Scop_text
			// 
			this->id_Scop_text->Location = System::Drawing::Point(331, 234);
			this->id_Scop_text->Name = L"id_Scop_text";
			this->id_Scop_text->Size = System::Drawing::Size(238, 20);
			this->id_Scop_text->TabIndex = 34;
			this->id_Scop_text->Visible = false;
			// 
			// email_text
			// 
			this->email_text->Location = System::Drawing::Point(311, 90);
			this->email_text->Name = L"email_text";
			this->email_text->Size = System::Drawing::Size(258, 20);
			this->email_text->TabIndex = 33;
			this->email_text->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 100);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"email";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(270, 267);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"ID WoS";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(253, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"ID SCOPUS";
			this->label8->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(331, 207);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(238, 21);
			this->comboBox2->TabIndex = 29;
			this->comboBox2->Visible = false;
			// 
			// textBox_kaf
			// 
			this->textBox_kaf->Location = System::Drawing::Point(331, 179);
			this->textBox_kaf->Name = L"textBox_kaf";
			this->textBox_kaf->Size = System::Drawing::Size(238, 20);
			this->textBox_kaf->TabIndex = 28;
			this->textBox_kaf->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(231, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Ученная степень";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(263, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Кафедра";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(252, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Факультет";
			this->label5->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(331, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(238, 21);
			this->comboBox1->TabIndex = 24;
			this->comboBox1->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(584, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Сохранить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Add::button5_Click);
			// 
			// fakc_ins
			// 
			this->fakc_ins->Location = System::Drawing::Point(331, 150);
			this->fakc_ins->Name = L"fakc_ins";
			this->fakc_ins->Size = System::Drawing::Size(238, 20);
			this->fakc_ins->TabIndex = 22;
			this->fakc_ins->Visible = false;
			// 
			// full_en
			// 
			this->full_en->Location = System::Drawing::Point(311, 64);
			this->full_en->Name = L"full_en";
			this->full_en->Size = System::Drawing::Size(258, 20);
			this->full_en->TabIndex = 21;
			this->full_en->Visible = false;
			// 
			// ins_fio_ua
			// 
			this->ins_fio_ua->Location = System::Drawing::Point(311, 35);
			this->ins_fio_ua->Name = L"ins_fio_ua";
			this->ins_fio_ua->Size = System::Drawing::Size(258, 20);
			this->ins_fio_ua->TabIndex = 20;
			this->ins_fio_ua->Visible = false;
			// 
			// fio_ins_ru
			// 
			this->fio_ins_ru->Location = System::Drawing::Point(311, 9);
			this->fio_ins_ru->Name = L"fio_ins_ru";
			this->fio_ins_ru->Size = System::Drawing::Size(258, 20);
			this->fio_ins_ru->TabIndex = 19;
			this->fio_ins_ru->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Университет";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(244, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Full name";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ПІБ";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(244, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"ФИО";
			this->label1->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(689, 348);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Удалить";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"На главную";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Add::button4_Click);
			// 
			// Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 375);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Add";
			this->Text = L"Add";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		other->Show();
		
	}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((!(radioButton1->Checked))&& (!(radioButton2->Checked))&& (!(radioButton3->Checked)))
		MessageBox::Show("Выберите действие!");
	else
	{

		String^constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDB = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDB;
		MySqlDataReader^ myReader;
		if (radioButton1->Checked)
			cmdDB = gcnew MySqlCommand("insert into fkn_info.info_author(Fio_ru, Fio_en, Fio_ua, university,faculty, department, degree,id_scopus,id_wos,email) VALUES('" + this->fio_ins_ru->Text + "','" + this->ins_fio_ua->Text + "','" + this->full_en->Text + "','" + this->comboBox1->Text + "','" + this->fakc_ins->Text + "','" + this->textBox_kaf->Text + "','" + this->comboBox2->Text + "','" + this->id_Scop_text->Text + "','" + this->id_wos_text->Text + "','" + this->email_text->Text + "') ;", conDB);

		else if (radioButton3->Checked)
			cmdDB = gcnew MySqlCommand("insert into fkn_info.magazines(Name_mag, City) VALUES('" + this->fio_ins_ru->Text + "','" + this->ins_fio_ua->Text + "') ;", conDB);



		try {

			conDB->Open();
			myReader = cmdDB->ExecuteReader();
			MessageBox::Show("Запись добавлена!");

			fio_ins_ru->Text = nullptr;
			ins_fio_ua->Text = nullptr;
			full_en->Text = nullptr;
			comboBox1->Text = nullptr;;
			comboBox2->Text = nullptr;
			fakc_ins->Text = nullptr;
			textBox_kaf->Text = nullptr;
			id_Scop_text->Text = nullptr;
			id_wos_text->Text = nullptr;
			email_text->Text = nullptr;
			while (myReader->Read())
			{

			}


		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}//else
		
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		other->Show();
}
private: void Radio_butt_check(void) {
	if (radioButton1->Checked)
	{
		label1->Text = "ФИО";
		label2->Text = "ПІБ";
		ins_fio_ua->Visible = true;
		fio_ins_ru->Visible = true;
		ins_fio_ua->Visible = true;
		full_en->Visible = true;
		comboBox1->Visible = true;
		comboBox2->Visible = true;
		fakc_ins->Visible = true;
		textBox_kaf->Visible = true;
		id_Scop_text->Visible = true;
		id_wos_text->Visible = true;
		email_text->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
	}
	else if (radioButton2->Checked)
	{
		fio_ins_ru->Visible = false;
		ins_fio_ua->Visible = false;
		full_en->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		fakc_ins->Visible = false;
		textBox_kaf->Visible = false;
		id_Scop_text->Visible = false;
		id_wos_text->Visible = false;
		email_text->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
	}
	else if (radioButton3->Checked) {
		label1->Text = "Название ";
		label1->Visible = true;
		fio_ins_ru->Visible = true;
		label2->Text = "Город";
		label2->Visible = true;
		ins_fio_ua->Visible = true;
		full_en->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		fakc_ins->Visible = false;
		textBox_kaf->Visible = false;
		id_Scop_text->Visible = false;
		id_wos_text->Visible = false;
		email_text->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
	}
}
private:void FillCombo(void) {
		comboBox2->Items->Add("-");
		comboBox2->Items->Add("д.т.н");
		comboBox2->Items->Add("доцент");
		comboBox2->Items->Add("профессор");
		String^constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDB = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from fkn_info.university_info;", conDB);
		MySqlDataReader^ myReader;

		try {

			conDB->Open();
			myReader = cmdDB->ExecuteReader();
			while (myReader->Read())
			{
				String^ vId;
				vId = myReader->GetString("id_Univer_inf");
				//vId=myReader->GetString("id_Univer_inf")+". "+ myReader->GetString("Name_U");
				comboBox1->Items->Add(vId);
				
			}


		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
		}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Radio_butt_check();
}

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Radio_butt_check();
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Radio_butt_check();
}
};
}
