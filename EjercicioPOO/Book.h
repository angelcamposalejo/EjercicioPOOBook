#pragma once
class Book
{
public:
	Book(void);
	~Book(void);
	COLORREF color;
	
	wstring autor;
	int year;
	double precio;
	void Reset();
	void IncrementarPrecio(double porcentaje);
	void SetNumeroPaginas(int numPaginas);
	int GetNumeroPaginas();
private:
	int numPaginas;
};

