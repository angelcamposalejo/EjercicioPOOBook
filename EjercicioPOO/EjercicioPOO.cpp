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
	book.numPaginas = 100;
	book.precio = 235.90;
	book.autor = L"Shakespeare";
	DisplayInformacion(book);
	book.Reset();
	book.autor = L"Nery Allen";
	DisplayInformacion(book);
}
void EjercicioPOO::DisplayInformacion(Book&book)
{
	wstring texto;
	Sys::Format(texto, L"El libro %s tiene %d paginas y cuesta %.2f", book.autor.c_str(), book.numPaginas, book.precio);
	this->MessageBox(texto, L"Informacion del libro", MB_OK);
}
wchar_t*EjercicioPOO::GetAutor(int indice)
{
	switch (indice)
	{
	case 0:return L"Robert Hicks";
	case 1:return L"Juan Pérez";
	}
	return L"Alicia Smith";
}

