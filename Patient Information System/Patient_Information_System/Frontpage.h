#pragma once

namespace PatientInformationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Frontpage
	/// </summary>
	public ref class Frontpage : public System::Windows::Forms::Form
	{
	public:
		Frontpage(void)
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
		~Frontpage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ search;

	private: System::Windows::Forms::Button^ Add_Patient_Button;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Frontpage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::ComboBox());
			this->Add_Patient_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(213, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search Patient";
			this->label1->Click += gcnew System::EventHandler(this, &Frontpage::label1_Click);
			// 
			// search
			// 
			this->search->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->search->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->search->FormattingEnabled = true;
			this->search->Location = System::Drawing::Point(163, 176);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(215, 21);
			this->search->TabIndex = 0;
			this->search->SelectedIndexChanged += gcnew System::EventHandler(this, &Frontpage::comboBox1_SelectedIndexChanged);
			// 
			// Add_Patient_Button
			// 
			this->Add_Patient_Button->BackColor = System::Drawing::Color::SteelBlue;
			this->Add_Patient_Button->Location = System::Drawing::Point(384, 174);
			this->Add_Patient_Button->Name = L"Add_Patient_Button";
			this->Add_Patient_Button->Size = System::Drawing::Size(74, 23);
			this->Add_Patient_Button->TabIndex = 2;
			this->Add_Patient_Button->Text = L"Add Patient";
			this->Add_Patient_Button->UseVisualStyleBackColor = false;
			this->Add_Patient_Button->Click += gcnew System::EventHandler(this, &Frontpage::Add_Patient_Button_Click);
			// 
			// Frontpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(943, 416);
			this->Controls->Add(this->Add_Patient_Button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->search);
			this->Name = L"Frontpage";
			this->Text = L"Frontpage";
			this->Load += gcnew System::EventHandler(this, &Frontpage::Frontpage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Frontpage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Add_Patient_Button_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
