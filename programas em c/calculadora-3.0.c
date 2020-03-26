#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

// funçoes menu interos abaixo
int somai(int a, int b){
	
	int c;
	
	c = a+b;
	
	return c;
		
}

int subtracaoi(int a, int b){
	
	int c;
	
	c = a-b;
	
	return c;
	
}

int multiplicacaoi(int a, int b){
	
	int c;
	
	c = a*b;
	
	return c;
	
}

int divisaoi(int a, int b){
	
	int c;
	
	c = a/b;
	
	return c;
}

int raizquadradai(int a){
	
	int c;
	
	c = sqrt(a);
	
	return c;
}

int potenciai(int a, int b){
	
	int c;
	//pow(variável, expoente)
	c = pow(a, b);
	
	return c;
}


//funçoes menu reais abaixo

float somar(float e, float f){
	
	float c;
	
	c = e+f;
	
	return c;
		
}

float subtracaor(float e, float f){
	
	float c;
	
	c = e-f;
	
	return c;
	
}

float multiplicacaor(float e, float f){
	
	float c;
	
	c = e*f;
	
	return c;
	
}

float divisaor(float e, float f){
	
	float c;
	
	c = e/f;
	
	return c;
}

float raizquadradaf(float e){
	
	float c;
	
	c = sqrt(e);
	
	return c;
}

float potenciar(float e, float f){
	
	float c;
	
	c = pow(e, f);
	
	return c;
}


int somafirst(){
	
	int a,b,d;
	
	a=0;
	b=0;
	d=0;
	
	printf("\ndigite o primeiro numero da soma: ");	
	scanf("%d", &a);
			
	printf("\ndigite o segundo numero da soma: ");	
	scanf("%d", &b);
				
	d=somai(a,b);
			
	printf("\no resultado eh: %d", d);
			
	printf("\n");
			
	system("pause");
	
}

int subtracaofirst(){
	
	int a,b,d;
	
	a=0;
	b=0;
	d=0;
	
	printf("\ndigite o primeiro numero da subtracao: ");	
	scanf("%d", &a);
			
	printf("\ndigite o segundo numero da subtracao: ");	
	scanf("%d", &b);
			
	d=subtracaoi(a,b);
			
	printf("\no resultado eh: %d", d);
				
	printf("\n");
			
	system("pause");
	
}

int multiplicacaofirst(){
	
	int a,b,d;
	
	a=0;
	b=0;
	d=0;
	
	printf("\ndigite o primeiro numero da multiplicacao: ");	
	scanf("%d", &a);
			
	printf("\ndigite o segundo numero da multiplicacao: ");	
	scanf("%d", &b);
			
	d=multiplicacaoi(a,b);
			
	printf("\no resultado eh: %d", d);
					
	printf("\n");
			
	system("pause");
	
}

int divisaofirst(){
	
	int a,b,d;
	
	a=0;
	b=0;
	d=0;
	
	printf("\ndigite o primeiro numero da divisao: ");	
	scanf("%d", &a);
			
	printf("\ndigite o segundo numero da divisao: ");	
	scanf("%d", &b);
			
	d=divisaoi(a,b);
			
	printf("\no resultado eh: %d", d);
				
	printf("\n");
			
	system("pause");
	
}

int raizquadfirst(){
	
	int a,d;
	
	a=0;
	d=0;
	
	printf("\ndigite o primeiro numero da raiz quadrada: ");	
	scanf("%d", &a);
			
	d=raizquadradai(a);
			
	printf("\no resultado eh: %d", d);
				
	printf("\n");
			
	system("pause");
	
}

int potenciafirst(){
	
	int a,b,d;
	
	a=0;
	b=0;
	d=0;
	
	printf("\ndigite a base da potencia: ");	
	scanf("%d", &a);
			
	printf("\ndigite o expoente da potencia: ");	
	scanf("%d", &b);
			
	d=potenciai(a,b);
			
	printf("\no resultado eh: %d", d);
				
	printf("\n");
			
	system("pause");
	
}

int primeiromenu(){
    setlocale(LC_ALL, "Portuguese");
    int a,b,d,n,m;
       
    do{			
		system("cls || clear");
		printf("\ndigite uma opcao de menu");
		printf("\n1 - somar");
		printf("\n2 - subtrair");
		printf("\n3 - multiplicar");
		printf("\n4 - dividir");
		printf("\n5 - raiz quadrada");
		printf("\n6 - potencia");
		printf("\n7 - menu anterior");
		printf("\n");
		scanf("%d", &n);
		 		
		a=0;
		b=0;
		d=0;
		if( n>=1 && n<=6  ){
		 		
			switch( n ){
        	   	case 1:
            	
              		somafirst();	
				
        	    break;
                
            	case 2:
            	
            		subtracaofirst();
                
               	break; 
               
    	        case 3:
               
        	    	multiplicacaofirst();
               
            	break;
               
            	case 4:
               
                	divisaofirst();					
				               
    	        break;
    	        
    	        case 5:
               
                	raizquadfirst();					
				               
    	        break;
    	        
    	        case 6:
               
                	potenciafirst();					
				               
    	        break;
                
            	default:
                	printf("Você não digitou um valor válido\n");

        	}
        }else{
        	 break;
		}
    }while(1==1);   
}





