#pragma once
#include"Form3.h"
#include<cstdlib>
#include<ctime>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;


	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		void clear(){
			firstnametxt->Text = "";
			lastnametxt->Text ="";
			combostarttime->SelectedIndex = -1;
			combodestination->SelectedIndex = -1;
			combodestinationid->SelectedIndex = -1;
			combotrainnumber->SelectedIndex = -1;
			combonumofticket->SelectedIndex = -1;
			comboboxclass->SelectedIndex = -1;
			combostartplace->SelectedIndex = -1;
			totalpricetxt->Text = "";
			combotickettype->SelectedIndex = -1;
		
		}
		
	private: System::Windows::Forms::Button^  button6;



	public:
		
		int count;
		Form2(void)
		{
			
			count = 0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  lastnametxt;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  firstnametxt;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::ComboBox^  combostartplace;
	private: System::Windows::Forms::ComboBox^  combodestination;
	private: System::Windows::Forms::ComboBox^  comboboxclass;







	private: System::Windows::Forms::ComboBox^  combonumofticket;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  totalpricetxt;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  combodestinationid;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  combotrainnumber;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  combotickettype;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  combostarttime;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lastnametxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->firstnametxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->combostartplace = (gcnew System::Windows::Forms::ComboBox());
			this->combodestination = (gcnew System::Windows::Forms::ComboBox());
			this->comboboxclass = (gcnew System::Windows::Forms::ComboBox());
			this->combonumofticket = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->totalpricetxt = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->combodestinationid = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->combotrainnumber = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->combotickettype = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->combostarttime = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(882, 561);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"E&xit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(34, 206);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Last Name";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// lastnametxt
			// 
			this->lastnametxt->Location = System::Drawing::Point(125, 205);
			this->lastnametxt->Margin = System::Windows::Forms::Padding(4);
			this->lastnametxt->Name = L"lastnametxt";
			this->lastnametxt->Size = System::Drawing::Size(172, 23);
			this->lastnametxt->TabIndex = 6;
			this->lastnametxt->TextChanged += gcnew System::EventHandler(this, &Form2::lastnametxt_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(31, 155);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"First Name";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(31, 263);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Start Place";
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(26, 324);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Destination";
			this->label5->Click += gcnew System::EventHandler(this, &Form2::label5_Click);
			// 
			// firstnametxt
			// 
			this->firstnametxt->Location = System::Drawing::Point(125, 150);
			this->firstnametxt->Margin = System::Windows::Forms::Padding(4);
			this->firstnametxt->Name = L"firstnametxt";
			this->firstnametxt->Size = System::Drawing::Size(172, 23);
			this->firstnametxt->TabIndex = 4;
			this->firstnametxt->TextChanged += gcnew System::EventHandler(this, &Form2::firstnametxt_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(10, 533);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 18);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Num of Ticket";
			this->label6->Click += gcnew System::EventHandler(this, &Form2::label6_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(406, 561);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 32);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(586, 562);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 32);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Edit Reservation";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(305, 288);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(716, 259);
			this->listBox1->TabIndex = 21;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::listBox1_SelectedIndexChanged);
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &Form2::listBox1_DoubleClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(355, 196);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 32);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Get Price";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// combostartplace
			// 
			this->combostartplace->FormattingEnabled = true;
			this->combostartplace->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Cairo(Ramses)" });
			this->combostartplace->Location = System::Drawing::Point(125, 261);
			this->combostartplace->Margin = System::Windows::Forms::Padding(4);
			this->combostartplace->Name = L"combostartplace";
			this->combostartplace->Size = System::Drawing::Size(172, 26);
			this->combostartplace->TabIndex = 29;
			this->combostartplace->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combostartplace_SelectedIndexChanged);
			// 
			// combodestination
			// 
			this->combodestination->FormattingEnabled = true;
			this->combodestination->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Mansoura", L"Alexandria", L"Shubra Al Khaimah",
					L"Qalioub", L"Tukh", L"Banha", L"Tanta", L"Assiut", L"Ismailia"
			});
			this->combodestination->Location = System::Drawing::Point(125, 319);
			this->combodestination->Margin = System::Windows::Forms::Padding(4);
			this->combodestination->Name = L"combodestination";
			this->combodestination->Size = System::Drawing::Size(172, 26);
			this->combodestination->TabIndex = 30;
			this->combodestination->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combodestination_SelectedIndexChanged);
			// 
			// comboboxclass
			// 
			this->comboboxclass->FormattingEnabled = true;
			this->comboboxclass->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"First_Class", L"Second_Class", L"Normal" });
			this->comboboxclass->Location = System::Drawing::Point(428, 145);
			this->comboboxclass->Margin = System::Windows::Forms::Padding(4);
			this->comboboxclass->Name = L"comboboxclass";
			this->comboboxclass->Size = System::Drawing::Size(180, 26);
			this->comboboxclass->TabIndex = 31;
			this->comboboxclass->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboboxclass_SelectedIndexChanged);
			// 
			// combonumofticket
			// 
			this->combonumofticket->FormattingEnabled = true;
			this->combonumofticket->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9"
			});
			this->combonumofticket->Location = System::Drawing::Point(125, 532);
			this->combonumofticket->Margin = System::Windows::Forms::Padding(4);
			this->combonumofticket->Name = L"combonumofticket";
			this->combonumofticket->Size = System::Drawing::Size(172, 26);
			this->combonumofticket->TabIndex = 32;
			this->combonumofticket->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combonumofticket_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(639, 145);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 18);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Date";
			this->label9->Click += gcnew System::EventHandler(this, &Form2::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gainsboro;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::SteelBlue;
			this->label10->Location = System::Drawing::Point(364, 150);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 18);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Class";
			this->label10->Click += gcnew System::EventHandler(this, &Form2::label10_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(702, 145);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(180, 23);
			this->dateTimePicker1->TabIndex = 35;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form2::dateTimePicker1_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(482, 217);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 18);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Total Price";
			this->label8->Click += gcnew System::EventHandler(this, &Form2::label8_Click_1);
			// 
			// totalpricetxt
			// 
			this->totalpricetxt->Location = System::Drawing::Point(581, 215);
			this->totalpricetxt->Margin = System::Windows::Forms::Padding(4);
			this->totalpricetxt->Name = L"totalpricetxt";
			this->totalpricetxt->ReadOnly = true;
			this->totalpricetxt->Size = System::Drawing::Size(172, 23);
			this->totalpricetxt->TabIndex = 38;
			this->totalpricetxt->TextChanged += gcnew System::EventHandler(this, &Form2::totalpricetxt_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(355, 239);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 32);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Reserve";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// combodestinationid
			// 
			this->combodestinationid->FormattingEnabled = true;
			this->combodestinationid->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"010", L"020", L"030", L"040", L"050",
					L"060", L"070", L"080", L"090", L""
			});
			this->combodestinationid->Location = System::Drawing::Point(125, 480);
			this->combodestinationid->Margin = System::Windows::Forms::Padding(4);
			this->combodestinationid->Name = L"combodestinationid";
			this->combodestinationid->Size = System::Drawing::Size(172, 26);
			this->combodestinationid->TabIndex = 44;
			this->combodestinationid->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combodestinationid_SelectedIndexChanged);
			this->combodestinationid->TextChanged += gcnew System::EventHandler(this, &Form2::combodestinationid_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gainsboro;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::SteelBlue;
			this->label11->Location = System::Drawing::Point(7, 485);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 18);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Destination ID";
			this->label11->Click += gcnew System::EventHandler(this, &Form2::label11_Click);
			// 
			// combotrainnumber
			// 
			this->combotrainnumber->FormattingEnabled = true;
			this->combotrainnumber->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1998", L"1200", L"5000", L"6000", L"4000" });
			this->combotrainnumber->Location = System::Drawing::Point(125, 426);
			this->combotrainnumber->Margin = System::Windows::Forms::Padding(4);
			this->combotrainnumber->Name = L"combotrainnumber";
			this->combotrainnumber->Size = System::Drawing::Size(172, 26);
			this->combotrainnumber->TabIndex = 46;
			this->combotrainnumber->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combotrainnumber_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(12, 430);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 18);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Train Number";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gainsboro;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::SteelBlue;
			this->label12->Location = System::Drawing::Point(26, 576);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 18);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Ticket Type";
			this->label12->Click += gcnew System::EventHandler(this, &Form2::label12_Click);
			// 
			// combotickettype
			// 
			this->combotickettype->FormattingEnabled = true;
			this->combotickettype->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"One_Way", L"Round_Trip" });
			this->combotickettype->Location = System::Drawing::Point(125, 576);
			this->combotickettype->Margin = System::Windows::Forms::Padding(4);
			this->combotickettype->Name = L"combotickettype";
			this->combotickettype->Size = System::Drawing::Size(172, 26);
			this->combotickettype->TabIndex = 47;
			this->combotickettype->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::combotickettype_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(494, 270);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(342, 17);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Click on the line of reservation to change data on it";
			this->label13->Click += gcnew System::EventHandler(this, &Form2::label13_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(33, 377);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 18);
			this->label7->TabIndex = 51;
			this->label7->Text = L"Start Time";
			// 
			// combostarttime
			// 
			this->combostarttime->FormattingEnabled = true;
			this->combostarttime->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"5:30Õ", L"6:10Õ", L"6:40Õ", L"7:15Õ", L"8:10Õ",
					L"9:00Õ", L"9:40Õ", L"10:30Õ", L"11:30Õ", L"12:10ã", L"1:30ã", L"2:30ã", L"3:00ã", L"4:30ã"
			});
			this->combostarttime->Location = System::Drawing::Point(123, 376);
			this->combostarttime->Margin = System::Windows::Forms::Padding(4);
			this->combostarttime->Name = L"combostarttime";
			this->combostarttime->Size = System::Drawing::Size(172, 26);
			this->combostarttime->TabIndex = 50;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Navy;
			this->button6->Location = System::Drawing::Point(836, 213);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 32);
			this->button6->TabIndex = 55;
			this->button6->Text = L"New";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1023, 612);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->combostarttime);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->combotickettype);
			this->Controls->Add(this->combotrainnumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combodestinationid);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->totalpricetxt);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->combonumofticket);
			this->Controls->Add(this->comboboxclass);
			this->Controls->Add(this->combodestination);
			this->Controls->Add(this->combostartplace);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lastnametxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->firstnametxt);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->Text = L"Reservation Form";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult r=MessageBox::Show("Do you really want to Exit ?", " ", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (r == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		Form3^f = gcnew Form3(this);
		this->Hide();
		f->Show();
	
		
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
	if (listBox1->SelectedIndex != -1){
		String^data = listBox1->SelectedItem->ToString();
		array <String^>^Result;
		array<Char>^splitchar = { '\t' };
		Result = data->Split(splitchar, StringSplitOptions::None);
		firstnametxt->Text = Result[0];
		lastnametxt->Text = Result[1];
		combostartplace->SelectedItem = Result[2];
		combodestination->SelectedItem = Result[3];
		combotrainnumber->SelectedItem = Result[4];
		combonumofticket->SelectedItem = Result[5];
		combostarttime->SelectedItem = Result[6];
		comboboxclass->SelectedItem = Result[7];
		totalpricetxt->Text = Result[8];
		combotickettype->SelectedItem = Result[9];
		//date->Text = Result[9];
	}
	

	//to show button of reserve after rewrite the reservation
	if (listBox1->SelectedIndex != -1){
		button4->Enabled = true;

		//to show button of reserve with the same number of reservation it must be bfore splite to amount the number of tickets
		double num_ticket = Convert::ToDouble(combonumofticket->SelectedItem);
		count -= num_ticket;
	}
	//remove the selected item from list box
	listBox1->Items->Remove(listBox1->SelectedItem);
	
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//to check that employee write all data in ticket 
	if (firstnametxt->Text == "" || lastnametxt->Text == "" || combostartplace->SelectedIndex == -1 || combostarttime->SelectedIndex == -1 || combodestination->SelectedIndex == -1 || combodestinationid->SelectedIndex == -1 ||
		comboboxclass->SelectedIndex == -1 || combotickettype->SelectedIndex == -1 || combonumofticket->SelectedIndex == -1 || combotrainnumber->SelectedIndex == -1){
		MessageBox::Show("please fill all your data first before click get price", "Important", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		double num_ticket = Convert::ToDouble(combonumofticket->SelectedItem);
		//search in the file of system to get price

		StreamReader^read = gcnew StreamReader("system.txt");
		while (!read->EndOfStream){
			String^ name = read->ReadLine();
			array<String^>^price;
			price = name->Split('\t');
			if (combodestinationid->SelectedItem->ToString() == price[0]){
				double price1 = Convert::ToDouble(price[1]);
				double first_class = Convert::ToDouble(price[2]);
				double second_class = Convert::ToDouble(price[3]);

				if (combotickettype->SelectedItem == "One_Way"){

					if (comboboxclass->SelectedItem == "First_Class"){
						double result = (price1 + first_class)*num_ticket;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");
					}
					else if (comboboxclass->SelectedItem == "Second_Class"){
						double result = (price1 + second_class)*num_ticket;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");
					}
					else if (comboboxclass->SelectedItem == "Normal"){
						double result = price1*num_ticket;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");

					}
					else
						MessageBox::Show("wrong choice.please check from your choice in Class,Ticket Type boxs", "Error");
				}
				else if (combotickettype->SelectedItem == "Round_Trip"){

					if (comboboxclass->SelectedItem == "First_Class"){
						double result = (price1 + first_class)*num_ticket * 2;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");
					}
					else if (comboboxclass->SelectedItem == "Second_Class"){
						double result = (price1 + second_class)*num_ticket * 2;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");
					}
					else if (comboboxclass->SelectedItem == "Normal"){
						double result = (price1*num_ticket) * 2;
						totalpricetxt->Text = Convert::ToString(result);
						MessageBox::Show(Convert::ToString(result), "Total Price of Ticket");
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

		//show button of reserve to show data in list box and price 
		button4->Enabled = true;

	}
	
		
}

private: System::Void combodestinationid_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
	private: System::Void combodestination_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		combodestinationid->SelectedIndex = combodestination->SelectedIndex;

			
	}
private: System::Void combodestinationid_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	

	double num_ticket = Convert::ToDouble(combonumofticket->SelectedItem);

	count += num_ticket;
	//number will check if there are places empty after entering num of ticket
	int number = 10-count;
	//number will be negative if there are a reservation so we warnig him to try again
	if (number < 0){
		//because employee click on reserve again so he will increase number of reservation so we need to decrease it 
		count -= num_ticket;
		int empty = 10 - count;
		MessageBox::Show("End of reservation for passengers max=10 rewrite reservation.Rest of ticket ="+Convert::ToString(empty) , "Importatant", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//if there is data in list box that must saved
		button6->Enabled = true;

	}
	else
	{
		//collect the data to be ready to show  
		String ^inf = firstnametxt->Text + "\t" + lastnametxt->Text + "\t" + combostartplace->SelectedItem + "\t" + combodestination->SelectedItem + "\t" + combotrainnumber->SelectedItem + "\t" +
			combonumofticket->SelectedItem + "\t" + combostarttime->SelectedItem + "\t" + comboboxclass->SelectedItem + "\t" + totalpricetxt->Text + "\t" + combotickettype->SelectedItem + "\t" + dateTimePicker1->Text->ToString();
		//to add data in listbox
		listBox1->Items->Add(inf);
		clear();


		//hide reserve button for one more use after using get
		button4->Enabled = false;

		//to avoid more writing data and reservation is completed 
		if (number == 0){
			MessageBox::Show("that is the end of reservation for passengers max=10,when train is ready click New", "Importatant", MessageBoxButtons::OK, MessageBoxIcon::Information);
			button4->Enabled = false;
			button5->Enabled = false;
			//if there is data in list box that must saved
			button6->Enabled = true;

		}


		// show button of save to data can be save in program
		button2->Enabled = true;
	}
}
private: System::Void label8_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void combotrainnumber_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	StreamWriter^savefile = gcnew StreamWriter("Data.txt", true);

	for (int i = 0; i < listBox1->Items->Count; i++){

		savefile->WriteLine(listBox1->Items[i]->ToString());
	}
	savefile->Close();
	//to clear all items in list box after saving it
	listBox1->Items->Clear();

	MessageBox::Show("Data Saved", "Done");

	//to hide save button for one more use after reserve
	button2->Enabled = false; 


}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboboxclass_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void lastnametxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void combotickettype_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void totalpricetxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void combostarttime_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void combonumofticket_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void combostartplace_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void firstnametxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//to can reserve again when train is ready
	count = 0;
	button5->Enabled = true;
	//to hide new button
	button6->Enabled = false;
}
private: System::Void listBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	if ((listBox1->SelectedIndex != -1)){
		
		button4->Enabled = true;

	}
}
};
}
