#include "stdafx.h"  //________________________________________ EjercicioPOO.cpp
#include "EjercicioPOO.h"
#include "Book.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioPOO app;
	return app.BeginDialog(IDI_EjercicioPOO, hInstance);
}

void EjercicioPOO::Window_Open(Win::Event& e)
{
	Book book;
	book.precio = 198.50;
	book.numPaginas = 220,
	book.autor = L"Edgar Alan";
	book.color = RGB(0, 0, 200);
	book.numPaginas++;
	book.precio *= 2.0;
	wstring texto;
	Sys::Format(texto, L"El libro %s tiene %d paginas y cuesta %22f", book.autor.c_str(), book.numPaginas, book.precio);
	this->Text = texto;

}

