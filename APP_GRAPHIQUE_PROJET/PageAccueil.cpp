//PageAccueil.cpp
#include "PageAccueil.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	APPGRAPHIQUEPROJET::PageAccueil monFormulaire;
	Application::Run(% monFormulaire);
}


