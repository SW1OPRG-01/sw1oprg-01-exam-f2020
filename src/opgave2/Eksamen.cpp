#include "Eksamen.h"

double bestaaelsesProcent(int* results, int size) {
  double result = 0;
  for(int i = 0; i < size; i++) {
    if(results[i] >= 2) {
      result++;
    }
  }
  return (result / size) * 100;
}