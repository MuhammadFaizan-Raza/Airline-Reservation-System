#pragma once
#include "MyForm8.h"

namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:










	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ bank_lbl;
	private: System::Windows::Forms::ComboBox^ bank_combo_box;
	private: System::Windows::Forms::Label^ show_lbl;
	private: System::Windows::Forms::TextBox^ password_tb;
	private: System::Windows::Forms::TextBox^ username_tb;
	private: System::Windows::Forms::Label^ user_name_lbl;
	private: System::Windows::Forms::Label^ password_lbl;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bank_lbl = (gcnew System::Windows::Forms::Label());
			this->bank_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->show_lbl = (gcnew System::Windows::Forms::Label());
			this->password_tb = (gcnew System::Windows::Forms::TextBox());
			this->username_tb = (gcnew System::Windows::Forms::TextBox());
			this->user_name_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(650, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"\"Banking information for Transaction\" ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(549, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 44);
			this->button1->TabIndex = 18;
			this->button1->Text = L"View Ticket Info ->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Controls->Add(this->bank_lbl);
			this->groupBox1->Controls->Add(this->bank_combo_box);
			this->groupBox1->Controls->Add(this->show_lbl);
			this->groupBox1->Controls->Add(this->password_tb);
			this->groupBox1->Controls->Add(this->username_tb);
			this->groupBox1->Controls->Add(this->user_name_lbl);
			this->groupBox1->Controls->Add(this->password_lbl);
			this->groupBox1->Location = System::Drawing::Point(44, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(500, 280);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// bank_lbl
			// 
			this->bank_lbl->AutoSize = true;
			this->bank_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_lbl->Location = System::Drawing::Point(29, 150);
			this->bank_lbl->Name = L"bank_lbl";
			this->bank_lbl->Size = System::Drawing::Size(137, 24);
			this->bank_lbl->TabIndex = 23;
			this->bank_lbl->Text = L"Select Banks :";
			// 
			// bank_combo_box
			// 
			this->bank_combo_box->FormattingEnabled = true;
			this->bank_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"HBL Bank", L"Standard Chartered Bank", L"Meezan Bank",
					L"UBL Bank", L"Summit Bank", L"Bank Al-Habib"
			});
			this->bank_combo_box->Location = System::Drawing::Point(243, 155);
			this->bank_combo_box->Name = L"bank_combo_box";
			this->bank_combo_box->Size = System::Drawing::Size(205, 21);
			this->bank_combo_box->TabIndex = 22;
			this->bank_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::bank_combo_box_SelectedIndexChanged_2);
			// 
			// show_lbl
			// 
			this->show_lbl->AutoSize = true;
			this->show_lbl->BackColor = System::Drawing::Color::Transparent;
			this->show_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_lbl->ForeColor = System::Drawing::Color::White;
			this->show_lbl->Location = System::Drawing::Point(61, 207);
			this->show_lbl->Name = L"show_lbl";
			this->show_lbl->Size = System::Drawing::Size(387, 40);
			this->show_lbl->TabIndex = 21;
			this->show_lbl->Text = L"Transaction Successfull !";
			// 
			// password_tb
			// 
			this->password_tb->Location = System::Drawing::Point(242, 98);
			this->password_tb->Name = L"password_tb";
			this->password_tb->Size = System::Drawing::Size(207, 20);
			this->password_tb->TabIndex = 20;
			// 
			// username_tb
			// 
			this->username_tb->Location = System::Drawing::Point(244, 43);
			this->username_tb->Name = L"username_tb";
			this->username_tb->Size = System::Drawing::Size(205, 20);
			this->username_tb->TabIndex = 19;
			// 
			// user_name_lbl
			// 
			this->user_name_lbl->AutoSize = true;
			this->user_name_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name_lbl->Location = System::Drawing::Point(29, 43);
			this->user_name_lbl->Name = L"user_name_lbl";
			this->user_name_lbl->Size = System::Drawing::Size(121, 24);
			this->user_name_lbl->TabIndex = 18;
			this->user_name_lbl->Text = L"User Name :";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->Location = System::Drawing::Point(30, 98);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(108, 24);
			this->password_lbl->TabIndex = 17;
			this->password_lbl->Text = L"Password :";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm7";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Hide();
}
private: System::Void bank_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void password_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void bank_combo_box_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (bank_combo_box->SelectedItem->ToString() == "HBL Bank" || bank_combo_box->SelectedItem->ToString() == "Meezan Bank" || bank_combo_box->SelectedItem->ToString() == "Standard Chartered Bank" || bank_combo_box->SelectedItem->ToString() == "UBL Bank" || bank_combo_box->SelectedItem->ToString() == "Summit Bank" || bank_combo_box->SelectedItem->ToString() == "Bank Al_Habib"){
		
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm8^ obj2 = gcnew MyForm8();

	
}
private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void bank_combo_box_SelectedIndexChanged_2(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Show();
}
};
}
