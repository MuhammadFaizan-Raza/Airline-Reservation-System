#pragma once
#include "MyForm2.h"
#include "MyForm4.h"
#include "MyForm12.h"


namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	/// 

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	protected:

	array<String^>^ air_l;
	private: System::Windows::Forms::Label^ welcome_lbl;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ flight_booking_btn;
	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::Button^ cancel_flight_btn;
	private: System::Windows::Forms::Button^ check_ticket_btn;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->welcome_lbl = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->check_ticket_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_flight_btn = (gcnew System::Windows::Forms::Button());
			this->flight_booking_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// welcome_lbl
			// 
			this->welcome_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->welcome_lbl->AutoSize = true;
			this->welcome_lbl->BackColor = System::Drawing::Color::Transparent;
			this->welcome_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->welcome_lbl->ForeColor = System::Drawing::Color::Black;
			this->welcome_lbl->Location = System::Drawing::Point(12, 22);
			this->welcome_lbl->Name = L"welcome_lbl";
			this->welcome_lbl->Size = System::Drawing::Size(679, 36);
			this->welcome_lbl->TabIndex = 10;
			this->welcome_lbl->Text = L"\"Book Your Flight Tickets At Affordable Prices\"";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->exit_btn, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->check_ticket_btn, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->cancel_flight_btn, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->flight_booking_btn, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(191, 121);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 9;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.91304F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(284, 303);
			this->tableLayoutPanel1->TabIndex = 9;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint);
			// 
			// exit_btn
			// 
			this->exit_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->exit_btn->BackColor = System::Drawing::Color::White;
			this->exit_btn->FlatAppearance->BorderSize = 0;
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->exit_btn->Location = System::Drawing::Point(24, 230);
			this->exit_btn->MinimumSize = System::Drawing::Size(235, 36);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(235, 39);
			this->exit_btn->TabIndex = 5;
			this->exit_btn->Text = L"Exit";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MainForm::exit_btn_Click);
			// 
			// check_ticket_btn
			// 
			this->check_ticket_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->check_ticket_btn->BackColor = System::Drawing::Color::White;
			this->check_ticket_btn->FlatAppearance->BorderSize = 0;
			this->check_ticket_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check_ticket_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->check_ticket_btn->Location = System::Drawing::Point(24, 161);
			this->check_ticket_btn->MinimumSize = System::Drawing::Size(235, 36);
			this->check_ticket_btn->Name = L"check_ticket_btn";
			this->check_ticket_btn->Size = System::Drawing::Size(235, 40);
			this->check_ticket_btn->TabIndex = 4;
			this->check_ticket_btn->Text = L"Check Tickets";
			this->check_ticket_btn->UseVisualStyleBackColor = false;
			this->check_ticket_btn->Click += gcnew System::EventHandler(this, &MainForm::check_ticket_btn_Click);
			// 
			// cancel_flight_btn
			// 
			this->cancel_flight_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->cancel_flight_btn->BackColor = System::Drawing::Color::White;
			this->cancel_flight_btn->FlatAppearance->BorderSize = 0;
			this->cancel_flight_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_flight_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancel_flight_btn->Location = System::Drawing::Point(24, 90);
			this->cancel_flight_btn->MinimumSize = System::Drawing::Size(235, 36);
			this->cancel_flight_btn->Name = L"cancel_flight_btn";
			this->cancel_flight_btn->Size = System::Drawing::Size(235, 41);
			this->cancel_flight_btn->TabIndex = 3;
			this->cancel_flight_btn->Text = L"Payment Options";
			this->cancel_flight_btn->UseVisualStyleBackColor = false;
			this->cancel_flight_btn->Click += gcnew System::EventHandler(this, &MainForm::cancel_flight_btn_Click);
			// 
			// flight_booking_btn
			// 
			this->flight_booking_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->flight_booking_btn->BackColor = System::Drawing::Color::White;
			this->flight_booking_btn->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
			this->flight_booking_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->flight_booking_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flight_booking_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flight_booking_btn->Location = System::Drawing::Point(24, 27);
			this->flight_booking_btn->MinimumSize = System::Drawing::Size(235, 36);
			this->flight_booking_btn->Name = L"flight_booking_btn";
			this->flight_booking_btn->Size = System::Drawing::Size(235, 36);
			this->flight_booking_btn->TabIndex = 2;
			this->flight_booking_btn->Text = L"Book Flight";
			this->flight_booking_btn->UseVisualStyleBackColor = false;
			this->flight_booking_btn->Click += gcnew System::EventHandler(this, &MainForm::flight_booking_btn_Click_1);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(15, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(460, 33);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Select a service you want from us:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->welcome_lbl);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1000, 500);
			this->Name = L"MainForm";
			this->Text = L"Welcome to Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	

	
	
	private: System::Void welcome_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void check_ticket_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm12^ obj1 = gcnew MyForm12();
		obj1->ShowDialog();
	}

private: System::Void cancel_flight_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm4^ obj1 = gcnew MyForm4();
	obj1->ShowDialog();

}
private: System::Void flight_booking_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm2^ obj1 = gcnew MyForm2();
	obj1->ShowDialog();
}
private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
