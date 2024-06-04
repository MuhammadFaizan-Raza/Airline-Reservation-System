#pragma once
#include "MyForm3.h"
#include "MyForm9.h"
namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ international_flight_btn;
	private: System::Windows::Forms::Button^ domestic_flight_btn;
	protected:

	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->international_flight_btn = (gcnew System::Windows::Forms::Button());
			this->domestic_flight_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// international_flight_btn
			// 
			this->international_flight_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->international_flight_btn->BackColor = System::Drawing::Color::Silver;
			this->international_flight_btn->Location = System::Drawing::Point(3, 3);
			this->international_flight_btn->Name = L"international_flight_btn";
			this->international_flight_btn->Size = System::Drawing::Size(229, 34);
			this->international_flight_btn->TabIndex = 0;
			this->international_flight_btn->Text = L"International Flights";
			this->international_flight_btn->UseVisualStyleBackColor = false;
			this->international_flight_btn->Click += gcnew System::EventHandler(this, &MyForm2::international_flight_btn_Click);
			// 
			// domestic_flight_btn
			// 
			this->domestic_flight_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->domestic_flight_btn->BackColor = System::Drawing::Color::Silver;
			this->domestic_flight_btn->Location = System::Drawing::Point(3, 62);
			this->domestic_flight_btn->Name = L"domestic_flight_btn";
			this->domestic_flight_btn->Size = System::Drawing::Size(229, 33);
			this->domestic_flight_btn->TabIndex = 1;
			this->domestic_flight_btn->Text = L"Domestic Flights";
			this->domestic_flight_btn->UseVisualStyleBackColor = false;
			this->domestic_flight_btn->Click += gcnew System::EventHandler(this, &MyForm2::domestic_flight_btn_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->domestic_flight_btn, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->international_flight_btn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(266, 163);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 67.79661F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 32.20339F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(235, 98);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(432, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"\"Where you want to travel\?\"\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1000, 500);
			this->Name = L"MyForm2";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void international_flight_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm3^ obj1 = gcnew MyForm3();
		obj1->ShowDialog();
	}
private: System::Void domestic_flight_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm9^ obj1 = gcnew MyForm9();
	obj1->ShowDialog();

}
};
}
