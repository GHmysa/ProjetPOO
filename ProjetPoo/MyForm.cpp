//MyForms.CPP*********************************************************************************************
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPoo::MyForm monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}

