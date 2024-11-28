#include <stdio.h>

int main(int argc, char** argv) {
  
  int input;
  printf("Indtast alder: ");
  while(scanf("%d", &input) == 1 && input > 102 || input < 14) {
    printf("Fejl\nIndtast alder: ");
  }
    
  int maxPuls = 220 - input; 
  int minZone =  maxPuls * 50 / 100;
  int maxZone = maxPuls * 85 / 100;
  
  printf("%d %d %d \n", maxPuls, minZone, maxZone);
  
  return 0;
}

