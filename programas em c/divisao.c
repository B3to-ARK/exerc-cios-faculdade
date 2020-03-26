
#include <stdio.h>
#include <stdlib.h>

float a,b,c;
main(){
  
  printf("digite um numero: ");
  scanf("%f", &a);
  
  printf("\ndigite mais um numero: ");
  scanf("%f", &b);
  
  c=a/b;
  
  printf("\ndivisao: %f", c);
  
  printf("\n");
  
  system("PAUSE");
  return 0;
}

