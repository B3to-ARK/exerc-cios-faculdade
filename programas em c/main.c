#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,c;
	c=0;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	for(i=1; i<=(n-1); i++){
		c=c+i+i;	
	}
	c=(c*c);
	printf("Resultado: %d",c);
	return 0;
}
