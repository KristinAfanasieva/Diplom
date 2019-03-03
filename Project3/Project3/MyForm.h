#pragma once
#include "Add.h"
#include "Search.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			textBoxPassw->PasswordChar = '*';
			textBoxPassw->MaxLength = 15;
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxlog;
	private: System::Windows::Forms::TextBox^  textBoxPassw;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxlog = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassw = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(122, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBoxlog
			// 
			this->textBoxlog->Location = System::Drawing::Point(78, 19);
			this->textBoxlog->Multiline = true;
			this->textBoxlog->Name = L"textBoxlog";
			this->textBoxlog->Size = System::Drawing::Size(172, 20);
			this->textBoxlog->TabIndex = 1;
			// 
			// textBoxPassw
			// 
			this->textBoxPassw->Location = System::Drawing::Point(78, 51);
			this->textBoxPassw->Name = L"textBoxPassw";
			this->textBoxPassw->Size = System::Drawing::Size(172, 20);
			this->textBoxPassw->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxPassw);
			this->groupBox1->Controls->Add(this->textBoxlog);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 141);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sing in";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(404, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(245, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(465, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 24);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Показать выборки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 336);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDB = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * FROM fkn_info.admin where name_adm='"+this->textBoxlog->Text+"' and password='"+this->textBoxPassw->Text +"' ;", conDB);
		MySqlDataReader^ myReader;
	
		
		try{
		
			conDB->Open();
			myReader = cmdDB->ExecuteReader();
			int count = 0;
			while(myReader->Read())
			{
				count++;
			}
			if (count == 1) {
				MessageBox::Show("        Доступ разрешен!       ");
				textBoxlog->Text = nullptr;
				textBoxPassw->Text = nullptr;
				this->Hide();
				Add^ formAdd = gcnew Add(this);// open formAdd
				formAdd->ShowDialog();
			}
			else 
				MessageBox::Show("Доступ запрещен!Некорректные данные...Повторите попытку");
		}
		catch(Exception ^ ex){
			MessageBox::Show(ex->Message);
		}
	}
	


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Search ^formSer = gcnew Search(this);
		formSer->ShowDialog();


}
};
}
