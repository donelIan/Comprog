#pragma once

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include "All_Patient.h"
#include "Signupform.h"

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(sql::Connection* conn)
		{
			InitializeComponent();
			con = conn;
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: sql::Connection* con;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::TextBox^ ageBox;
	private: System::Windows::Forms::TextBox^ genderBox;
	private: System::Windows::Forms::TextBox^ contactBox;
	private: System::Windows::Forms::TextBox^ addressBox;
	private: System::Windows::Forms::TextBox^ birthplaceBox;
	private: System::Windows::Forms::TextBox^ nationalityBox;
	private: System::Windows::Forms::TextBox^ religionBox;
	private: System::Windows::Forms::TextBox^ civilBox;
	private: System::Windows::Forms::TextBox^ birthBox;
	private: System::Windows::Forms::TextBox^ bloodBox;
	private: System::Windows::Forms::TextBox^ emailBox;
	private: System::Windows::Forms::TextBox^ diagnosisBox;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->ageBox = (gcnew System::Windows::Forms::TextBox());
			this->genderBox = (gcnew System::Windows::Forms::TextBox());
			this->contactBox = (gcnew System::Windows::Forms::TextBox());
			this->addressBox = (gcnew System::Windows::Forms::TextBox());
			this->birthplaceBox = (gcnew System::Windows::Forms::TextBox());
			this->nationalityBox = (gcnew System::Windows::Forms::TextBox());
			this->religionBox = (gcnew System::Windows::Forms::TextBox());
			this->civilBox = (gcnew System::Windows::Forms::TextBox());
			this->birthBox = (gcnew System::Windows::Forms::TextBox());
			this->bloodBox = (gcnew System::Windows::Forms::TextBox());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->diagnosisBox = (gcnew System::Windows::Forms::TextBox());

			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(100, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Patient";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);

			// Add other controls initialization here (textboxes, labels, etc.)
			// ...

			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 450);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Person newPerson;
		newPerson.name = msclr::interop::marshal_as<std::string>(this->nameBox->Text);
		newPerson.age = std::stoi(msclr::interop::marshal_as<std::string>(this->ageBox->Text));
		newPerson.gender = msclr::interop::marshal_as<std::string>(this->genderBox->Text);
		newPerson.contactNumber = msclr::interop::marshal_as<std::string>(this->contactBox->Text);
		newPerson.address = msclr::interop::marshal_as<std::string>(this->addressBox->Text);
		newPerson.birthplace = msclr::interop::marshal_as<std::string>(this->birthplaceBox->Text);
		newPerson.nationality = msclr::interop::marshal_as<std::string>(this->nationalityBox->Text);
		newPerson.religion = msclr::interop::marshal_as<std::string>(this->religionBox->Text);
		newPerson.civil = msclr::interop::marshal_as<std::string>(this->civilBox->Text);
		newPerson.birth = msclr::interop::marshal_as<std::string>(this->birthBox->Text);
		newPerson.Tblo = msclr::interop::marshal_as<std::string>(this->bloodBox->Text);
		newPerson.emailAddress = msclr::interop::marshal_as<std::string>(this->emailBox->Text);
		newPerson.diagnosis = msclr::interop::marshal_as<std::string>(this->diagnosisBox->Text);

		auto now = std::chrono::system_clock::now();
		time_t currentTime = std::chrono::system_clock::to_time_t(now);
		char buffer[20];
		strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localtime(&currentTime));
		newPerson.dMission = buffer;

		try {
			unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO patients(name, age, gender, contact_number, address, birthplace, nationality, religion, civil_status, birthday, date_of_admission, blood_type, email_address, diagnosis) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"));

			pstmt->setString(1, newPerson.name);
			pstmt->setInt(2, newPerson.age);
			pstmt->setString(3, newPerson.gender);
			pstmt->setString(4, newPerson.contactNumber);
			pstmt->setString(5, newPerson.address);
			pstmt->setString(6, newPerson.birthplace);
			pstmt->setString(7, newPerson.nationality);
			pstmt->setString(8, newPerson.religion);
			pstmt->setString(9, newPerson.civil);
			pstmt->setString(10, newPerson.birth);
			pstmt->setString(11, newPerson.dMission);
			pstmt->setString(12, newPerson.Tblo);
			pstmt->setString(13, newPerson.emailAddress);
			pstmt->setString(14, newPerson.diagnosis);

			pstmt->executeUpdate();
		}
		catch (sql::SQLException& e) {
			cerr << "# ERR: SQLException in " << __FILE__ << " (" << __FUNCTION__ << ") on line " << __LINE__ << endl;
			cerr << "# ERR: " << e.what();
			cerr << " (MySQL error code: " << e.getErrorCode();
			cerr << ", SQLState: " << e.getSQLState() << " )" << endl;
		}

		MessageBox::Show("Patient added successfully!");

		// Clear text boxes
		this->nameBox->Clear();
		this->ageBox->Clear();
		this->genderBox->Clear();
		this->contactBox->Clear();
		this->addressBox->Clear();
		this->birthplaceBox->Clear();
		this->nationalityBox->Clear();
		this->religionBox->Clear();
		this->civilBox->Clear();
		this->birthBox->Clear();
		this->bloodBox->Clear();
		this->emailBox->Clear();
		this->diagnosisBox->Clear();
	}
};
}
