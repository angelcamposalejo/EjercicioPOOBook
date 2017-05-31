#include "stdafx.h"  //________________________________________ EjercicioPOO.cpp
#include "EjercicioPOO.h"
#include "Book.h"
#include "NumerosComplejos.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioPOO app;
	return app.BeginDialog(IDI_EjercicioPOO, hInstance);
}

void EjercicioPOO::Window_Open(Win::Event& e)
{
	//NumerosComplejos x;
	//x.real = 2.0;
	//x.imaginario = 3.0;
	//const double modulo = x.GetModulo();
	//const double angulo = x.GetAngulo();
	//wstring texto;
	//Sys::Format(texto, L"%g,%g", modulo, angulo);
	//this->MessageBox(texto, L"Numeros complejos", MB_OK);
	//this->tbxSalida.Text = L"x= ";
	//this->tbxSalida.Text += x.GetText();
	//this->tbxSalida.Text += L"\r\ny= ";
	//wstring s = x.GetConjugado();
	//this->tbxSalida.Text += x.GetText();
	Book x[3],y(599);
	for (int i = 0; i < 3; i++)x[i].NumPaginas = i + 80;
	wstring texto;
	Sys::Format(texto, L"%d,%d,%d,%d", x[0].GetNumeroPaginas(),x[1].GetNumeroPaginas(),x[2].GetNumeroPaginas(),y.GetNumeroPaginas());
	this->tbxSalida.Text = texto;
	
}
void EjercicioPOO::DisplayInformacion(Book&book)
{
	//wstring texto;
	//Sys::Format(texto, L"El libro %s tiene %d paginas y cuesta %.2f", book.autor.c_str(), book.numPaginas, book.precio);
	//this->MessageBox(texto, L"Informacion del libro", MB_OK);
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

