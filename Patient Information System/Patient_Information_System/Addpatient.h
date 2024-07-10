#pragma once

namespace PatientInformationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Addpatient
	/// </summary>
	public ref class Addpatient : public System::Windows::Forms::Form
	{
	public:
		Addpatient(void)
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
		~Addpatient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name_Box;
	protected:

	private: System::Windows::Forms::TextBox^ Age_Box;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Contact_Box;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Religion_Box;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Birthplace_Box;
	private: System::Windows::Forms::TextBox^ Address_Box;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Diagnosis_Box;
	private: System::Windows::Forms::TextBox^ Email_Box;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ BloodType_Box;
	private: System::Windows::Forms::ComboBox^ Gender_Box;


	private: System::Windows::Forms::ComboBox^ CivilStatus_Box;
	private: System::Windows::Forms::Button^ Clear;

	private: System::Windows::Forms::Button^ Submit;


	private: System::Windows::Forms::Button^ ExitButton_AddPatient;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Addpatient::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name_Box = (gcnew System::Windows::Forms::TextBox());
			this->Age_Box = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Contact_Box = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Religion_Box = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Birthplace_Box = (gcnew System::Windows::Forms::TextBox());
			this->Address_Box = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Diagnosis_Box = (gcnew System::Windows::Forms::TextBox());
			this->Email_Box = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->BloodType_Box = (gcnew System::Windows::Forms::ComboBox());
			this->Gender_Box = (gcnew System::Windows::Forms::ComboBox());
			this->CivilStatus_Box = (gcnew System::Windows::Forms::ComboBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->ExitButton_AddPatient = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(42, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &Addpatient::label1_Click);
			// 
			// Name_Box
			// 
			this->Name_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_Box->Location = System::Drawing::Point(99, 35);
			this->Name_Box->Name = L"Name_Box";
			this->Name_Box->Size = System::Drawing::Size(213, 24);
			this->Name_Box->TabIndex = 1;
			// 
			// Age_Box
			// 
			this->Age_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Age_Box->Location = System::Drawing::Point(99, 75);
			this->Age_Box->Name = L"Age_Box";
			this->Age_Box->Size = System::Drawing::Size(47, 24);
			this->Age_Box->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(42, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(28, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Contact";
			// 
			// Contact_Box
			// 
			this->Contact_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Contact_Box->Location = System::Drawing::Point(99, 152);
			this->Contact_Box->Name = L"Contact_Box";
			this->Contact_Box->Size = System::Drawing::Size(213, 24);
			this->Contact_Box->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(30, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(9, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Civil Status";
			this->label5->Click += gcnew System::EventHandler(this, &Addpatient::label5_Click);
			// 
			// Religion_Box
			// 
			this->Religion_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Religion_Box->Location = System::Drawing::Point(99, 265);
			this->Religion_Box->Name = L"Religion_Box";
			this->Religion_Box->Size = System::Drawing::Size(213, 24);
			this->Religion_Box->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(20, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Religion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(20, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Birt Place";
			// 
			// Birthplace_Box
			// 
			this->Birthplace_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Birthplace_Box->Location = System::Drawing::Point(99, 228);
			this->Birthplace_Box->Name = L"Birthplace_Box";
			this->Birthplace_Box->Size = System::Drawing::Size(213, 24);
			this->Birthplace_Box->TabIndex = 10;
			// 
			// Address_Box
			// 
			this->Address_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Address_Box->Location = System::Drawing::Point(99, 188);
			this->Address_Box->Name = L"Address_Box";
			this->Address_Box->Size = System::Drawing::Size(213, 24);
			this->Address_Box->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(30, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Address";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(327, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Diagnosis";
			// 
			// Diagnosis_Box
			// 
			this->Diagnosis_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Diagnosis_Box->Location = System::Drawing::Point(423, 152);
			this->Diagnosis_Box->Multiline = true;
			this->Diagnosis_Box->Name = L"Diagnosis_Box";
			this->Diagnosis_Box->Size = System::Drawing::Size(265, 173);
			this->Diagnosis_Box->TabIndex = 22;
			// 
			// Email_Box
			// 
			this->Email_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Email_Box->Location = System::Drawing::Point(423, 112);
			this->Email_Box->Name = L"Email_Box";
			this->Email_Box->Size = System::Drawing::Size(213, 24);
			this->Email_Box->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(358, 112);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Email";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(328, 75);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Blood Type";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox12->Location = System::Drawing::Point(423, 35);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(213, 24);
			this->textBox12->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(328, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 20);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Birth date";
			// 
			// BloodType_Box
			// 
			this->BloodType_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->BloodType_Box->FormattingEnabled = true;
			this->BloodType_Box->Location = System::Drawing::Point(423, 75);
			this->BloodType_Box->Name = L"BloodType_Box";
			this->BloodType_Box->Size = System::Drawing::Size(59, 26);
			this->BloodType_Box->TabIndex = 24;
			// 
			// Gender_Box
			// 
			this->Gender_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Gender_Box->FormattingEnabled = true;
			this->Gender_Box->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->Gender_Box->Location = System::Drawing::Point(99, 114);
			this->Gender_Box->Name = L"Gender_Box";
			this->Gender_Box->Size = System::Drawing::Size(99, 26);
			this->Gender_Box->TabIndex = 25;
			// 
			// CivilStatus_Box
			// 
			this->CivilStatus_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->CivilStatus_Box->FormattingEnabled = true;
			this->CivilStatus_Box->Location = System::Drawing::Point(102, 307);
			this->CivilStatus_Box->Name = L"CivilStatus_Box";
			this->CivilStatus_Box->Size = System::Drawing::Size(113, 26);
			this->CivilStatus_Box->TabIndex = 26;
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::Tomato;
			this->Clear->Location = System::Drawing::Point(314, 374);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(137, 32);
			this->Clear->TabIndex = 0;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &Addpatient::Clear_Click);
			// 
			// Submit
			// 
			this->Submit->BackColor = System::Drawing::Color::SteelBlue;
			this->Submit->Location = System::Drawing::Point(457, 374);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(132, 32);
			this->Submit->TabIndex = 1;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = false;
			this->Submit->Click += gcnew System::EventHandler(this, &Addpatient::Submit_Click);
			// 
			// ExitButton_AddPatient
			// 
			this->ExitButton_AddPatient->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ExitButton_AddPatient->Location = System::Drawing::Point(1, 5);
			this->ExitButton_AddPatient->Name = L"ExitButton_AddPatient";
			this->ExitButton_AddPatient->Size = System::Drawing::Size(97, 24);
			this->ExitButton_AddPatient->TabIndex = 28;
			this->ExitButton_AddPatient->Text = L"Back";
			this->ExitButton_AddPatient->UseVisualStyleBackColor = false;
			this->ExitButton_AddPatient->Click += gcnew System::EventHandler(this, &Addpatient::button3_Click);
			// 
			// Addpatient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1015, 413);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->ExitButton_AddPatient);
			this->Controls->Add(this->CivilStatus_Box);
			this->Controls->Add(this->Gender_Box);
			this->Controls->Add(this->BloodType_Box);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Diagnosis_Box);
			this->Controls->Add(this->Email_Box);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Religion_Box);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Birthplace_Box);
			this->Controls->Add(this->Address_Box);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Contact_Box);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Age_Box);
			this->Controls->Add(this->Name_Box);
			this->Controls->Add(this->label1);
			this->Name = L"Addpatient";
			this->Text = L"Addpatient";
			this->Load += gcnew System::EventHandler(this, &Addpatient::Addpatient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Addpatient_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
