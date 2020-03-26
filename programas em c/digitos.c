#include <stdio.h>
#include <string.h>


int main(void) {
	int i, tam, contador = 0;
	char str[100];

	fgets(str, 100, stdin); 

	tam = strlen(str);

	for (i = 0; i < tam-1; i++) {
		if (str[i] >= '0' && str[i] <= '9')
			contador = contador + 1;
	
	}

	printf("Numero de digitos %d\n", contador);
	return(0);

}



