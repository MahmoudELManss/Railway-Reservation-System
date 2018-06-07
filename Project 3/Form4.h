#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Navy;
			this->richTextBox1->Location = System::Drawing::Point(18, 1);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(443, 213);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(382, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click_1);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(469, 214);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->Name = L"Form4";
			this->Text = L"Help for Using Editing";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
