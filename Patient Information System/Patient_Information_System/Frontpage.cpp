#include "Frontpage.h"

using namespace PatientInformationSystem;

[STAThreadAttribute]
int main(){

	Application::Run(gcnew Frontpage());

	return 0;
}