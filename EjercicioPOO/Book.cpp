#include "stdafx.h"
#include "Book.h"


Book::Book(void)
{
	this->numPaginas = 0;
}
Book::Book(int numPaginas)
{
	this->numPaginas = numPaginas;
}


Book::~Book(void)
{
}
void Book::SetNumeroPaginas(int numPaginas)
{
	if (numPaginas <= 50)throw L"A book must have at least 50 pages";
	if (numPaginas > 100)throw L"A book must have at the most 100 pages";
	this->numPaginas = numPaginas;
}
int Book::GetNumeroPaginas()
{
	return numPaginas;
}
void Book::Reset()
{
	color = RGB(0, 0, 0);
	numPaginas = 0;
	year = 1990;
	precio = 0.0;
}
void Book::IncrementarPrecio(double porcentaje)
{
	const double incrementar = precio*porcentaje;
	precio += incrementar;
}