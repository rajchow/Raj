// InventoryManagementSystem.cpp : main project file.

#include "stdafx.h"
#include "Main Menu.h"
#include <Windows.h>


using namespace InventoryManagementSystem;

int WINAPI WinMain(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
