#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//funçoes abaixo
int soma(int a, int b){
	
	int c;
	
	c = a+b;
	
	return c;
		
}

int subtracao(int a, int b){
	
	int c;
	
	c = a-b;
	
	return c;
	
}

int multiplicacao(int a, int b){
	
	int c;
	
	c = a*b;
	
	return c;
	
}

int divisao(int a, int b){
	
	int c;
	
	c = a/b;
	
	return c;
}


// programa principal com repetição que chama as funçoes
main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,n,d;
	long i;
	for(i=0; i<=99999999; i++){
		
		system("cls || clear");
		printf("\ndigite uma opcao de menu");
		printf("\n1 - somar");
		printf("\n2 - subtrair");
		printf("\n3 - multiplicar");
		printf("\n4 - dividir");
		printf("\n5 - armazenar resultado na memoria");
		printf("\n6 - sair");
		printf("\n");
		scanf("%d", &n);
		if(n == 1){
			printf("\ndigite o primeiro numero da soma: ");	
			scanf("%d", &a);
			
			printf("\ndigite o segundo numero da soma: ");	
			scanf("%d", &b);
			
			d=soma(a,b);
			
			printf("\no resultado eh: %d", d);
			
			printf("\n");
			
			system("pause");
			
		}else{
			if(n == 2){
				
				printf("\ndigite o primeiro numero da subtracao: ");	
				scanf("%d", &a);
			
				printf("\ndigite o segundo numero da subtracao: ");	
				scanf("%d", &b);
			
				d=subtracao(a,b);
			
				printf("\no resultado eh: %d", d);
				
				printf("\n");
			
				system("pause");
				
				
			}else{
				if(n == 3){
					
					printf("\ndigite o primeiro numero da multiplicacao: ");	
					scanf("%d", &a);
			
					printf("\ndigite o segundo numero da multiplicacao: ");	
					scanf("%d", &b);
			
					d=multiplicacao(a,b);
			
					printf("\no resultado eh: %d", d);
					
					printf("\n");
			
					system("pause");
					
				
				}else{
					if(n == 4){
					
					printf("\ndigite o primeiro numero da divisao: ");	
					scanf("%d", &a);
			
					printf("\ndigite o segundo numero da divisao: ");	
					scanf("%d", &b);
			
					d=divisao(a,b);
			
					printf("\no resultado eh: %d", d);
					
					printf("\n");
			
					system("pause");					
				
					}else{
						if(n == 5){
							printf("ainda em teste");
							return 0;
						}else{
							if(n == 6) return 0;
						}
					}
				}
				
			}
		}
	}	
	
}
