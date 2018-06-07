#pragma once
#include"Form4.h"


namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;


	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{

	private:
		Form^previous;
	public:

		Form3(Form^d)
		{
			InitializeComponent();
			previous = d;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  start_time;

	protected:



	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  num_of_ticket;
	private: System::Windows::Forms::ComboBox^  clss;


	private: System::Windows::Forms::ComboBox^  destination;

	private: System::Windows::Forms::ComboBox^  start_place;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  second_name;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  first_name;

	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  total_price;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  train_number;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  ticket_type;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label12;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->start_time = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->num_of_ticket = (gcnew System::Windows::Forms::ComboBox());
			this->clss = (gcnew System::Windows::Forms::ComboBox());
			this->destination = (gcnew System::Windows::Forms::ComboBox());
			this->start_place = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->second_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->first_name = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->total_price = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->train_number = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ticket_type = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(27, 406);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 18);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Start Time";
			// 
			// start_time
			// 
			this->start_time->FormattingEnabled = true;
			this->start_time->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"5:30Õ", L"6:10Õ", L"6:40Õ", L"7:15Õ", L"8:10Õ",
					L"9:00Õ", L"9:40Õ", L"10:30Õ", L"11:30Õ", L"12:10ã", L"1:30ã", L"2:30ã", L"3:00ã", L"4:30ã"
			});
			this->start_time->Location = System::Drawing::Point(119, 402);
			this->start_time->Margin = System::Windows::Forms::Padding(4);
			this->start_time->Name = L"start_time";
			this->start_time->Size = System::Drawing::Size(172, 26);
			this->start_time->TabIndex = 54;
			this->start_time->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::comboBox6_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gainsboro;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::SteelBlue;
			this->label10->Location = System::Drawing::Point(64, 451);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 18);
			this->label10->TabIndex = 51;
			this->label10->Text = L"Class";
			this->label10->Click += gcnew System::EventHandler(this, &Form3::label10_Click);
			// 
			// num_of_ticket
			// 
			this->num_of_ticket->FormattingEnabled = true;
			this->num_of_ticket->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9"
			});
			this->num_of_ticket->Location = System::Drawing::Point(119, 354);
			this->num_of_ticket->Margin = System::Windows::Forms::Padding(4);
			this->num_of_ticket->Name = L"num_of_ticket";
			this->num_of_ticket->Size = System::Drawing::Size(172, 26);
			this->num_of_ticket->TabIndex = 50;
			// 
			// clss
			// 
			this->clss->FormattingEnabled = true;
			this->clss->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"First_Class", L"Second_Class", L"Normal" });
			this->clss->Location = System::Drawing::Point(119, 448);
			this->clss->Margin = System::Windows::Forms::Padding(4);
			this->clss->Name = L"clss";
			this->clss->Size = System::Drawing::Size(172, 26);
			this->clss->TabIndex = 49;
			// 
			// destination
			// 
			this->destination->FormattingEnabled = true;
			this->destination->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Mansoura", L"Alexandria", L"Shubra Al Khaimah",
					L"Qalioub", L"Tukh", L"Banha", L"Tanta", L"Assiut", L"Ismailia"
			});
			this->destination->Location = System::Drawing::Point(119, 226);
			this->destination->Margin = System::Windows::Forms::Padding(4);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(172, 26);
			this->destination->TabIndex = 48;
			this->destination->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::destination_SelectedIndexChanged);
			// 
			// start_place
			// 
			this->start_place->FormattingEnabled = true;
			this->start_place->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Cairo(Ramses)" });
			this->start_place->Location = System::Drawing::Point(119, 181);
			this->start_place->Margin = System::Windows::Forms::Padding(4);
			this->start_place->Name = L"start_place";
			this->start_place->Size = System::Drawing::Size(172, 26);
			this->start_place->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(4, 358);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 18);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Num of Ticket";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(20, 230);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 18);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Destination";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(25, 185);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 18);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Start Place";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(25, 99);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 18);
			this->label1->TabIndex = 42;
			this->label1->Text = L"First Name";
			// 
			// second_name
			// 
			this->second_name->Location = System::Drawing::Point(119, 139);
			this->second_name->Margin = System::Windows::Forms::Padding(4);
			this->second_name->Name = L"second_name";
			this->second_name->Size = System::Drawing::Size(172, 23);
			this->second_name->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(28, 143);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 18);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Last Name";
			// 
			// first_name
			// 
			this->first_name->Location = System::Drawing::Point(119, 99);
			this->first_name->Margin = System::Windows::Forms::Padding(4);
			this->first_name->Name = L"first_name";
			this->first_name->Size = System::Drawing::Size(172, 23);
			this->first_name->TabIndex = 38;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(299, 123);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(695, 324);
			this->listBox1->TabIndex = 56;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(480, 451);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 32);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(601, 452);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 32);
			this->button2->TabIndex = 58;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(672, 495);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 32);
			this->button3->TabIndex = 59;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(353, 451);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 32);
			this->button4->TabIndex = 60;
			this->button4->Text = L"Load";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(506, 495);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 32);
			this->button5->TabIndex = 61;
			this->button5->Text = L"Help";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// total_price
			// 
			this->total_price->Location = System::Drawing::Point(421, 99);
			this->total_price->Margin = System::Windows::Forms::Padding(4);
			this->total_price->Name = L"total_price";
			this->total_price->Size = System::Drawing::Size(172, 23);
			this->total_price->TabIndex = 63;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(328, 101);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 18);
			this->label8->TabIndex = 62;
			this->label8->Text = L"Total Price";
			// 
			// train_number
			// 
			this->train_number->FormattingEnabled = true;
			this->train_number->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1998", L"1200", L"5000", L"6000", L"4000",
					L"1321", L"1455", L"5987"
			});
			this->train_number->Location = System::Drawing::Point(119, 311);
			this->train_number->Margin = System::Windows::Forms::Padding(4);
			this->train_number->Name = L"train_number";
			this->train_number->Size = System::Drawing::Size(172, 26);
			this->train_number->TabIndex = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(6, 315);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 18);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Train Number";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form3::openFileDialog1_FileOk);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Navy;
			this->button6->Location = System::Drawing::Point(726, 448);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(177, 32);
			this->button6->TabIndex = 66;
			this->button6->Text = L"Reserve Cancellation";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"010", L"020", L"030", L"040", L"050", L"060",
					L"070", L"080", L"090"
			});
			this->comboBox1->Location = System::Drawing::Point(119, 265);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 26);
			this->comboBox1->TabIndex = 68;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(1, 269);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 18);
			this->label9->TabIndex = 67;
			this->label9->Text = L"Destination ID";
			// 
			// ticket_type
			// 
			this->ticket_type->FormattingEnabled = true;
			this->ticket_type->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"One_Way", L"Round_Trip" });
			this->ticket_type->Location = System::Drawing::Point(119, 491);
			this->ticket_type->Margin = System::Windows::Forms::Padding(4);
			this->ticket_type->Name = L"ticket_type";
			this->ticket_type->Size = System::Drawing::Size(172, 26);
			this->ticket_type->TabIndex = 70;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gainsboro;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::SteelBlue;
			this->label11->Location = System::Drawing::Point(20, 495);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 18);
			this->label11->TabIndex = 69;
			this->label11->Text = L"Ticket Type";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(703, 98);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 23);
			this->dateTimePicker1->TabIndex = 71;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gainsboro;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::SteelBlue;
			this->label12->Location = System::Drawing::Point(647, 99);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 18);
			this->label12->TabIndex = 72;
			this->label12->Text = L"Date";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(996, 540);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->ticket_type);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->train_number);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->total_price);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->start_time);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->num_of_ticket);
			this->Controls->Add(this->clss);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->start_place);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->second_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->first_name);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->Text = L"Editing Reservation";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		previous->Show();
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Form4 ^m = gcnew Form4();
	m->Show();
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		StreamReader^op = gcnew StreamReader("Data.txt");
		while (!op->EndOfStream){

			listBox1->Items->Add(op->ReadLine());
		}
		op->Close();

	

	//to show update,reserve cancellation buttons
	button1->Enabled = true;
	button6->Enabled = true;
	button4->Enabled = false;

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	//to  save the changed data 
	
		StreamWriter^file = gcnew StreamWriter("Data.txt");
		for (int i = 0; i < listBox1->Items->Count; i++){

			file->WriteLine(listBox1->Items[i]->ToString());
		}
		file->Close();
	
	

