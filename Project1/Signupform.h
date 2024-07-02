#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ Diagnosis;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ BackButton;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ Gender;
	private: System::Windows::Forms::ComboBox^ CivilStatus;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->Diagnosis = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::ComboBox());
			this->CivilStatus = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(282, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(8, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(8, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Age";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(8, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(8, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contact";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(282, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(8, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Address";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(73, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(282, 20);
			this->textBox5->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(8, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Birthpalce";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(73, 242);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(282, 20);
			this->textBox6->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(8, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nationality";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(73, 277);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(282, 20);
			this->textBox7->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(8, 315);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Religion";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(73, 315);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(282, 20);
			this->textBox8->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(8, 353);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Civil Status";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(368, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Birthdate";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(431, 53);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(121, 20);
			this->textBox10->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(368, 96);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Bloodtype";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(431, 96);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(282, 20);
			this->textBox11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(368, 133);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Email";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(431, 133);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(282, 20);
			this->textBox12->TabIndex = 22;
			// 
			// Diagnosis
			// 
			this->Diagnosis->BackColor = System::Drawing::Color::White;
			this->Diagnosis->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Diagnosis->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Diagnosis->Location = System::Drawing::Point(409, 204);
			this->Diagnosis->Name = L"Diagnosis";
			this->Diagnosis->Size = System::Drawing::Size(281, 20);
			this->Diagnosis->TabIndex = 24;
			this->Diagnosis->Text = L"(Diagnosis)";
			this->Diagnosis->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(418, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 30);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(536, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 29);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(12, 16);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(76, 26);
			this->BackButton->TabIndex = 27;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &MyForm1::BackButton_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(403, 277);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(234, 31);
			this->label14->TabIndex = 29;
			this->label14->Text = L"(ADD NEW PATIENT)";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm1::label14_Click);
			// 
			// Gender
			// 
			this->Gender->FormattingEnabled = true;
			this->Gender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->Gender->Location = System::Drawing::Point(73, 132);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(107, 21);
			this->Gender->TabIndex = 30;
			// 
			// CivilStatus
			// 
			this->CivilStatus->FormattingEnabled = true;
			this->CivilStatus->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Single", L"Married", L"Widowed", L"Divorce" });
			this->CivilStatus->Location = System::Drawing::Point(73, 350);
			this->CivilStatus->Name = L"CivilStatus";
			this->CivilStatus->Size = System::Drawing::Size(107, 21);
			this->CivilStatus->TabIndex = 31;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(720, 445);
			this->Controls->Add(this->CivilStatus);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Diagnosis);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {Clear
	}
private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
