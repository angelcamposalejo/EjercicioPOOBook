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
	void InitializeGui()
	{
		this->Text = L"EjercicioPOO";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
