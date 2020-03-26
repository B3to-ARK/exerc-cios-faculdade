#include<stdio.h>   /* diretivas de pre-processamento */


// variaveis goblais



/* definiçoes de funçoes */
int tester(int n){
		if( n == 1) return	printf("\n o numero eh  = 1");
		
	return n;
}


main(){
	int n;
	
	printf(" digite N: " );

	scanf("\n%d",&n);
	
	
	printf("\n%d", n);

	tester(n);
	
	return 0;
}
