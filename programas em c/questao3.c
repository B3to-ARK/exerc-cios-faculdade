#include <stdio.h>
#include <stdlib.h>
struct elemento {
  int qtd;
  int x;
};

int busca_elem(struct elemento *e, int tam, int x) {
  int i;
  for (i = 0; i < tam; i++){
  		if (e[i].x == x){
	  		return(i);
		}
	}   
  return(-1); //Indica que elemento nao foi encontrado 
} 


int main(void) {
  int n, i, x, pos, count = 0;
  struct elemento *e;
  
  scanf("%d", &n);
  e = (struct elemento *)malloc(sizeof(struct elemento)*n);
  
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    pos = busca_elem(e, n, x);
    if (pos == -1) {
      e[count].x = x;
      e[count].qtd = 1;
      count++;
    } else {
      e[pos].qtd += 1;   
    }
  }
  
  for (i = 0; i < count; i++) printf("elemento i = %d qtd = %d\n", e[i].x, e[i].qtd);  
  
  return(0);
}
