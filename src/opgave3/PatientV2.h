#ifndef PATIENTV2_H
#define PATIENTV2_H
#include <string>
#include "Dato.h"

using namespace std;

class PatientV2 {
  public:
    PatientV2(string navn = "Ukendt", double hoejde = 1.74, double vaegt = 75, int fDag = 1, int fMaaned = 1, int fAar = 1970);
    void setNavn(std::string navn);
    std::string getNavn() const;
    void setFoedselsDato(int d, int m, int a);
    int getFDag() const;
    int getFMaaned() const;
    int getFAar() const;
    double calculateBMI() const;
    void setHoejde(double hoejde);
    double getHoejde() const;
    void setVaegt(double hoejde);
    double getVaegt() const;
    void print() const;
  private:
    std::string navn_;
    Dato dato_;
    double vaegt_;
    double hoejde_;
};

#endif