//to show message box
	MessageBox::Show("Data Saved", "Done");
	//to clear all data after save edit
	listBox1->Items->Clear();

	//to hide buttons again
	button2->Enabled = false;
	button4->Enabled = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

	listBox1->Items->Remove(listBox1->SelectedItem->ToString());
	//to show save button
	button2->Enabled = true;
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	if (listBox1->SelectedIndex != -1){
		String^passenger = listBox1->SelectedItem->ToString();
		array <String^>^Result;
		array<Char>^splitchar = { '\t' };
		Result = passenger->Split(splitchar, StringSplitOptions::None);
		first_name->Text = Result[0];
		second_name->Text = Result[1];
		start_place->SelectedItem = Result[2];
		destination->SelectedItem = Result[3];
		train_number->SelectedItem = Result[4];
		num_of_ticket->SelectedItem = Result[5];
		start_time->SelectedItem = Result[6];
		clss->SelectedItem = Result[7];
		total_price->Text = Result[8];
		ticket_type->SelectedItem = Result[9];
		//date->Text = Result[9];
	}
	
}
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//to change price the changes happen in edit 
	double num_ticket = Convert::ToDouble(num_of_ticket->SelectedItem);

	StreamReader^read = gcnew StreamReader("system.txt");
	while (!read->EndOfStream){
		String^ name = read->ReadLine();
		array<String^>^price;
		price = name->Split('\t');
		if (comboBox1->SelectedItem->ToString() == price[0]){
			double price1 = Convert::ToDouble(price[1]);
				double first_class = Convert::ToDouble(price[2]);
					double second_class = Convert::ToDouble(price[3]);

			if (ticket_type->SelectedItem == "One_Way"){

				if (clss->SelectedItem == "First_Class"){
					double result = (price1 + first_class )*num_ticket ;
						total_price->Text = Convert::ToString(result);
				}
				else if (clss->SelectedItem == "Second_Class"){
					double result = (price1 + second_class) * num_ticket;
						total_price->Text = Convert::ToString(result);
				}
				else if (clss->SelectedItem == "Normal"){
					double result = price1*num_ticket;
						total_price->Text = Convert::ToString(result);

				}
				else
					MessageBox::Show("wrong choice.please check from your choice in Class,Ticket Type boxs", "Error");
			}
			else if (ticket_type->SelectedItem == "Round_Trip"){

				if (clss->SelectedItem == "First_Class"){
					double result = (price1 + first_class)*num_ticket * 2;
						total_price->Text = Convert::ToString(result);
				
				}
				else if (clss->SelectedItem == "Second_Class"){
					double result = (price1 + second_class) * num_ticket * 2;
						total_price->Text = Convert::ToString(result);
					
				}
				else if (clss->SelectedItem == "Normal"){
					double result = (price1*num_ticket) * 2;
						total_price->Text = Convert::ToString(result);
				
				}
				else
					MessageBox::Show("wrong choice.please check from your choice in Class,Ticket Type boxs", "Error");

			}
			else
				MessageBox::Show("wrong choice.please check from your choice in Class,Ticket Type boxs ", "Error");

			break;
		}


	}
	read->Close();

	//update
	String^f = "";
		f=first_name->Text + "\t" + second_name->Text + "\t" + start_place->SelectedItem + "\t" + destination->SelectedItem + "\t" + train_number->SelectedItem + "\t" +
		num_of_ticket->SelectedItem + "\t" + start_time->SelectedItem + "\t" + clss->SelectedItem + "\t" + total_price->Text+"\t"+ticket_type->SelectedItem+"\t"+dateTimePicker1->Text->ToString();
	int index = listBox1->SelectedIndex;
	listBox1->Items[index] = f;
	//to show save button
	button2->Enabled = true;


}
private: System::Void destination_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex =destination->SelectedIndex;
}
};
}
