#pragma once
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm11.h"

namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;



	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}




	protected:























	private: System::Windows::Forms::Button^ message_show_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ time_lbl;
	private: System::Windows::Forms::Label^ transaction_lbl;
	private: System::Windows::Forms::ComboBox^ transaction_combo_box;
	private: System::Windows::Forms::TextBox^ id_card_tb;
	private: System::Windows::Forms::TextBox^ age_tb;
	private: System::Windows::Forms::TextBox^ email_tb;
	private: System::Windows::Forms::TextBox^ first_name_tb;
	private: System::Windows::Forms::TextBox^ contact_tb;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ female_rradio_btn;
	private: System::Windows::Forms::RadioButton^ male_radio_btn;
	private: System::Windows::Forms::Label^ age_lbl;
	private: System::Windows::Forms::Label^ email_lbl;
	private: System::Windows::Forms::Label^ contact_lbl;
	private: System::Windows::Forms::Label^ id_card_lbl;
	private: System::Windows::Forms::Label^ first_name_lbl;
	private: System::Windows::Forms::Label^ destination_lbl;
	private: System::Windows::Forms::Label^ initial_lbl;
	private: System::Windows::Forms::Label^ label1;















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm12::typeid));
			this->message_show_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->time_lbl = (gcnew System::Windows::Forms::Label());
			this->transaction_lbl = (gcnew System::Windows::Forms::Label());
			this->transaction_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->id_card_tb = (gcnew System::Windows::Forms::TextBox());
			this->age_tb = (gcnew System::Windows::Forms::TextBox());
			this->email_tb = (gcnew System::Windows::Forms::TextBox());
			this->first_name_tb = (gcnew System::Windows::Forms::TextBox());
			this->contact_tb = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->female_rradio_btn = (gcnew System::Windows::Forms::RadioButton());
			this->male_radio_btn = (gcnew System::Windows::Forms::RadioButton());
			this->age_lbl = (gcnew System::Windows::Forms::Label());
			this->email_lbl = (gcnew System::Windows::Forms::Label());
			this->contact_lbl = (gcnew System::Windows::Forms::Label());
			this->id_card_lbl = (gcnew System::Windows::Forms::Label());
			this->first_name_lbl = (gcnew System::Windows::Forms::Label());
			this->destination_lbl = (gcnew System::Windows::Forms::Label());
			this->initial_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// message_show_btn
			// 
			this->message_show_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message_show_btn->Location = System::Drawing::Point(779, 410);
			this->message_show_btn->Name = L"message_show_btn";
			this->message_show_btn->Size = System::Drawing::Size(128, 35);
			this->message_show_btn->TabIndex = 43;
			this->message_show_btn->Text = L"View ->";
			this->message_show_btn->UseVisualStyleBackColor = true;
			this->message_show_btn->Click += gcnew System::EventHandler(this, &MyForm12::message_show_btn_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(488, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 35);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Next ->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// time_lbl
			// 
			this->time_lbl->AutoSize = true;
			this->time_lbl->Location = System::Drawing::Point(290, 120);
			this->time_lbl->Name = L"time_lbl";
			this->time_lbl->Size = System::Drawing::Size(35, 13);
			this->time_lbl->TabIndex = 84;
			this->time_lbl->Text = L"label4";
			// 
			// transaction_lbl
			// 
			this->transaction_lbl->AutoSize = true;
			this->transaction_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transaction_lbl->Location = System::Drawing::Point(95, 293);
			this->transaction_lbl->Name = L"transaction_lbl";
			this->transaction_lbl->Size = System::Drawing::Size(200, 24);
			this->transaction_lbl->TabIndex = 83;
			this->transaction_lbl->Text = L"Transaction Method :";
			// 
			// transaction_combo_box
			// 
			this->transaction_combo_box->FormattingEnabled = true;
			this->transaction_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Debit Card", L"Credit Card", L"Net Banking" });
			this->transaction_combo_box->Location = System::Drawing::Point(355, 293);
			this->transaction_combo_box->Name = L"transaction_combo_box";
			this->transaction_combo_box->Size = System::Drawing::Size(205, 21);
			this->transaction_combo_box->TabIndex = 82;
			// 
			// id_card_tb
			// 
			this->id_card_tb->Location = System::Drawing::Point(369, 202);
			this->id_card_tb->Name = L"id_card_tb";
			this->id_card_tb->Size = System::Drawing::Size(183, 20);
			this->id_card_tb->TabIndex = 80;
			// 
			// age_tb
			// 
			this->age_tb->Location = System::Drawing::Point(369, 67);
			this->age_tb->Name = L"age_tb";
			this->age_tb->Size = System::Drawing::Size(183, 20);
			this->age_tb->TabIndex = 79;
			// 
			// email_tb
			// 
			this->email_tb->Location = System::Drawing::Point(369, 112);
			this->email_tb->Name = L"email_tb";
			this->email_tb->Size = System::Drawing::Size(183, 20);
			this->email_tb->TabIndex = 78;
			// 
			// first_name_tb
			// 
			this->first_name_tb->Location = System::Drawing::Point(367, 25);
			this->first_name_tb->Name = L"first_name_tb";
			this->first_name_tb->Size = System::Drawing::Size(183, 20);
			this->first_name_tb->TabIndex = 77;
			// 
			// contact_tb
			// 
			this->contact_tb->Location = System::Drawing::Point(367, 155);
			this->contact_tb->Name = L"contact_tb";
			this->contact_tb->Size = System::Drawing::Size(183, 20);
			this->contact_tb->TabIndex = 76;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->time_lbl);
			this->groupBox1->Controls->Add(this->transaction_lbl);
			this->groupBox1->Controls->Add(this->transaction_combo_box);
			this->groupBox1->Controls->Add(this->id_card_tb);
			this->groupBox1->Controls->Add(this->age_tb);
			this->groupBox1->Controls->Add(this->email_tb);
			this->groupBox1->Controls->Add(this->first_name_tb);
			this->groupBox1->Controls->Add(this->contact_tb);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->female_rradio_btn);
			this->groupBox1->Controls->Add(this->male_radio_btn);
			this->groupBox1->Controls->Add(this->age_lbl);
			this->groupBox1->Controls->Add(this->email_lbl);
			this->groupBox1->Controls->Add(this->contact_lbl);
			this->groupBox1->Controls->Add(this->id_card_lbl);
			this->groupBox1->Controls->Add(this->first_name_lbl);
			this->groupBox1->Location = System::Drawing::Point(187, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(720, 372);
			this->groupBox1->TabIndex = 72;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(99, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 24);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Gender :";
			// 
			// female_rradio_btn
			// 
			this->female_rradio_btn->AutoSize = true;
			this->female_rradio_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female_rradio_btn->Location = System::Drawing::Point(221, 255);
			this->female_rradio_btn->Name = L"female_rradio_btn";
			this->female_rradio_btn->Size = System::Drawing::Size(74, 21);
			this->female_rradio_btn->TabIndex = 74;
			this->female_rradio_btn->TabStop = true;
			this->female_rradio_btn->Text = L"Female";
			this->female_rradio_btn->UseVisualStyleBackColor = true;
			// 
			// male_radio_btn
			// 
			this->male_radio_btn->AutoSize = true;
			this->male_radio_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male_radio_btn->Location = System::Drawing::Point(133, 257);
			this->male_radio_btn->Name = L"male_radio_btn";
			this->male_radio_btn->Size = System::Drawing::Size(52, 19);
			this->male_radio_btn->TabIndex = 73;
			this->male_radio_btn->TabStop = true;
			this->male_radio_btn->Text = L"Male";
			this->male_radio_btn->UseVisualStyleBackColor = true;
			// 
			// age_lbl
			// 
			this->age_lbl->AutoSize = true;
			this->age_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_lbl->Location = System::Drawing::Point(96, 197);
			this->age_lbl->Name = L"age_lbl";
			this->age_lbl->Size = System::Drawing::Size(58, 24);
			this->age_lbl->TabIndex = 72;
			this->age_lbl->Text = L"Age :";
			// 
			// email_lbl
			// 
			this->email_lbl->AutoSize = true;
			this->email_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_lbl->Location = System::Drawing::Point(101, 112);
			this->email_lbl->Name = L"email_lbl";
			this->email_lbl->Size = System::Drawing::Size(74, 24);
			this->email_lbl->TabIndex = 71;
			this->email_lbl->Text = L"Email :";
			// 
			// contact_lbl
			// 
			this->contact_lbl->AutoSize = true;
			this->contact_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact_lbl->Location = System::Drawing::Point(98, 155);
			this->contact_lbl->Name = L"contact_lbl";
			this->contact_lbl->Size = System::Drawing::Size(121, 24);
			this->contact_lbl->TabIndex = 70;
			this->contact_lbl->Text = L"Contact no :";
			// 
			// id_card_lbl
			// 
			this->id_card_lbl->AutoSize = true;
			this->id_card_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_card_lbl->Location = System::Drawing::Point(102, 67);
			this->id_card_lbl->Name = L"id_card_lbl";
			this->id_card_lbl->Size = System::Drawing::Size(125, 24);
			this->id_card_lbl->TabIndex = 69;
			this->id_card_lbl->Text = L"ID Card No :";
			// 
			// first_name_lbl
			// 
			this->first_name_lbl->AutoSize = true;
			this->first_name_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->first_name_lbl->Location = System::Drawing::Point(100, 25);
			this->first_name_lbl->Name = L"first_name_lbl";
			this->first_name_lbl->Size = System::Drawing::Size(115, 24);
			this->first_name_lbl->TabIndex = 68;
			this->first_name_lbl->Text = L"Full Name :";
			// 
			// destination_lbl
			// 
			this->destination_lbl->AutoSize = true;
			this->destination_lbl->Location = System::Drawing::Point(3, 24);
			this->destination_lbl->Name = L"destination_lbl";
			this->destination_lbl->Size = System::Drawing::Size(35, 13);
			this->destination_lbl->TabIndex = 71;
			this->destination_lbl->Text = L"label4";
			// 
			// initial_lbl
			// 
			this->initial_lbl->AutoSize = true;
			this->initial_lbl->Location = System::Drawing::Point(1, 6);
			this->initial_lbl->Name = L"initial_lbl";
			this->initial_lbl->Size = System::Drawing::Size(35, 13);
			this->initial_lbl->TabIndex = 70;
			this->initial_lbl->Text = L"label3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(328, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 42);
			this->label1->TabIndex = 69;
			this->label1->Text = L"\"Traveler Information\"";
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->destination_lbl);
			this->Controls->Add(this->initial_lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->message_show_btn);
			this->Name = L"MyForm12";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm12::MyForm12_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flights_show_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm12_Load(System::Object^ sender, System::EventArgs^ e) {
		destination_lbl->Hide();
		initial_lbl->Hide();
		time_lbl->Hide();

	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void last_name_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void message_show_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void transaction_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm11^ obj2 = gcnew MyForm11();

		obj2->ShowDialog();

	}
};
}
