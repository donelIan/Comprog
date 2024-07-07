#pragma once

#include <vector>
#include "Person.h"

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(std::vector<Person>* registry)
		{
			InitializeComponent();
			this->registry = registry;
			LoadPatientNames();
		}

	protected:
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}

	private: std::vector<Person>* registry;
	private: System::Windows::Forms::ListBox^ listBox1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();

			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(260, 238);
			this->listBox1->TabIndex = 0;

			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->ResumeLayout(false);
		}
#pragma endregion

	private:
		void LoadPatientNames() {
			listBox1->Items->Clear();
			for (const auto& person : *registry) {
				String^ name = gcnew String(person.name.c_str());
				listBox1->Items->Add(name);
			}
		}
	};
}
