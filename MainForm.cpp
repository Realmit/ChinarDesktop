#include <Windows.h>  // обязательно для WinMain и WINAPI
#include "MainForm.h"
#include "ShowOrders.h"
#include "OrderForm.h"
#include "MenuForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ChinarDesktop::MainForm^ form = gcnew ChinarDesktop::MainForm();
    Application::Run(form);

    return 0;
}