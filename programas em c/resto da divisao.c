#include <stdio.h>
#include <stdlib.h>

int a, b, c;

main(){
  printf("digite um numero: ");
  scanf("%d", &a);
  
  printf("\ndigite mais um numero: ");
  scanf("%d", &b);
  
  c=a%b;
  
  printf("\nresto da divisao: %d", c);
  
  printf("\n");
  
  system("PAUSE");
  return 0;
}
