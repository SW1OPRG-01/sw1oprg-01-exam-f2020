// Bilag Patient.cpp

#include "Patient.h"
#include <iostream>
#include <iomanip>

using namespace std;

Patient::Patient(string navn, double hoejde, double vaegt, int fDag, int fMaaned, int fAar) {
  setNavn(navn);
  setFoedselsDato(fDag, fMaaned, fAar);
  setVaegt(vaegt);
  setHoejde(hoejde);
}

void Patient::setNavn(std::string navn)
{
	navn_ = (navn != "") ? navn : "Ukendt";

}

std::string Patient::getNavn() const
{
	return navn_;
}

void Patient::setFoedselsDato(int d, int m, int a)
{
	fDag_ = 1;
	fMaaned_ = 1;
	fAar_ = 1970;

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

	fDag_ = d;
	fMaaned_ = m;
	fAar_ = a;
}

int Patient::getFDag() const
{
	return fDag_;
}

int Patient::getFMaaned() const
{
	return fMaaned_;
}

int Patient::getFAar() const
{
	return fAar_;
}

double Patient::calculateBMI() const
{
	return vaegt_ / (hoejde_ * hoejde_);
}

void Patient::setHoejde(double hoejde) {
  if(hoejde >= 0.45 && hoejde <= 2.35) {
    hoejde_ = hoejde;
  } else {
    hoejde_ = 1.74;
  }
}

double Patient::getHoejde() const {
  return hoejde_;
}

void Patient::setVaegt(double vaegt) {
  if(vaegt >= 0.45 && vaegt <= 300) {
    vaegt_ = vaegt;
  } else {
    vaegt_ = 75;
  }
}

double Patient::getVaegt() const {
  return vaegt_;
}

void Patient::print() const {
  cout << "Navn: " << getNavn() << endl;
  cout << "Hoejde: " << getHoejde() << endl;
  cout << "Vaegt: " << getVaegt() << endl;
  cout << "Foedt: " << getFAar() << "-" << setfill('0') << setw(2) << getFMaaned() << "-" << setfill('0') << setw(2) << getFDag() << endl;
  cout << "BMI: " << calculateBMI() << endl;
}