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
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ show_lbl;
	private: System::Windows::Forms::TextBox^ ccv_tb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ date_expiry_lbl;
	private: System::Windows::Forms::DateTimePicker^ date_Time_Picker_2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ conditional_lbl;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ submit_btn;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->show_lbl = (gcnew System::Windows::Forms::Label());
			this->ccv_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->date_expiry_lbl = (gcnew System::Windows::Forms::Label());
			this->date_Time_Picker_2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->conditional_lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->submit_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(662, 37);
			this->label2->TabIndex = 11;
			this->label2->Text = L"\"Debit Card Information  For Transaction\"";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Controls->Add(this->submit_btn);
			this->groupBox1->Controls->Add(this->show_lbl);
			this->groupBox1->Controls->Add(this->ccv_tb);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->date_expiry_lbl);
			this->groupBox1->Controls->Add(this->date_Time_Picker_2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->conditional_lbl);
			this->groupBox1->Location = System::Drawing::Point(42, 98);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(498, 280);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// show_lbl
			// 
			this->show_lbl->AutoSize = true;
			this->show_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_lbl->ForeColor = System::Drawing::Color::White;
			this->show_lbl->Location = System::Drawing::Point(101, 224);
			this->show_lbl->Name = L"show_lbl";
			this->show_lbl->Size = System::Drawing::Size(316, 32);
			this->show_lbl->TabIndex = 25;
			this->show_lbl->Text = L"Transaction Successfull !";
			// 
			// ccv_tb
			// 
			this->ccv_tb->Location = System::Drawing::Point(273, 162);
			this->ccv_tb->Name = L"ccv_tb";
			this->ccv_tb->Size = System::Drawing::Size(203, 20);
			this->ccv_tb->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 24);
			this->label1->TabIndex = 23;
			this->label1->Text = L"CCV Number(4 digits) :";
			// 
			// date_expiry_lbl
			// 
			this->date_expiry_lbl->AutoSize = true;
			this->date_expiry_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_expiry_lbl->Location = System::Drawing::Point(34, 95);
			this->date_expiry_lbl->Name = L"date_expiry_lbl";
			this->date_expiry_lbl->Size = System::Drawing::Size(128, 24);
			this->date_expiry_lbl->TabIndex = 22;
			this->date_expiry_lbl->Text = L"Expiry Date :";
			// 
			// date_Time_Picker_2
			// 
			this->date_Time_Picker_2->Location = System::Drawing::Point(273, 97);
			this->date_Time_Picker_2->MinDate = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			this->date_Time_Picker_2->Name = L"date_Time_Picker_2";
			this->date_Time_Picker_2->Size = System::Drawing::Size(205, 20);
			this->date_Time_Picker_2->TabIndex = 21;
			this->date_Time_Picker_2->Value = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(271, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 20;
			// 
			// conditional_lbl
			// 
			this->conditional_lbl->AutoSize = true;
			this->conditional_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conditional_lbl->Location = System::Drawing::Point(30, 35);
			this->conditional_lbl->Name = L"conditional_lbl";
			this->conditional_lbl->Size = System::Drawing::Size(205, 24);
			this->conditional_lbl->TabIndex = 19;
			this->conditional_lbl->Text = L"Credit Card Number :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(559, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 44);
			this->button1->TabIndex = 28;
			this->button1->Text = L"View Ticket Info ->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click_2);
			// 
			// submit_btn
			// 
			this->submit_btn->Location = System::Drawing::Point(224, 198);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(75, 23);
			this->submit_btn->TabIndex = 26;
			this->submit_btn->Text = L"Submit";
			this->submit_btn->UseVisualStyleBackColor = true;
			this->submit_btn->Click += gcnew System::EventHandler(this, &MyForm5::submit_btn_Click_1);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm5";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void conditional_lbl_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Hide();
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void submit_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	show_lbl->Show();
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

}
};
}
