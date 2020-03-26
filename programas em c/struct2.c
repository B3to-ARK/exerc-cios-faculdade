#include <stdio.h>
#include <string.h>

struct pessoa {
	int cpf;
	char nome[100];
};

void remove_quebra_linha(char str[]) {
	int i = 0;
	while (str[i] != '\n') i++;
	str[i] = 0;
}

int main(void) {
	struct pessoa p;
	//int final;

	scanf("%d\n", &p.cpf);
	fgets(p.nome, 100, stdin);
	
	//final = strlen(p.nome) - 1;
	//p.nome[final] = 0;
	remove_quebra_linha(p.nome);

	printf("Nome: %s!\n", p.nome);
	printf("CPF: %d\n", p.cpf);
	
	return(0);
}
