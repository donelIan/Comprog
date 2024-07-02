#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ ViewPatient;

	private: System::Windows::Forms::Button^ AddPatient;
	private: System::Windows::Forms::ComboBox^ Search_Patient;
	private: System::Windows::Forms::Label^ SrchPatient;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::Label^ Patient_number;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ PatientRecords;



	protected:


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
			this->ViewPatient = (gcnew System::Windows::Forms::Button());
			this->AddPatient = (gcnew System::Windows::Forms::Button());
			this->Search_Patient = (gcnew System::Windows::Forms::ComboBox());
			this->SrchPatient = (gcnew System::Windows::Forms::Label());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->Patient_number = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PatientRecords = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ViewPatient
			// 
			this->ViewPatient->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewPatient->Location = System::Drawing::Point(101, 320);
			this->ViewPatient->Name = L"ViewPatient";
			this->ViewPatient->Padding = System::Windows::Forms::Padding(2);
			this->ViewPatient->Size = System::Drawing::Size(301, 45);
			this->ViewPatient->TabIndex = 3;
			this->ViewPatient->Text = L"VIEW ALL PATIENT";
			this->ViewPatient->UseVisualStyleBackColor = true;
			// 
			// AddPatient
			// 
			this->AddPatient->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddPatient->Location = System::Drawing::Point(145, 269);
			this->AddPatient->Name = L"AddPatient";
			this->AddPatient->Padding = System::Windows::Forms::Padding(2);
			this->AddPatient->Size = System::Drawing::Size(217, 45);
			this->AddPatient->TabIndex = 4;
			this->AddPatient->Text = L"ADD PATIENT";
			this->AddPatient->UseVisualStyleBackColor = true;
			// 
			// Search_Patient
			// 
			this->Search_Patient->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->Search_Patient->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->Search_Patient->FormattingEnabled = true;
			this->Search_Patient->Location = System::Drawing::Point(101, 183);
			this->Search_Patient->Name = L"Search_Patient";
			this->Search_Patient->Size = System::Drawing::Size(301, 21);
			this->Search_Patient->TabIndex = 6;
			this->Search_Patient->Tag = L"";
			this->Search_Patient->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Search_Patient_SelectedIndexChanged);
			// 
			// SrchPatient
			// 
			this->SrchPatient->AutoSize = true;
			this->SrchPatient->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SrchPatient->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SrchPatient->Location = System::Drawing::Point(204, 160);
			this->SrchPatient->Name = L"SrchPatient";
			this->SrchPatient->Size = System::Drawing::Size(95, 20);
			this->SrchPatient->TabIndex = 7;
			this->SrchPatient->Text = L"Search Patient";
			this->SrchPatient->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// Patient_number
			// 
			this->Patient_number->AutoSize = true;
			this->Patient_number->Location = System::Drawing::Point(411, 188);
			this->Patient_number->Name = L"Patient_number";
			this->Patient_number->Size = System::Drawing::Size(0, 13);
			this->Patient_number->TabIndex = 8;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(497, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// PatientRecords
			// 
			this->PatientRecords->AutoSize = true;
			this->PatientRecords->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->PatientRecords->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatientRecords->Location = System::Drawing::Point(146, 54);
			this->PatientRecords->Name = L"PatientRecords";
			this->PatientRecords->Size = System::Drawing::Size(234, 43);
			this->PatientRecords->TabIndex = 10;
			this->PatientRecords->Text = L"Patient Records";
			this->PatientRecords->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PatientRecords->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(497, 396);
			this->Controls->Add(this->PatientRecords);
			this->Controls->Add(this->Patient_number);
			this->Controls->Add(this->SrchPatient);
			this->Controls->Add(this->Search_Patient);
			this->Controls->Add(this->AddPatient);
			this->Controls->Add(this->ViewPatient);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Search_Patient_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ patient = Search_Patient->Text;
	int^ index = Search_Patient->SelectedIndex;

	SrchPatient->Text = patient;
	Patient_number->Text = index->ToString();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to Exit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (dr == Windows::Forms::DialogResult::Yes)Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
