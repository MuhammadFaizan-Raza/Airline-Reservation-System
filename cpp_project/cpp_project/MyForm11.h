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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm11(String^ faizan_3, String^ faizan_4, String^ faizan_5, String^ faizan_6)
		{
			InitializeComponent();
			departure_lbl->Text = faizan_3;
			arrival_lbl->Text = faizan_4;
			name_lbl->Text = faizan_5;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ departure_lbl;






	private: System::Windows::Forms::Label^ arrival_lbl;




	private: System::Windows::Forms::Label^ f_name_lbl;
	private: System::Windows::Forms::Label^ f_departure_lbl;


	private: System::Windows::Forms::Label^ f_arrival_lbl;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->departure_lbl = (gcnew System::Windows::Forms::Label());
			this->arrival_lbl = (gcnew System::Windows::Forms::Label());
			this->f_name_lbl = (gcnew System::Windows::Forms::Label());
			this->f_departure_lbl = (gcnew System::Windows::Forms::Label());
			this->f_arrival_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(-14, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(882, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No Ticket Available Of Given Information";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm11::label1_Click);
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
			// f_arrival_lbl
			// 
			this->f_arrival_lbl->AutoSize = true;
			this->f_arrival_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_arrival_lbl->Location = System::Drawing::Point(640, 221);
			this->f_arrival_lbl->Name = L"f_arrival_lbl";
			this->f_arrival_lbl->Size = System::Drawing::Size(0, 43);
			this->f_arrival_lbl->TabIndex = 14;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->f_arrival_lbl);
			this->Controls->Add(this->f_departure_lbl);
			this->Controls->Add(this->f_name_lbl);
			this->Controls->Add(this->arrival_lbl);
			this->Controls->Add(this->departure_lbl);
			this->Controls->Add(this->name_lbl);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm11";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
		this->f_name_lbl->Text = name_lbl->Text;
		this->f_departure_lbl->Text = departure_lbl->Text;
		this->f_arrival_lbl->Text = arrival_lbl->Text;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
