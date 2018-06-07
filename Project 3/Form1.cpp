#include "Form1.h"
#include "Form2.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^> ^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// project name & form name 
	Project3::Form1 Form;
	Application::Run(%Form);
}

