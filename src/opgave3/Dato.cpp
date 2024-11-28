#include "Dato.h"

Dato::Dato(int dag, int maaned, int aar)
{
	setDato(dag, maaned, aar);
}

void Dato::setDato(int d, int m, int a)
{
	dag_ = 1;
	maaned_ = 1;
	aar_ = 1970;

	if (a < 1900 || a > 2099)
		return;

	if (m < 1 || m > 12)
		return;

	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (d < 1 || d > 31)
			return;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (d < 1 || d > 30)
			return;
		break;

	case 2:
		if (d < 1 || (a % 4 == 0 && d > 29) || (a % 4 != 0 && d > 28))
			return;
		break;

	default:
		return;
		break;
	}

	dag_ = d;
	maaned_ = m;
	aar_ = a;

	return;
}

int Dato::getDag() const
{
	return dag_;
}

int Dato::getMaaned() const
{
	return maaned_;
}

int Dato::getAar() const
{
	return aar_;
}
