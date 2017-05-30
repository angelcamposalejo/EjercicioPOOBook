#pragma once
class NumerosComplejos
{
public:
	NumerosComplejos(void);
	~NumerosComplejos(void);
	double real = 0.0;
	double imaginario = 0.0;
	double modulo = 0.0;
	double angulo = 0.0;
	double GetModulo();
	double GetAngulo();
	wstring signo= L"+";
	wstring GetText();
	wstring GetConjugado();
};

