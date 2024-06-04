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
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ show_lbl;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ submit_btn;
	private: System::Windows::Forms::TextBox^ ccv_tb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ date_expiry_lbl;
	private: System::Windows::Forms::DateTimePicker^ date_Time_Picker_2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ conditional_lbl;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->show_lbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->submit_btn = (gcnew System::Windows::Forms::Button());
			this->ccv_tb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->date_expiry_lbl = (gcnew System::Windows::Forms::Label());
			this->date_Time_Picker_2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->conditional_lbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(610, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"\"Credit card information for Transaction\" ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(552, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 44);
			this->button1->TabIndex = 17;
			this->button1->Text = L"View Ticket Info ->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// show_lbl
			// 
			this->show_lbl->AutoSize = true;
			this->show_lbl->BackColor = System::Drawing::Color::Transparent;
			this->show_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_lbl->ForeColor = System::Drawing::Color::White;
			this->show_lbl->Location = System::Drawing::Point(90, 237);
			this->show_lbl->Name = L"show_lbl";
			this->show_lbl->Size = System::Drawing::Size(305, 31);
			this->show_lbl->TabIndex = 18;
			this->show_lbl->Text = L"Transaction Successfull !";
			this->show_lbl->Click += gcnew System::EventHandler(this, &MyForm6::show_lbl_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Controls->Add(this->submit_btn);
			this->groupBox1->Controls->Add(this->ccv_tb);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->date_expiry_lbl);
			this->groupBox1->Controls->Add(this->date_Time_Picker_2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->conditional_lbl);
			this->groupBox1->Controls->Add(this->show_lbl);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Location = System::Drawing::Point(55, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(495, 288);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// submit_btn
			// 
			this->submit_btn->BackColor = System::Drawing::Color::Silver;
			this->submit_btn->FlatAppearance->BorderSize = 0;
			this->submit_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_btn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->submit_btn->Location = System::Drawing::Point(199, 205);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(75, 23);
			this->submit_btn->TabIndex = 26;
			this->submit_btn->Text = L"Submit";
			this->submit_btn->UseVisualStyleBackColor = false;
			this->submit_btn->Click += gcnew System::EventHandler(this, &MyForm6::submit_btn_Click_1);
			// 
			// ccv_tb
			// 
			this->ccv_tb->Location = System::Drawing::Point(266, 162);
			this->ccv_tb->Name = L"ccv_tb";
			this->ccv_tb->Size = System::Drawing::Size(203, 20);
			this->ccv_tb->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(36, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 24);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Password :";
			// 
			// date_expiry_lbl
			// 
			this->date_expiry_lbl->AutoSize = true;
			this->date_expiry_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_expiry_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->date_expiry_lbl->Location = System::Drawing::Point(32, 100);
			this->date_expiry_lbl->Name = L"date_expiry_lbl";
			this->date_expiry_lbl->Size = System::Drawing::Size(128, 24);
			this->date_expiry_lbl->TabIndex = 23;
			this->date_expiry_lbl->Text = L"Expiry Date :";
			// 
			// date_Time_Picker_2
			// 
			this->date_Time_Picker_2->Location = System::Drawing::Point(266, 97);
			this->date_Time_Picker_2->MinDate = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			this->date_Time_Picker_2->Name = L"date_Time_Picker_2";
			this->date_Time_Picker_2->Size = System::Drawing::Size(205, 20);
			this->date_Time_Picker_2->TabIndex = 22;
			this->date_Time_Picker_2->Value = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(264, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 21;
			// 
			// conditional_lbl
			// 
			this->conditional_lbl->AutoSize = true;
			this->conditional_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conditional_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->conditional_lbl->Location = System::Drawing::Point(28, 40);
			this->conditional_lbl->Name = L"conditional_lbl";
			this->conditional_lbl->Size = System::Drawing::Size(205, 24);
			this->conditional_lbl->TabIndex = 20;
			this->conditional_lbl->Text = L"Credit Card Number :";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm6";
			this->Text = L"Airline reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void show_lbl_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Hide();
}
private: System::Void submit_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Show();

}
};
}
