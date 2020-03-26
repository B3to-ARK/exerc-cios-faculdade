#include <stdio.h>

#define COL 3
#define LIN 3
void le_matriz(int m[LIN][COL]) {
	int i, j;
	for (i = 0; i < LIN; i++)
		for (j = 0; j < COL; j++)
			scanf("%d", &m[i][j]);
			//scanf("%d", m + i*COL + j);
}

int main(void) {
	int a[LIN][COL], b[LIN][COL], c[LIN][COL];
	int i, j;

	le_matriz(a);
	le_matriz(b);

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}	
	return(0);
}


