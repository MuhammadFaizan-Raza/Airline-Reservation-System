#pragma once
#include "MyForm10.h"


namespace cppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ available_flights_lbl;
	private: System::Windows::Forms::ListBox^ show_flights_list_box;
	private: System::Windows::Forms::Label^ adolescence_show_lbl;
	private: System::Windows::Forms::Label^ children_show_lbl;
	private: System::Windows::Forms::Label^ adult_show_lbl;
	private: System::Windows::Forms::DateTimePicker^ date_Time_Picker;
	private: System::Windows::Forms::ComboBox^ departure_combo_box;
	private: System::Windows::Forms::ComboBox^ cabin_type_combo_box;
	private: System::Windows::Forms::ComboBox^ arrival_combo_box;
	private: System::Windows::Forms::Button^ adult_decreament_btn;
	private: System::Windows::Forms::Button^ children_decreament_btn;
	private: System::Windows::Forms::Button^ adult_increament_btn;
	private: System::Windows::Forms::Button^ childrens_increament_btn;
	private: System::Windows::Forms::Button^ adolescence_increament_btn;
	private: System::Windows::Forms::Button^ adolescence_decreament_btn;
	private: System::Windows::Forms::Button^ show_flights_btn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ adolescence_lbl;
	private: System::Windows::Forms::Label^ children_lbl;
	private: System::Windows::Forms::Label^ adult_lbl;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ cabin_lbl;
	private: System::Windows::Forms::Label^ date_lbl;
	private: System::Windows::Forms::Label^ arrival_lbl;
	private: System::Windows::Forms::Label^ departure_lbl;

	public:

	public:
	public:
		array<String^, 2>^ air_l;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
		int adult = 0;
		int adolescence = 0;
		int children = 0;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->available_flights_lbl = (gcnew System::Windows::Forms::Label());
			this->show_flights_list_box = (gcnew System::Windows::Forms::ListBox());
			this->adolescence_show_lbl = (gcnew System::Windows::Forms::Label());
			this->children_show_lbl = (gcnew System::Windows::Forms::Label());
			this->adult_show_lbl = (gcnew System::Windows::Forms::Label());
			this->date_Time_Picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->departure_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->cabin_type_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->arrival_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->adult_decreament_btn = (gcnew System::Windows::Forms::Button());
			this->children_decreament_btn = (gcnew System::Windows::Forms::Button());
			this->adult_increament_btn = (gcnew System::Windows::Forms::Button());
			this->childrens_increament_btn = (gcnew System::Windows::Forms::Button());
			this->adolescence_increament_btn = (gcnew System::Windows::Forms::Button());
			this->adolescence_decreament_btn = (gcnew System::Windows::Forms::Button());
			this->show_flights_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adolescence_lbl = (gcnew System::Windows::Forms::Label());
			this->children_lbl = (gcnew System::Windows::Forms::Label());
			this->adult_lbl = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cabin_lbl = (gcnew System::Windows::Forms::Label());
			this->date_lbl = (gcnew System::Windows::Forms::Label());
			this->arrival_lbl = (gcnew System::Windows::Forms::Label());
			this->departure_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(701, 423);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 35);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Next ->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// available_flights_lbl
			// 
			this->available_flights_lbl->AutoSize = true;
			this->available_flights_lbl->BackColor = System::Drawing::Color::Transparent;
			this->available_flights_lbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->available_flights_lbl->Location = System::Drawing::Point(338, 253);
			this->available_flights_lbl->Name = L"available_flights_lbl";
			this->available_flights_lbl->Size = System::Drawing::Size(273, 37);
			this->available_flights_lbl->TabIndex = 68;
			this->available_flights_lbl->Text = L"Available Flights";
			// 
			// show_flights_list_box
			// 
			this->show_flights_list_box->BackColor = System::Drawing::Color::DimGray;
			this->show_flights_list_box->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_flights_list_box->ForeColor = System::Drawing::SystemColors::Window;
			this->show_flights_list_box->FormattingEnabled = true;
			this->show_flights_list_box->ItemHeight = 19;
			this->show_flights_list_box->Location = System::Drawing::Point(71, 293);
			this->show_flights_list_box->Name = L"show_flights_list_box";
			this->show_flights_list_box->Size = System::Drawing::Size(795, 118);
			this->show_flights_list_box->TabIndex = 67;
			// 
			// adolescence_show_lbl
			// 
			this->adolescence_show_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adolescence_show_lbl->AutoSize = true;
			this->adolescence_show_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adolescence_show_lbl->Location = System::Drawing::Point(904, 171);
			this->adolescence_show_lbl->Name = L"adolescence_show_lbl";
			this->adolescence_show_lbl->Size = System::Drawing::Size(13, 16);
			this->adolescence_show_lbl->TabIndex = 66;
			this->adolescence_show_lbl->Text = L"0";
			// 
			// children_show_lbl
			// 
			this->children_show_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->children_show_lbl->AutoSize = true;
			this->children_show_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->children_show_lbl->Location = System::Drawing::Point(904, 144);
			this->children_show_lbl->Name = L"children_show_lbl";
			this->children_show_lbl->Size = System::Drawing::Size(13, 16);
			this->children_show_lbl->TabIndex = 65;
			this->children_show_lbl->Text = L"0";
			// 
			// adult_show_lbl
			// 
			this->adult_show_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adult_show_lbl->AutoSize = true;
			this->adult_show_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adult_show_lbl->Location = System::Drawing::Point(904, 110);
			this->adult_show_lbl->Name = L"adult_show_lbl";
			this->adult_show_lbl->Size = System::Drawing::Size(13, 16);
			this->adult_show_lbl->TabIndex = 64;
			this->adult_show_lbl->Text = L"0";
			// 
			// date_Time_Picker
			// 
			this->date_Time_Picker->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->date_Time_Picker->Location = System::Drawing::Point(250, 156);
			this->date_Time_Picker->MaxDate = System::DateTime(3000, 12, 31, 0, 0, 0, 0);
			this->date_Time_Picker->MinDate = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			this->date_Time_Picker->Name = L"date_Time_Picker";
			this->date_Time_Picker->Size = System::Drawing::Size(219, 20);
			this->date_Time_Picker->TabIndex = 63;
			this->date_Time_Picker->Value = System::DateTime(2022, 6, 24, 23, 59, 59, 0);
			// 
			// departure_combo_box
			// 
			this->departure_combo_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->departure_combo_box->FormattingEnabled = true;
			this->departure_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Karachi", L"Islamabad", L"Lahore",
					L"Gawadar"
			});
			this->departure_combo_box->Location = System::Drawing::Point(253, 77);
			this->departure_combo_box->Name = L"departure_combo_box";
			this->departure_combo_box->Size = System::Drawing::Size(216, 21);
			this->departure_combo_box->TabIndex = 62;
			this->departure_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm9::departure_combo_box_SelectedIndexChanged_1);
			// 
			// cabin_type_combo_box
			// 
			this->cabin_type_combo_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cabin_type_combo_box->FormattingEnabled = true;
			this->cabin_type_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Economy", L"Premium Economy", L"Bussiness" });
			this->cabin_type_combo_box->Location = System::Drawing::Point(250, 197);
			this->cabin_type_combo_box->Name = L"cabin_type_combo_box";
			this->cabin_type_combo_box->Size = System::Drawing::Size(219, 21);
			this->cabin_type_combo_box->TabIndex = 61;
			// 
			// arrival_combo_box
			// 
			this->arrival_combo_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->arrival_combo_box->FormattingEnabled = true;
			this->arrival_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Karachi", L"Islamabad", L"Lahore", L"Gawadar" });
			this->arrival_combo_box->Location = System::Drawing::Point(253, 119);
			this->arrival_combo_box->Name = L"arrival_combo_box";
			this->arrival_combo_box->Size = System::Drawing::Size(216, 21);
			this->arrival_combo_box->TabIndex = 60;
			// 
			// adult_decreament_btn
			// 
			this->adult_decreament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adult_decreament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->adult_decreament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adult_decreament_btn->Location = System::Drawing::Point(850, 108);
			this->adult_decreament_btn->Name = L"adult_decreament_btn";
			this->adult_decreament_btn->Size = System::Drawing::Size(38, 23);
			this->adult_decreament_btn->TabIndex = 59;
			this->adult_decreament_btn->Text = L"-";
			this->adult_decreament_btn->UseVisualStyleBackColor = false;
			// 
			// children_decreament_btn
			// 
			this->children_decreament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->children_decreament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->children_decreament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->children_decreament_btn->Location = System::Drawing::Point(850, 137);
			this->children_decreament_btn->Name = L"children_decreament_btn";
			this->children_decreament_btn->Size = System::Drawing::Size(38, 23);
			this->children_decreament_btn->TabIndex = 58;
			this->children_decreament_btn->Text = L"-";
			this->children_decreament_btn->UseVisualStyleBackColor = false;
			// 
			// adult_increament_btn
			// 
			this->adult_increament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adult_increament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->adult_increament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adult_increament_btn->Location = System::Drawing::Point(934, 106);
			this->adult_increament_btn->Name = L"adult_increament_btn";
			this->adult_increament_btn->Size = System::Drawing::Size(33, 23);
			this->adult_increament_btn->TabIndex = 57;
			this->adult_increament_btn->Text = L"+";
			this->adult_increament_btn->UseVisualStyleBackColor = false;
			// 
			// childrens_increament_btn
			// 
			this->childrens_increament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->childrens_increament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->childrens_increament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->childrens_increament_btn->Location = System::Drawing::Point(934, 140);
			this->childrens_increament_btn->Name = L"childrens_increament_btn";
			this->childrens_increament_btn->Size = System::Drawing::Size(33, 23);
			this->childrens_increament_btn->TabIndex = 56;
			this->childrens_increament_btn->Text = L"+";
			this->childrens_increament_btn->UseVisualStyleBackColor = false;
			// 
			// adolescence_increament_btn
			// 
			this->adolescence_increament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adolescence_increament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->adolescence_increament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adolescence_increament_btn->Location = System::Drawing::Point(934, 170);
			this->adolescence_increament_btn->Name = L"adolescence_increament_btn";
			this->adolescence_increament_btn->Size = System::Drawing::Size(33, 23);
			this->adolescence_increament_btn->TabIndex = 55;
			this->adolescence_increament_btn->Text = L"+";
			this->adolescence_increament_btn->UseVisualStyleBackColor = false;
			// 
			// adolescence_decreament_btn
			// 
			this->adolescence_decreament_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adolescence_decreament_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->adolescence_decreament_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adolescence_decreament_btn->Location = System::Drawing::Point(850, 169);
			this->adolescence_decreament_btn->Name = L"adolescence_decreament_btn";
			this->adolescence_decreament_btn->Size = System::Drawing::Size(38, 23);
			this->adolescence_decreament_btn->TabIndex = 54;
			this->adolescence_decreament_btn->Text = L"-";
			this->adolescence_decreament_btn->UseVisualStyleBackColor = false;
			// 
			// show_flights_btn
			// 
			this->show_flights_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->show_flights_btn->BackColor = System::Drawing::Color::DarkGray;
			this->show_flights_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_flights_btn->Location = System::Drawing::Point(672, 202);
			this->show_flights_btn->Name = L"show_flights_btn";
			this->show_flights_btn->Size = System::Drawing::Size(216, 36);
			this->show_flights_btn->TabIndex = 53;
			this->show_flights_btn->Text = L"Show Flights";
			this->show_flights_btn->UseVisualStyleBackColor = false;
			this->show_flights_btn->Click += gcnew System::EventHandler(this, &MyForm9::show_flights_btn_Click_1);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(304, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 43);
			this->label1->TabIndex = 52;
			this->label1->Text = L"\"Flight Search\"";
			// 
			// adolescence_lbl
			// 
			this->adolescence_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->adolescence_lbl->AutoSize = true;
			this->adolescence_lbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->adolescence_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adolescence_lbl->Location = System::Drawing::Point(620, 172);
			this->adolescence_lbl->Name = L"adolescence_lbl";
			this->adolescence_lbl->Size = System::Drawing::Size(164, 19);
			this->adolescence_lbl->TabIndex = 51;
			this->adolescence_lbl->Text = L"Adolescence(12-18) :";
			// 
			// children_lbl
			// 
			this->children_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->children_lbl->AutoSize = true;
			this->children_lbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->children_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->children_lbl->Location = System::Drawing::Point(620, 142);
			this->children_lbl->Name = L"children_lbl";
			this->children_lbl->Size = System::Drawing::Size(138, 19);
			this->children_lbl->TabIndex = 50;
			this->children_lbl->Text = L"Childrens(1-12) :";
			// 
			// adult_lbl
			// 
			this->adult_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->adult_lbl->AutoSize = true;
			this->adult_lbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->adult_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adult_lbl->Location = System::Drawing::Point(620, 110);
			this->adult_lbl->Name = L"adult_lbl";
			this->adult_lbl->Size = System::Drawing::Size(166, 19);
			this->adult_lbl->TabIndex = 49;
			this->adult_lbl->Text = L"Adults(18-onwards) :";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(574, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 26);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Travelers :";
			// 
			// cabin_lbl
			// 
			this->cabin_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->cabin_lbl->AutoSize = true;
			this->cabin_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->cabin_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cabin_lbl->Location = System::Drawing::Point(17, 195);
			this->cabin_lbl->Name = L"cabin_lbl";
			this->cabin_lbl->Size = System::Drawing::Size(143, 26);
			this->cabin_lbl->TabIndex = 47;
			this->cabin_lbl->Text = L"Cabin Type :";
			// 
			// date_lbl
			// 
			this->date_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->date_lbl->AutoSize = true;
			this->date_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->date_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_lbl->Location = System::Drawing::Point(17, 156);
			this->date_lbl->Name = L"date_lbl";
			this->date_lbl->Size = System::Drawing::Size(208, 26);
			this->date_lbl->TabIndex = 46;
			this->date_lbl->Text = L"Reservation  Date :";
			// 
			// arrival_lbl
			// 
			this->arrival_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->arrival_lbl->AutoSize = true;
			this->arrival_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->arrival_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrival_lbl->Location = System::Drawing::Point(19, 117);
			this->arrival_lbl->Name = L"arrival_lbl";
			this->arrival_lbl->Size = System::Drawing::Size(181, 26);
			this->arrival_lbl->TabIndex = 45;
			this->arrival_lbl->Text = L"Choose Arrival :";
			// 
			// departure_lbl
			// 
			this->departure_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->departure_lbl->AutoSize = true;
			this->departure_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->departure_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departure_lbl->Location = System::Drawing::Point(19, 77);
			this->departure_lbl->Name = L"departure_lbl";
			this->departure_lbl->Size = System::Drawing::Size(213, 26);
			this->departure_lbl->TabIndex = 44;
			this->departure_lbl->Text = L"Choose Departure :";
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->available_flights_lbl);
			this->Controls->Add(this->show_flights_list_box);
			this->Controls->Add(this->adolescence_show_lbl);
			this->Controls->Add(this->children_show_lbl);
			this->Controls->Add(this->adult_show_lbl);
			this->Controls->Add(this->date_Time_Picker);
			this->Controls->Add(this->departure_combo_box);
			this->Controls->Add(this->cabin_type_combo_box);
			this->Controls->Add(this->arrival_combo_box);
			this->Controls->Add(this->adult_decreament_btn);
			this->Controls->Add(this->children_decreament_btn);
			this->Controls->Add(this->adult_increament_btn);
			this->Controls->Add(this->childrens_increament_btn);
			this->Controls->Add(this->adolescence_increament_btn);
			this->Controls->Add(this->adolescence_decreament_btn);
			this->Controls->Add(this->show_flights_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->adolescence_lbl);
			this->Controls->Add(this->children_lbl);
			this->Controls->Add(this->adult_lbl);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cabin_lbl);
			this->Controls->Add(this->date_lbl);
			this->Controls->Add(this->arrival_lbl);
			this->Controls->Add(this->departure_lbl);
			this->Controls->Add(this->button2);
			this->MinimumSize = System::Drawing::Size(1000, 500);
			this->Name = L"MyForm9";
			this->Text = L"Airline Reservation System";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
		show_flights_list_box->Hide();
		available_flights_lbl->Hide();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adult_increament_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		adult++;
		this->adult_show_lbl->Text = adult.ToString();
	}
	private: System::Void childrens_increament_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		children++;
		this->children_show_lbl->Text = children.ToString();
	}
	private: System::Void adolescence_increament_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		adolescence++;
		this->adolescence_show_lbl->Text = adolescence.ToString();
	}

	private: System::Void adult_decreament_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		adult--;
		this->adult_show_lbl->Text = adult.ToString();
	}
	private: System::Void children_decreament_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		children--;
		this->children_show_lbl->Text = children.ToString();
	}
	private: System::Void adolescence_decreament_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		adolescence--;
		this->adolescence_show_lbl->Text = adolescence.ToString();
	}
	private: System::Void show_flights_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void departure_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void show_flights_list_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm10^ obj1 = gcnew MyForm10(departure_combo_box->SelectedItem->ToString(), arrival_combo_box->SelectedItem->ToString(), date_Time_Picker->Text);
		obj1->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void available_flights_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void show_flights_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		show_flights_list_box->Show();
		available_flights_lbl->Show();
		air_l = gcnew array<String^, 2> { {"Airline               ", "Departure      ", "Arrival      ", "Price           ", "Category"}
		, { "Qatar Airways        ","10:00          ","14:10       ","500","Refundable" }
			, { "Qatar Airways        ","10:00          ","14:10       ","700 ","Refundable" }
			, { "Qatar Airways        ","10 : 00        ","14:10       ","800 ","Refundable" }
			, { "Qatar Airways        ","10 : 00        ","14:10       ","400","Refundable" }
			, { "Qatar Airways        ","10 : 00        ","14:10       ","650 ","Refundable" }
			, { "Qatar Airways        ","10 : 00        ","14:10       ","950 ","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","980 ","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","700 ","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","850 ","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","500","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","700 ","Refundable" }
			, { "Serene Air       ","14 : 00        ","18:05       ","980 ","Refundable" }
			, { "PIA                  ","18:00         ","22:05       ","950 ","Refundable" }
			, { "PIA                  ","18:00         ","22:05       ","680 ","Refundable" }
			, { "PIA                  ","18:00         ","22:05       ","800 ","Refundable" }
			, { "PIA                  ","18:00         ","22:05       ","500","Refundable" }
			, { "PIA                  ","18:00         ","22:05       ","600 ","Refundable" }
		, { "PIA                  ","18:00         ","22:05       ","500","Refundable" } };
		if ((departure_combo_box->SelectedItem->ToString() == "Islamabad" && arrival_combo_box->SelectedItem->ToString() == "Lahore") || (departure_combo_box->SelectedItem->ToString() == "Lahore" && arrival_combo_box->SelectedItem->ToString() == "Islamabad"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[1, 0] + air_l[1, 1] + air_l[1, 2] + "US$" + (System::Convert::ToInt32(air_l[1, 3]) + 8000) + "       " + air_l[1, 4]);
				show_flights_list_box->Items->Add(air_l[7, 0] + air_l[7, 1] + air_l[7, 2] + "US$" + (System::Convert::ToInt32(air_l[7, 3]) + 8000) + "       " + air_l[7, 4]);
				show_flights_list_box->Items->Add(air_l[13, 0] + air_l[13, 1] + air_l[13, 2] + "US$" + (System::Convert::ToInt32(air_l[13, 3]) + 8000) + "       " + air_l[13, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[1, 0] + air_l[1, 1] + air_l[1, 2] + "US$" + (System::Convert::ToInt32(air_l[1, 3]) + 2000) + "       " + air_l[1, 4]);
				show_flights_list_box->Items->Add(air_l[7, 0] + air_l[7, 1] + air_l[7, 2] + "US$" + (System::Convert::ToInt32(air_l[7, 3]) + 2000) + "       " + air_l[7, 4]);
				show_flights_list_box->Items->Add(air_l[13, 0] + air_l[13, 1] + air_l[13, 2] + "US$" + (System::Convert::ToInt32(air_l[13, 3]) + 2000) + "       " + air_l[13, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[1, 0] + air_l[1, 1] + air_l[1, 2] + "US$" + air_l[1, 3] + "       " + air_l[1, 4]);
				show_flights_list_box->Items->Add(air_l[7, 0] + air_l[7, 1] + air_l[7, 2] + "US$" + air_l[7, 3] + "       " + air_l[7, 4]);
				show_flights_list_box->Items->Add(air_l[13, 0] + air_l[13, 1] + air_l[13, 2] + "US$" + air_l[13, 3] + "       " + air_l[13, 4]);
			}

		}
		else if ((departure_combo_box->SelectedItem->ToString() == "Lahore" && arrival_combo_box->SelectedItem->ToString() == "Gawadar") || (departure_combo_box->SelectedItem->ToString() == "Gawadar" && arrival_combo_box->SelectedItem->ToString() == "Lahore"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + "US$" + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[2, 0] + air_l[2, 1] + air_l[2, 2] + "US$" + (System::Convert::ToInt32(air_l[2, 3]) + 8000) + "       " + air_l[2, 4]);
				show_flights_list_box->Items->Add(air_l[8, 0] + air_l[8, 1] + air_l[8, 2] + "US$" + (System::Convert::ToInt32(air_l[8, 3]) + 8000) + "       " + air_l[8, 4]);
				show_flights_list_box->Items->Add(air_l[14, 0] + air_l[14, 1] + air_l[14, 2] + "US$" + (System::Convert::ToInt32(air_l[14, 3]) + 8000) + "       " + air_l[14, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[2, 0] + air_l[2, 1] + air_l[2, 2] + "US$" + (System::Convert::ToInt32(air_l[2, 3]) + 2000) + "       " + air_l[2, 4]);
				show_flights_list_box->Items->Add(air_l[8, 0] + air_l[8, 1] + air_l[8, 2] + "US$" + (System::Convert::ToInt32(air_l[8, 3]) + 2000) + "       " + air_l[8, 4]);
				show_flights_list_box->Items->Add(air_l[14, 0] + air_l[14, 1] + air_l[14, 2] + "US$" + (System::Convert::ToInt32(air_l[14, 3]) + 2000) + "       " + air_l[14, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[2, 0] + air_l[2, 1] + air_l[2, 2] + "US$" + air_l[2, 3] + "       " + air_l[2, 4]);
				show_flights_list_box->Items->Add(air_l[8, 0] + air_l[8, 1] + air_l[8, 2] + "US$" + air_l[8, 3] + "       " + air_l[8, 4]);
				show_flights_list_box->Items->Add(air_l[14, 0] + air_l[14, 1] + air_l[14, 2] + "US$" + air_l[14, 3] + "       " + air_l[14, 4]);
			}


		}
		else if ((departure_combo_box->SelectedItem->ToString() == "Karachi" && arrival_combo_box->SelectedItem->ToString() == "Islamabad") || (departure_combo_box->SelectedItem->ToString() == "Islamabad" && arrival_combo_box->SelectedItem->ToString() == "Karachi"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + "US$" + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[3, 0] + air_l[3, 1] + air_l[3, 2] + "US$" + (System::Convert::ToInt32(air_l[3, 3]) + 8000) + "       " + air_l[3, 4]);
				show_flights_list_box->Items->Add(air_l[9, 0] + air_l[9, 1] + air_l[9, 2] + "US$" + (System::Convert::ToInt32(air_l[9, 3]) + 8000) + "       " + air_l[9, 4]);
				show_flights_list_box->Items->Add(air_l[15, 0] + air_l[15, 1] + air_l[15, 2] + "US$" + (System::Convert::ToInt32(air_l[15, 3]) + 8000) + "       " + air_l[15, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[3, 0] + air_l[3, 1] + air_l[3, 2] + "US$" + (System::Convert::ToInt32(air_l[3, 3]) + 2000) + "       " + air_l[3, 4]);
				show_flights_list_box->Items->Add(air_l[9, 0] + air_l[9, 1] + air_l[9, 2] + "US$" + (System::Convert::ToInt32(air_l[9, 3]) + 2000) + "       " + air_l[9, 4]);
				show_flights_list_box->Items->Add(air_l[15, 0] + air_l[15, 1] + air_l[15, 2] + "US$" + (System::Convert::ToInt32(air_l[15, 3]) + 2000) + "       " + air_l[15, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[3, 0] + air_l[3, 1] + air_l[3, 2] + "US$" + air_l[3, 3] + "       " + air_l[3, 4]);
				show_flights_list_box->Items->Add(air_l[9, 0] + air_l[9, 1] + air_l[9, 2] + "US$" + air_l[9, 3] + "       " + air_l[9, 4]);
				show_flights_list_box->Items->Add(air_l[15, 0] + air_l[15, 1] + air_l[15, 2] + "US$" + air_l[15, 3] + "       " + air_l[15, 4]);
			}

		}
		else if ((departure_combo_box->SelectedItem->ToString() == "Karachi" && arrival_combo_box->SelectedItem->ToString() == "Gawadar") || (departure_combo_box->SelectedItem->ToString() == "Gawadar" && arrival_combo_box->SelectedItem->ToString() == "Karachi"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + "US$" + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[4, 0] + air_l[4, 1] + air_l[4, 2] + "US$" + (System::Convert::ToInt32(air_l[4, 3]) + 8000) + "       " + air_l[4, 4]);
				show_flights_list_box->Items->Add(air_l[10, 0] + air_l[10, 1] + air_l[10, 2] + "US$" + (System::Convert::ToInt32(air_l[10, 3]) + 8000) + "       " + air_l[10, 4]);
				show_flights_list_box->Items->Add(air_l[16, 0] + air_l[16, 1] + air_l[16, 2] + "US$" + (System::Convert::ToInt32(air_l[16, 3]) + 8000) + "       " + air_l[16, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[4, 0] + air_l[4, 1] + air_l[4, 2] + "US$" + (System::Convert::ToInt32(air_l[4, 3]) + 2000) + "       " + air_l[4, 4]);
				show_flights_list_box->Items->Add(air_l[10, 0] + air_l[10, 1] + air_l[10, 2] + "US$" + (System::Convert::ToInt32(air_l[10, 3]) + 2000) + "       " + air_l[10, 4]);
				show_flights_list_box->Items->Add(air_l[16, 0] + air_l[16, 1] + air_l[16, 2] + "US$" + (System::Convert::ToInt32(air_l[16, 3]) + 2000) + "       " + air_l[16, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[4, 0] + air_l[4, 1] + air_l[4, 2] + "US$" + air_l[4, 3] + "       " + air_l[4, 4]);
				show_flights_list_box->Items->Add(air_l[10, 0] + air_l[10, 1] + air_l[10, 2] + "US$" + air_l[10, 3] + "       " + air_l[10, 4]);
				show_flights_list_box->Items->Add(air_l[16, 0] + air_l[16, 1] + air_l[16, 2] + "US$" + air_l[16, 3] + "       " + air_l[16, 4]);
			}

		}
		else if ((departure_combo_box->SelectedItem->ToString() == "Islamabad" && arrival_combo_box->SelectedItem->ToString() == "Gawadar") || (departure_combo_box->SelectedItem->ToString() == "Gawadar" && arrival_combo_box->SelectedItem->ToString() == "Islamabad"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + "US$" + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[5, 0] + air_l[5, 1] + air_l[5, 2] + "US$" + (System::Convert::ToInt32(air_l[5, 3]) + 8000) + "       " + air_l[5, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + (System::Convert::ToInt32(air_l[11, 3]) + 8000) + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[17, 0] + air_l[17, 1] + air_l[17, 2] + "US$" + (System::Convert::ToInt32(air_l[17, 3]) + 8000) + "       " + air_l[17, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[5, 0] + air_l[5, 1] + air_l[5, 2] + "US$" + (System::Convert::ToInt32(air_l[5, 3]) + 2000) + "       " + air_l[5, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + (System::Convert::ToInt32(air_l[11, 3]) + 2000) + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[17, 0] + air_l[17, 1] + air_l[17, 2] + "US$" + (System::Convert::ToInt32(air_l[17, 3]) + 2000) + "       " + air_l[17, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[5, 0] + air_l[5, 1] + air_l[5, 2] + "US$" + air_l[5, 3] + "       " + air_l[5, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + air_l[11, 3] + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[17, 0] + air_l[17, 1] + air_l[17, 2] + "US$" + air_l[17, 3] + "       " + air_l[17, 4]);
			}

		}
		else if ((departure_combo_box->SelectedItem->ToString() == "Karachi" && arrival_combo_box->SelectedItem->ToString() == "Lahore") || (departure_combo_box->SelectedItem->ToString() == "Lahore" && arrival_combo_box->SelectedItem->ToString() == "Karachi"))//condition
		{
			show_flights_list_box->Items->Add(air_l[0, 0] + air_l[0, 1] + air_l[0, 2] + "US$" + air_l[0, 3] + air_l[0, 4]);
			if (cabin_type_combo_box->SelectedItem->ToString() == "Bussiness") {
				show_flights_list_box->Items->Add(air_l[6, 0] + air_l[6, 1] + air_l[6, 2] + "US$" + (System::Convert::ToInt32(air_l[6, 3]) + 8000) + "       " + air_l[6, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + (System::Convert::ToInt32(air_l[11, 3]) + 8000) + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[18, 0] + air_l[18, 1] + air_l[18, 2] + "US$" + (System::Convert::ToInt32(air_l[18, 3]) + 8000) + "       " + air_l[18, 4]);
			}
			else if (cabin_type_combo_box->SelectedItem->ToString() == "Premium Economy") {
				show_flights_list_box->Items->Add(air_l[6, 0] + air_l[6, 1] + air_l[6, 2] + "US$" + (System::Convert::ToInt32(air_l[6, 3]) + 2000) + "       " + air_l[6, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + (System::Convert::ToInt32(air_l[11, 3]) + 2000) + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[18, 0] + air_l[18, 1] + air_l[18, 2] + "US$" + (System::Convert::ToInt32(air_l[18, 3]) + 2000) + "       " + air_l[18, 4]);
			}
			else {
				show_flights_list_box->Items->Add(air_l[6, 0] + air_l[6, 1] + air_l[6, 2] + "US$" + air_l[6, 3] + "       " + air_l[6, 4]);
				show_flights_list_box->Items->Add(air_l[11, 0] + air_l[11, 1] + air_l[11, 2] + "US$" + air_l[11, 3] + "       " + air_l[11, 4]);
				show_flights_list_box->Items->Add(air_l[18, 0] + air_l[18, 1] + air_l[18, 2] + "US$" + air_l[18, 3] + "       " + air_l[18, 4]);
			}

		}
		else if (departure_combo_box->SelectedItem->ToString() == arrival_combo_box->SelectedItem->ToString())//condition
		{
			show_flights_list_box->Items->Add("wrong input entered.\nTry again\n\n\n");
		}
		else//condition
		{
			show_flights_list_box->Items->Add("Wrong input entered.\nTry again\n\n\n");
		}


	

	}
private: System::Void departure_combo_box_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
