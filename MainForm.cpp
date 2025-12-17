#include "MainForm.h"
#include "ShowOrders.h"
#include "OrderForm.h"
#include "MenuForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ChinarDesktop;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MainForm());

    return 0;
}
