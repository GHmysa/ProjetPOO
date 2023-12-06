//MyForms.CPP*********************************************************************************************
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPoo::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}

