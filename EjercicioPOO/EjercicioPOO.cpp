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
	NumerosComplejos x(10), y(2, 3), z[2];
	z[0] = x;
	z[1] = y;
	wstring s = x.GetConjugado();
	wstring s2 = y.GetConjugado();
	z[0].imaginario = 18.2;
	//x.real = 2.0;
	//x.imaginario = 3.0;
	//const double modulo = x.GetModulo();
	//const double angulo = x.GetAngulo();
	//wstring texto;
	//Sys::Format(texto, L"%g,%g", modulo, angulo);
	//this->MessageBox(texto, L"Numeros complejos", MB_OK);
	this->tbxSalida.Text = L"x= ";
	this->tbxSalida.Text += x.GetText();
	this->tbxSalida.Text += L"\r\nx= ";
	this->tbxSalida.Text += y.GetText();
	this->tbxSalida.Text += L"\r\nx= ";
	this->tbxSalida.Text += z[0].GetText();
	this->tbxSalida.Text += L"\r\nx= ";
	this->tbxSalida.Text += z[1].GetText();
	//wstring s = x.GetConjugado();
	//this->tbxSalida.Text += x.GetText();
	
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

