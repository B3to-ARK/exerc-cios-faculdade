#include <stdio.h>
void inverte_vetor(int v[], int n) {
  int i, j, tmp;
  i = 0;
  j = n-1;
  
  while (i < j) {
    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    
    i++;
    j--;  
  }
}

int main(void) {
  int v[]={1,2,3,4,5,6};
  int n = 6, i;
  
  inverte_vetor(v, n);
    
  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  
  printf("\n");
  
  return(0);  
}
