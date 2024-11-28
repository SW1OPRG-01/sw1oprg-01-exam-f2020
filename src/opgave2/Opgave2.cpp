#include <iostream>
#include "Eksamen.h"

int main(int argc, char** argv) {
  
  int results[] = { 0, 12, 4, 2, 10, 7, 12, 00, -3, 2, 7 };
  
  std::cout << bestaaelsesProcent(results, sizeof(results)/sizeof(int)) << std::endl;
  
  return 0;
}