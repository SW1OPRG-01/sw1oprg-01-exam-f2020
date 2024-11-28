// Bilag Patient.cpp

#include "PatientV2.h"
#include <iostream>
#include <iomanip>

using namespace std;

PatientV2::PatientV2(string navn, double hoejde, double vaegt, int fDag, int fMaaned, int fAar) : dato_(Dato(1, 1, 1970)) {
  setNavn(navn);
  setFoedselsDato(fDag, fMaaned, fAar);
  dato_ = Dato(fDag, fMaaned, fAar);
  setVaegt(vaegt);
  setHoejde(hoejde);
}

void PatientV2::setNavn(std::string navn)
{
	navn_ = (navn != "") ? navn : "Ukendt";

}

std::string PatientV2::getNavn() const
{
	return navn_;
}

void PatientV2::setFoedselsDato(int d, int m, int a)
{
	dato_ = Dato(d, m, a);
}

int PatientV2::getFDag() const
{
	return dato_.getDag();
}

int PatientV2::getFMaaned() const
{
	return dato_.getMaaned();
}

int PatientV2::getFAar() const
{
	return dato_.getAar();
}

double PatientV2::calculateBMI() const
{
	return vaegt_ / (hoejde_ * hoejde_);
}

void PatientV2::setHoejde(double hoejde) {
  if(hoejde >= 0.45 && hoejde <= 2.35) {
    hoejde_ = hoejde;
  } else {
    hoejde_ = 1.74;
  }
}

double PatientV2::getHoejde() const {
  return hoejde_;
}

void PatientV2::setVaegt(double vaegt) {
  if(vaegt >= 0.45 && vaegt <= 300) {
    vaegt_ = vaegt;
  } else {
    vaegt_ = 75;
  }
}

double PatientV2::getVaegt() const {
  return vaegt_;
}

void PatientV2::print() const {
  cout << "Navn: " << getNavn() << endl;
  cout << "Hoejde: " << getHoejde() << endl;
  cout << "Vaegt: " << getVaegt() << endl;
  cout << "Foedt: " << getFAar() << "-" << setfill('0') << setw(2) << getFMaaned() << "-" << setfill('0') << setw(2) << getFDag() << endl;
  cout << "BMI: " << calculateBMI() << endl;
}