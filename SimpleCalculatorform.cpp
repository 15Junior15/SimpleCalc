#include "SimpleCalculatorform.h"
#include <Windows.h>

using namespace System::Windows::Forms;
using namespace SimpleCalculator1;


void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//FirstCLR::SimpleForm form;
	SimpleCalculator1::SimpleCalculatorform myform;
	Application::Run(% myform);
}

