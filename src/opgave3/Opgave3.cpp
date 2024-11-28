#include "Patient.h"
#include "PatientV2.h"

int main(int argc, char** argv) {
  
  Patient().print();
  Patient("Brian Danielsen", 1.78, 84.0, 14, 5, 1986).print();
  
  PatientV2().print();
  PatientV2("Brian Danielsen", 1.78, 84.0, 14, 5, 1986).print();


  return 0;
}