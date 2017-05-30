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

