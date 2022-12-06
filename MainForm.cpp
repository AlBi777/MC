#include "MainForm.h" //

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MC::MainForm form;
	Application::Run(% form);
}
