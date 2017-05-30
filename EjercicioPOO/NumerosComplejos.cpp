#include "stdafx.h"
#include "NumerosComplejos.h"


NumerosComplejos::NumerosComplejos(void)
{
}


NumerosComplejos::~NumerosComplejos(void)
{
}
double NumerosComplejos::GetModulo()
{
	modulo = sqrt((real*real) + (imaginario*imaginario));
	return modulo;
}
double NumerosComplejos::GetAngulo()
{
	angulo = atan(imaginario / real);
	return angulo;
}
wstring NumerosComplejos::GetText()
{
	wstring texto;
	Sys::Format(texto, L"%.6f %s %.6f i", real,signo.c_str(), imaginario);
	return texto;
}
wstring NumerosComplejos::GetConjugado()
{
	return signo = L"-";
}

