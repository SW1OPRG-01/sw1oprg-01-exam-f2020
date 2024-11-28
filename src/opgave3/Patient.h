#ifndef PATIENT_H
#define PATIENT_H
#include <string>

using namespace std;

class Patient {
  public:
    Patient(string navn = "Ukendt", double hoejde = 1.74, double vaegt = 75, int fDag = 1, int fMaaned = 1, int fAar = 1970);
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
    int fDag_;
	  int fMaaned_;
	  int fAar_;
    double vaegt_;
    double hoejde_;
};

#endif