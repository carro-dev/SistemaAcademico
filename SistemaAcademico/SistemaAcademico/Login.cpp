#include "Login.h"
#include "DataHandler.h"

using namespace System::Windows::Forms;

int main(array< System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SistemaAcademico::Login form;
	Application::Run(%form);
	return 0;
}