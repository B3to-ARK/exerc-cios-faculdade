#include <stdio.h>
#include <string.h>


int main(void) {
	int i, tam;
	char str[100];

	fgets(str, 100, stdin); 
	scanf("%s", str);
	tam = strlen(str);
	printf("Tamanho: %d\n", tam);
	for (i = 0; i < tam; i++) {
		printf("%d %c\n", i, str[i]);	
	
	}

	return(0);

}



