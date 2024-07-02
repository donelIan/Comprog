#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ PatientInfobox;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ PatientInformation;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PatientInfobox = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->PatientInformation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// PatientInfobox
			// 
			this->PatientInfobox->Location = System::Drawing::Point(137, 115);
			this->PatientInfobox->Multiline = true;
			this->PatientInfobox->Name = L"PatientInfobox";
			this->PatientInfobox->Size = System::Drawing::Size(401, 236);
			this->PatientInfobox->TabIndex = 2;
			// 
			// PatientInformation
			// 
			this->PatientInformation->AutoSize = true;
			this->PatientInformation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->PatientInformation->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatientInformation->Location = System::Drawing::Point(193, 36);
			this->PatientInformation->Name = L"PatientInformation";
			this->PatientInformation->Size = System::Drawing::Size(272, 43);
			this->PatientInformation->TabIndex = 11;
			this->PatientInformation->Text = L"Patient Information";
			this->PatientInformation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(665, 386);
			this->Controls->Add(this->PatientInformation);
			this->Controls->Add(this->PatientInfobox);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm12";
			this->Text = L"MyForm12";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
