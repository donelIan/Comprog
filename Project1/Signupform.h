#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <chrono>
#include <ctime>

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
		MyForm1(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

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
	private: System::Windows::Forms::Button^ submitButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
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
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(50, 30);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(200, 20);
			this->nameBox->TabIndex = 0;
			this->nameBox->Text = L"Name";
			// 
			// ageBox
			// 
			this->ageBox->Location = System::Drawing::Point(50, 60);
			this->ageBox->Name = L"ageBox";
			this->ageBox->Size = System::Drawing::Size(200, 20);
			this->ageBox->TabIndex = 1;
			this->ageBox->Text = L"Age";
			// 
			// genderBox
			// 
			this->genderBox->Location = System::Drawing::Point(50, 90);
			this->genderBox->Name = L"genderBox";
			this->genderBox->Size = System::Drawing::Size(200, 20);
			this->genderBox->TabIndex = 2;
			this->genderBox->Text = L"Gender";
			// 
			// contactBox
			// 
			this->contactBox->Location = System::Drawing::Point(50, 120);
			this->contactBox->Name = L"contactBox";
			this->contactBox->Size = System::Drawing::Size(200, 20);
			this->contactBox->TabIndex = 3;
			this->contactBox->Text = L"Contact Number";
			// 
			// addressBox
			// 
			this->addressBox->Location = System::Drawing::Point(50, 150);
			this->addressBox->Name = L"addressBox";
			this->addressBox->Size = System::Drawing::Size(200, 20);
			this->addressBox->TabIndex = 4;
			this->addressBox->Text = L"Address";
			// 
			// birthplaceBox
			// 
			this->birthplaceBox->Location = System::Drawing::Point(50, 180);
			this->birthplaceBox->Name = L"birthplaceBox";
			this->birthplaceBox->Size = System::Drawing::Size(200, 20);
			this->birthplaceBox->TabIndex = 5;
			this->birthplaceBox->Text = L"Birthplace";
			// 
			// nationalityBox
			// 
			this->nationalityBox->Location = System::Drawing::Point(50, 210);
			this->nationalityBox->Name = L"nationalityBox";
			this->nationalityBox->Size = System::Drawing::Size(200, 20);
			this->nationalityBox->TabIndex = 6;
			this->nationalityBox->Text = L"Nationality";
			// 
			// religionBox
			// 
			this->religionBox->Location = System::Drawing::Point(50, 240);
			this->religionBox->Name = L"religionBox";
			this->religionBox->Size = System::Drawing::Size(200, 20);
			this->religionBox->TabIndex = 7;
			this->religionBox->Text = L"Religion";
			// 
			// civilBox
			// 
			this->civilBox->Location = System::Drawing::Point(50, 270);
			this->civilBox->Name = L"civilBox";
			this->civilBox->Size = System::Drawing::Size(200, 20);
			this->civilBox->TabIndex = 8;
			this->civilBox->Text = L"Civil Status";
			// 
			// birthBox
			// 
			this->birthBox->Location = System::Drawing::Point(50, 300);
			this->birthBox->Name = L"birthBox";
			this->birthBox->Size = System::Drawing::Size(200, 20);
			this->birthBox->TabIndex = 9;
			this->birthBox->Text = L"Birthday (YYYY-MM-DD)";
			// 
			// bloodBox
			// 
			this->bloodBox->Location = System::Drawing::Point(50, 330);
			this->bloodBox->Name = L"bloodBox";
			this->bloodBox->Size = System::Drawing::Size(200, 20);
			this->bloodBox->TabIndex = 10;
			this->bloodBox->Text = L"Blood Type";
			// 
			// emailBox
			// 
			this->emailBox->Location = System::Drawing::Point(50, 360);
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(200, 20);
			this->emailBox->TabIndex = 11;
			this->emailBox->Text = L"Email Address";
			// 
			// diagnosisBox
			// 
			this->diagnosisBox->Location = System::Drawing::Point(50, 390);
			this->diagnosisBox->Name = L"diagnosisBox";
			this->diagnosisBox->Size = System::Drawing::Size(200, 20);
			this->diagnosisBox->TabIndex = 12;
			this->diagnosisBox->Text = L"Final Diagnosis";
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(100, 430);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(100, 30);
			this->submitButton->TabIndex = 13;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm1::submitButton_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 500);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->diagnosisBox);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->bloodBox);
			this->Controls->Add(this->birthBox);
			this->Controls->Add(this->civilBox);
			this->Controls->Add(this->religionBox);
			this->Controls->Add(this->nationalityBox);
			this->Controls->Add(this->birthplaceBox);
			this->Controls->Add(this->addressBox);
			this->Controls->Add(this->contactBox);
			this->Controls->Add(this->genderBox);
			this->Controls->Add(this->ageBox);
			this->Controls->Add(this->nameBox);
			this->Name = L"MyForm1";
			this->Text = L"Add Patient Data";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		con->setSchema("testdb");

		std::string name = msclr::interop::marshal_as<std::string>(nameBox->Text);
		int age = Convert::ToInt32(ageBox->Text);
		std::string gender = msclr::interop::marshal_as<std::string>(genderBox->Text);
		std::string contact = msclr::interop::marshal_as<std::string>(contactBox->Text);
		std::string address = msclr::interop::marshal_as<std::string>(addressBox->Text);
		std::string birthplace = msclr::interop::marshal_as<std::string>(birthplaceBox->Text);
		std::string nationality = msclr::interop::marshal_as<std::string>(nationalityBox->Text);
		std::string religion = msclr::interop::marshal_as<std::string>(religionBox->Text);
		std::string civil = msclr::interop::marshal_as<std::string>(civilBox->Text);
		std::string birth = msclr::interop::marshal_as<std::string>(birthBox->Text);
		std::string blood = msclr::interop::marshal_as<std::string>(bloodBox->Text);
		std::string email = msclr::interop::marshal_as<std::string>(emailBox->Text);
		std::string diagnosis = msclr::interop::marshal_as<std::string>(diagnosisBox->Text);

		auto now = std::chrono::system_clock::now();
		std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
		char buffer[20];
		std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
		std::string dMission = buffer;

		try {
			std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO patients(name, age, gender, contact_number, address, birthplace, nationality, religion, civil_status, birthday, date_of_admission, blood_type, email_address, diagnosis) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"));
			pstmt->setString(1, name);
			pstmt->setInt(2, age);
			pstmt->setString(3, gender);
			pstmt->setString(4, contact);
			pstmt->setString(5, address);
			pstmt->setString(6, birthplace);
			pstmt->setString(7, nationality);
			pstmt->setString(8, religion);
			pstmt->setString(9, civil);
			pstmt->setString(10, birth);
			pstmt->setString(11, dMission);
			pstmt->setString(12, blood);
			pstmt->setString(13, email);
			pstmt->setString(14, diagnosis);

			pstmt->executeUpdate();
		} catch (sql::SQLException &e) {
			MessageBox::Show("Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		delete con;
		this->Close();
	}
	};
}
