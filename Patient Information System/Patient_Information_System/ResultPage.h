#pragma once

namespace PatientInformationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultPage
	/// </summary>
	public ref class ResultPage : public System::Windows::Forms::Form
	{
	public:
		ResultPage(void)
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
		~ResultPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Patient_Information_box;
	protected:

	protected:

	private: System::Windows::Forms::Button^ Exit_Patient_Information;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultPage::typeid));
			this->Patient_Information_box = (gcnew System::Windows::Forms::TextBox());
			this->Exit_Patient_Information = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Patient_Information_box
			// 
			this->Patient_Information_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Patient_Information_box->Location = System::Drawing::Point(76, 178);
			this->Patient_Information_box->Multiline = true;
			this->Patient_Information_box->Name = L"Patient_Information_box";
			this->Patient_Information_box->Size = System::Drawing::Size(859, 254);
			this->Patient_Information_box->TabIndex = 0;
			// 
			// Exit_Patient_Information
			// 
			this->Exit_Patient_Information->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Exit_Patient_Information->Location = System::Drawing::Point(0, 1);
			this->Exit_Patient_Information->Name = L"Exit_Patient_Information";
			this->Exit_Patient_Information->Size = System::Drawing::Size(89, 28);
			this->Exit_Patient_Information->TabIndex = 2;
			this->Exit_Patient_Information->Text = L"Back";
			this->Exit_Patient_Information->UseVisualStyleBackColor = false;
			this->Exit_Patient_Information->Click += gcnew System::EventHandler(this, &ResultPage::button1_Click);
			// 
			// ResultPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(939, 433);
			this->Controls->Add(this->Exit_Patient_Information);
			this->Controls->Add(this->Patient_Information_box);
			this->Name = L"ResultPage";
			this->Text = L"ResultPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