float somasecond(){
	
	float e,f,g;
	
	e=0;
	f=0;
	g=0;
	
	printf("\ndigite o primeiro numero da soma: ");	
   	scanf("%f", &e);
			
	printf("\ndigite o segundo numero da soma: ");	
	scanf("%f", &f);
			
	g=somar(e,f);
			
	printf("\no resultado eh: %f", g);
			
	printf("\n");
			
	system("pause");
	
}

float subtracaosecond(){
	
	float e,f,g;
	
	e=0;
	f=0;
	g=0;
	
	printf("\ndigite o primeiro numero da subtracao: ");	
	scanf("%f", &e);
			
	printf("\ndigite o segundo numero da subtracao: ");	
	scanf("%f", &f);
			
	g=subtracaor(e,f);
			
	printf("\no resultado eh: %f", g);
				
	printf("\n");
			
	system("pause");
	
}

float multiplicacaosecond(){
	
	float e,f,g;
	
	e=0;
	f=0;
	g=0;
	
	printf("\ndigite o primeiro numero da multiplicacao: ");	
	scanf("%f", &e);
			
	printf("\ndigite o segundo numero da multiplicacao: ");	
	scanf("%f", &f);
			
	g=multiplicacaor(e,f);
			
	printf("\no resultado eh: %f", g);
					
	printf("\n");
			
	system("pause");
	
}

float divisaosecond(){
	
	float e,f,g;
	
	e=0;
	f=0;
	g=0;
	
	printf("\ndigite o primeiro numero da divisao: ");	
	scanf("%f", &e);
			
	printf("\ndigite o segundo numero da divisao: ");	
	scanf("%f", &f);
			
	g=divisaor(e,f);
			
	printf("\no resultado eh: %f", g);
				
	printf("\n");
			
	system("pause");
	
}

float raizquadsecond(){
	
	float e,g;
	
	e=0;
	g=0;
	
	printf("\ndigite o primeiro numero da raiz quadrada: ");	
	scanf("%f", &e);
			
	g=raizquadradaf(e);
			
	printf("\no resultado eh: %f", g);
				
	printf("\n");
			
	system("pause");
	
}

float potenciasecond(){
	
	float e,f,g;
	
	e=0;
	f=0;
	g=0;
	
	printf("\ndigite a base da potencia: ");	
	scanf("%f", &e);
			
	printf("\ndigite o expoente da potencia: ");	
	scanf("%f", &f);
			
	g=potenciar(e,f);
			
	printf("\no resultado eh: %f", g);
				
	printf("\n");
			
	system("pause");
	
}

   
float segundomenu(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float e,f,g;
	long i;
    
	//por motivos de aprendisado deixei o menu de reais com o laço em for	
    for(i=0; i<=99999999999999; i++){
			
		system("cls || clear");
		printf("\ndigite uma opcao de menu");
		printf("\n1 - somar");
		printf("\n2 - subtrair");
		printf("\n3 - multiplicar");
		printf("\n4 - dividir");
		printf("\n5 - raiz quadrada");
		printf("\n6 - potencia");
		printf("\n7 - menu anterior");
		printf("\n");
		scanf("%d", &n);
				
		e=0;
		f=0;
		g=0;
			
		if( n>=1 && n<=6  ){
						
			switch( n ){
            	case 1:
            	
                	somasecond();
				
        	    break;
                
            	case 2:
            	
                	subtracaosecond();
                
               	break; 
               
    	        case 3:
               
        	    	multiplicacaosecond();
               
            	break;
               
            	case 4:
               
                	divisaosecond();					
				               
    	    	break;
    	    	
    	    	case 5:
    	    		
    	    		raizquadsecond();
    	    		
    	    	break;
    	    	
    	    	case 6:
               
                	potenciasecond();					
				               
    	        break;
                
    	        default:
                	printf("Você não digitou um valor válido\n");
   		    }
        }else{
        	break;
		}	
	}
}




// programa principal com repetição que chama as funçoes
int main(void){
	
	 setlocale(LC_ALL, "Portuguese");
	
	int a,b,d,n,m;
	float e,f,g;
	long i;
	for(i=0; i<=99999999999999; i++){
		
		system("cls || clear");
		printf("\ndigite uma opcao de menu");
		printf("\n1 - operações com números inteiros");
		printf("\n2 - operações com números rais");
		printf("\n3 - sair");
		printf("\n4 - bonus: numero randomico");	
		printf("\n");
		scanf("%d", &m);
		
		switch( m ){
	
		
			case 1:
                 
                primeiromenu();
				
        		break;
        		
        	case 2:
        		
        		segundomenu();
        		break;
        	
        	case 3:
                
            	return 0;
                
            	break;	
            
            case 4:
            	
            	printf("%d ", rand() % 60);
            	system("pause");
            	
            	break;
				
        	default:
        	
           		printf("Você não digitou um valor válido\n");	
        
   			}
		
	
		}
		
	
	}
	

