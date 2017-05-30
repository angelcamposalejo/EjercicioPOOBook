#pragma once
class Book
{
public:
	Book(void);
	~Book(void);
	COLORREF color;
	int numPaginas;
	wstring autor;
	int year;
	double precio;
	void Reset();
	void IncrementarPrecio(double porcentaje);
};

