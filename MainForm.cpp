#include "MainForm.h" 
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace MC; // Название проекта
[STAThreadAttribute]
int  main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}