#include<stdio.h>   /* diretivas de pre-processamento */


// variaveis goblais



/* defini�oes de fun�oes */
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
