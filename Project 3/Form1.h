#pragma once
#include"Form2.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  usernamelbl;

	private: System::Windows::Forms::Label^  passwordlbl;
	private: System::Windows::Forms::TextBox^  usernametxt;
	private: System::Windows::Forms::TextBox^  passwordtxt;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->usernamelbl = (gcnew System::Windows::Forms::Label());
			this->passwordlbl = (gcnew System::Windows::Forms::Label());
			this->usernametxt = (gcnew System::Windows::Forms::TextBox());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(296, 267);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(495, 314);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 32);
			this->button2->TabIndex = 3;
			this->button2->Text = L"E&xit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// usernamelbl
			// 
			this->usernamelbl->AutoSize = true;
			this->usernamelbl->BackColor = System::Drawing::Color::Gainsboro;
			this->usernamelbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->usernamelbl->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamelbl->ForeColor = System::Drawing::Color::SteelBlue;
			this->usernamelbl->Location = System::Drawing::Point(107, 188);
			this->usernamelbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->usernamelbl->Name = L"usernamelbl";
			this->usernamelbl->Size = System::Drawing::Size(103, 21);
			this->usernamelbl->TabIndex = 5;
			this->usernamelbl->Text = L"User Name ";
			// 
			// passwordlbl
			// 
			this->passwordlbl->AutoSize = true;
			this->passwordlbl->BackColor = System::Drawing::Color::Gainsboro;
			this->passwordlbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->passwordlbl->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordlbl->ForeColor = System::Drawing::Color::SteelBlue;
			this->passwordlbl->Location = System::Drawing::Point(107, 233);
			this->passwordlbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passwordlbl->Name = L"passwordlbl";
			this->passwordlbl->Size = System::Drawing::Size(94, 21);
			this->passwordlbl->TabIndex = 7;
			this->passwordlbl->Text = L"Password ";
			// 
			// usernametxt
			// 
			this->usernametxt->Location = System::Drawing::Point(238, 186);
			this->usernametxt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->usernametxt->Name = L"usernametxt";
			this->usernametxt->Size = System::Drawing::Size(216, 23);
			this->usernametxt->TabIndex = 8;
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(238, 231);
			this->passwordtxt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->PasswordChar = '*';
			this->passwordtxt->Size = System::Drawing::Size(216, 23);
			this->passwordtxt->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(608, 358);
			this->Controls->Add(this->passwordtxt);
			this->Controls->Add(this->usernametxt);
			this->Controls->Add(this->passwordlbl);
			this->Controls->Add(this->usernamelbl);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Log In";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (usernametxt->Text == "mahmoud"&&passwordtxt->Text == "123")
		{
			Form2^ form = gcnew Form2();
			form->Show();
			this->Hide();
			
		
		}
		else
		{
			
			MessageBox::Show("error.please try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			usernametxt->Text = "" ;
			passwordtxt->Text = "" ;
			
		}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Windows::Forms::DialogResult m = MessageBox::Show("Do you really want to Exit ?", " ", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (m == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
