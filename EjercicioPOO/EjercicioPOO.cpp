#include "stdafx.h"  //________________________________________ EjercicioPOO.cpp
#include "EjercicioPOO.h"
#include "Book.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioPOO app;
	return app.BeginDialog(IDI_EjercicioPOO, hInstance);
}

void EjercicioPOO::Window_Open(Win::Event& e)
{
	Book book[2];
	book[0].precio = 198.50;
	book[0].numPaginas = 220,
	book[0].autor = L"Edgar Alan";
	book[0].color = RGB(0, 0, 200);
	book[1].numPaginas++;
	book[1].precio += 12.5;
	book[1].autor = L"Harry Potter";
	DisplayInformacion(book[0]);
	DisplayInformacion(book[1]);
}
void EjercicioPOO::DisplayInformacion(Book&book)
{
	wstring texto;
	Sys::Format(texto, L"El libro %s tiene %d paginas y cuesta %.2f", book.autor.c_str(), book.numPaginas, book.precio);
	this->MessageBox(texto, L"Informacion del libro", MB_OK);
}

