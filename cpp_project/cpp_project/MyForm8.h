#pragma once
#include <stdlib.h>
namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm8(String^ faizan_3, String^ faizan_4,String^ faizan_5,String^ faizan_6)
		{
			InitializeComponent();
			departure_lbl->Text = faizan_3;
			arrival_lbl->Text = faizan_4;
			name_lbl->Text = faizan_5;
			date_lbl->Text = faizan_6;
			//
			//TODO: Add the constructor code here
			//
		}

		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ departure_lbl;
	private: System::Windows::Forms::Label^ seat_lbl;





	private: System::Windows::Forms::Label^ arrival_lbl;
	private: System::Windows::Forms::Label^ date_lbl;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ f_name_lbl;
	private: System::Windows::Forms::Label^ f_departure_lbl;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ f_arrival_lbl;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->departure_lbl = (gcnew System::Windows::Forms::Label());
			this->seat_lbl = (gcnew System::Windows::Forms::Label());
			this->arrival_lbl = (gcnew System::Windows::Forms::Label());
			this->date_lbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->f_name_lbl = (gcnew System::Windows::Forms::Label());
			this->f_departure_lbl = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->f_arrival_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Engravers MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(436, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Flight Booked";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm8::label1_Click);
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->Location = System::Drawing::Point(236, 146);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(0, 22);
			this->name_lbl->TabIndex = 1;
			// 
			// departure_lbl
			// 
			this->departure_lbl->AutoSize = true;
			this->departure_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departure_lbl->Location = System::Drawing::Point(223, 195);
			this->departure_lbl->Name = L"departure_lbl";
			this->departure_lbl->Size = System::Drawing::Size(0, 22);
			this->departure_lbl->TabIndex = 2;
			// 
			// seat_lbl
			// 
			this->seat_lbl->AutoSize = true;
			this->seat_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seat_lbl->Location = System::Drawing::Point(640, 300);
			this->seat_lbl->Name = L"seat_lbl";
			this->seat_lbl->Size = System::Drawing::Size(0, 22);
			this->seat_lbl->TabIndex = 4;
			// 
			// arrival_lbl
			// 
			this->arrival_lbl->AutoSize = true;
			this->arrival_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrival_lbl->Location = System::Drawing::Point(343, 195);
			this->arrival_lbl->Name = L"arrival_lbl";
			this->arrival_lbl->Size = System::Drawing::Size(0, 22);
			this->arrival_lbl->TabIndex = 5;
			// 
			// date_lbl
			// 
			this->date_lbl->AutoSize = true;
			this->date_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_lbl->Location = System::Drawing::Point(345, 241);
			this->date_lbl->Name = L"date_lbl";
			this->date_lbl->Size = System::Drawing::Size(0, 22);
			this->date_lbl->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(226, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ND25A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(223, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"16";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(449, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"14:10";
			// 
			// f_name_lbl
			// 
			this->f_name_lbl->AutoSize = true;
			this->f_name_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_name_lbl->Location = System::Drawing::Point(664, 146);
			this->f_name_lbl->Name = L"f_name_lbl";
			this->f_name_lbl->Size = System::Drawing::Size(0, 22);
			this->f_name_lbl->TabIndex = 10;
			// 
			// f_departure_lbl
			// 
			this->f_departure_lbl->AutoSize = true;
			this->f_departure_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_departure_lbl->Location = System::Drawing::Point(650, 180);
			this->f_departure_lbl->Name = L"f_departure_lbl";
			this->f_departure_lbl->Size = System::Drawing::Size(0, 22);
			this->f_departure_lbl->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(770, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ND25A";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(706, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"16";
			// 
			// f_arrival_lbl
			// 
			this->f_arrival_lbl->AutoSize = true;
			this->f_arrival_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_arrival_lbl->Location = System::Drawing::Point(640, 221);
			this->f_arrival_lbl->Name = L"f_arrival_lbl";
			this->f_arrival_lbl->Size = System::Drawing::Size(0, 22);
			this->f_arrival_lbl->TabIndex = 14;
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->f_arrival_lbl);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->f_departure_lbl);
			this->Controls->Add(this->f_name_lbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->date_lbl);
			this->Controls->Add(this->arrival_lbl);
			this->Controls->Add(this->seat_lbl);
			this->Controls->Add(this->departure_lbl);
			this->Controls->Add(this->name_lbl);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm8";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm8::MyForm8_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm8_Load(System::Object^ sender, System::EventArgs^ e) {
		this->seat_lbl->Text =( 1 + (rand() % 200)).ToString();
		this->f_name_lbl->Text = name_lbl->Text;
		this->f_departure_lbl->Text = departure_lbl->Text;
		this->f_arrival_lbl->Text = arrival_lbl->Text;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
