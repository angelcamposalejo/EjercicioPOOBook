#include "stdafx.h"
#include "Book.h"


Book::Book(void)
{
	color = RGB(0, 0, 0);
	numPaginas = 0;
	year = 1990;
	precio = 0.0;
}


Book::~Book(void)
{
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