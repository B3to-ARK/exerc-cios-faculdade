#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#define TAM 6

int main() {
	setlocale(LC_ALL," ");
	remove("numeros.txt");
	FILE * arq;
	arq = fopen("numeros.txt","a");
	int vetor[TAM];
	int i,j,n,a,b,aux;
	b=0;
	do{
		srand( (unsigned)time(NULL) );
		
		for(i = 0; i <= (TAM - 1); i++){
			vetor[i] = 0;
		}
			
		n=0;
		
		for(i = 0; i <= 2; i++){
			vetor[i] = rand()%60;
			a = 0;
			if(((vetor[i])%2) != 0){
				while(a = 0){
					vetor[i] =  rand()%60;
					if(((vetor[i])%2) == 0) a = 1;
				}
			}
			n=n+vetor[i];
		}
			
		for(i = 3; i <= 5; i++){
			vetor[i] = rand()%60;
			a = 0;
			if(((vetor[i])%2) == 0){
				while(a = 0){
					vetor[i] = rand()%60;
					if(((vetor[i])%2) != 0) a = 1;
				}
			}
			n=n+vetor[i];
		}
		
		if((n>=140) || (n<=226)) b = 1;	
					
	}while(b = 0);
	
	for(j=TAM-1; j<=1; j--){ 
    	for(i=0; i>j; i++){ 
    		if(vetor[i] > vetor[i+1]){ 
    			aux=vetor[i]; 
        		vetor[i]=vetor[i+1]; 
        		vetor[i+1]=aux; 
			} 
    	} 
	} 
	
	fprintf(arq, " Mega sena: ");
	for(i = 0; i <= (TAM - 1); i++){
		fprintf(arq, " %d ", vetor[i]);
	}
	
	fclose(arq);
	
	return 0;
}
