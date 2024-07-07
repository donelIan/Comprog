#pragma once

#include <mysql_driver.h>
#include <mysql_connection.h>
#include "Patient_Information.h"
#include "All_Patient.h"
#include "Signupform.h"

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			connectToDatabase();
			loadRegistryFromDatabase();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: sql::mysql::MySQL_Driver* driver;
	private: sql::Connection* con;
	private: std::vector<Person> registry;

	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ viewButton;
	private: System::Windows::Forms::Button^ findButton;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->viewButton = (gcnew System::Windows::Forms::Button());
			this->findButton = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(50, 50);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(200, 50);
			this->addButton->TabIndex = 0;
			this->addButton->Text = L"Add Patient";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);

			// 
			// viewButton
			// 
			this->viewButton->Location = System::Drawing::Point(50, 120);
			this->viewButton->Name = L"viewButton";
			this->viewButton->Size = System::Drawing::Size(200, 50);
			this->viewButton->TabIndex = 1;
			this->viewButton->Text = L"View All Patients";
			this->viewButton->UseVisualStyleBackColor = true;
			this->viewButton->Click += gcnew System::EventHandler(this, &MyForm::viewButton_Click);

			// 
			// findButton
			// 
			this->findButton->Location = System::Drawing::Point(50, 190);
			this->findButton->Name = L"findButton";
			this->findButton->Size = System::Drawing::Size(200, 50);
			this->findButton->TabIndex = 2;
			this->findButton->Text = L"Find Patient";
			this->findButton->UseVisualStyleBackColor = true;
			this->findButton->Click += gcnew System::EventHandler(this, &MyForm::findButton_Click);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 311);
			this->Controls->Add(this->findButton);
			this->Controls->Add(this->viewButton);
			this->Controls->Add(this->addButton);
			this->Name = L"MyForm";
			this->Text = L"Patient Information System";
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		void connectToDatabase() {
			try {
				driver = sql::mysql::get_mysql_driver_instance();
				con = driver->connect("tcp://127.0.0.1:3306", "root", "");
				con->setSchema("testdb");
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("Failed to connect to database.");
				exit(EXIT_FAILURE);
			}
		}

		void loadRegistryFromDatabase() {
			try {
				std::unique_ptr<sql::Statement> stmt(con->createStatement());
				std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT name, age, gender, contact_number, address, birthplace, nationality, religion, civil_status, birthday, date_of_admission, blood_type, email_address, diagnosis FROM patients"));

				while (res->next()) {
					Person person;
					person.name = res->getString("name");
					person.age = res->getInt("age");
					person.gender = res->getString("gender");
					person.contactNumber = res->getString("contact_number");
					person.address = res->getString("address");
					person.birthplace = res->getString("birthplace");
					person.nationality = res->getString("nationality");
					person.religion = res->getString("religion");
					person.civil = res->getString("civil_status");
					person.birth = res->getString("birthday");
					person.dMission = res->getString("date_of_admission");
					person.Tblo = res->getString("blood_type");
					person.emailAddress = res->getString("email_address");
					person.diagnosis = res->getString("diagnosis");

					registry.push_back(person);
				}
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("Failed to load data from database.");
				exit(EXIT_FAILURE);
			}
		}

		void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm1^ form1 = gcnew MyForm1(&registry);
			form1->ShowDialog();
		}

		void viewButton_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm11^ form11 = gcnew MyForm11(&registry);
			form11->ShowDialog();
		}

		void findButton_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm12^ form12 = gcnew MyForm12(&registry);
			form12->ShowDialog();
		}
	};
}
