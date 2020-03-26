#include <stdio.h>

#define TAM 5

int main(void) {
    int i, min, v[TAM];
    
    for (i = 0; i < TAM; i++) {
     //printf("Digite numero %d: ", i);
      
      scanf("%d", &v[i]);
          
    }
    min = v[0];
    
    for (i = 1; i < TAM; i++) {
      if (v[i] < min)
	min = v[i];
                  
    }
    printf("Valor minimo %d\n", min);  
      
      
      
      
     
  
  
  
  return(0);
  
}