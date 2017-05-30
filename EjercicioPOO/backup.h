#pragma once  //______________________________________ EjercicioPOO.h  
#include "Resource.h"
#include "Book.h"
#define contador 3
class EjercicioPOO: public Win::Dialog
{
public:
	EjercicioPOO()
	{
	}
	~EjercicioPOO()
	{
	}
	void DisplayInformacion(Book&book);
	wchar_t*GetAutor(int indice);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbx1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(332);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(126);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioPOO";
		tbx1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 17, 8, 308, 111, hWnd, 1000);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbx1.Font = fontArial014A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
