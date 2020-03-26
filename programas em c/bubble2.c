#include <stdio.h>
void bubble(int v[], int n) {
	int i, j, min, pos_min, tmp;

	for (i = 0; i < n; i++) {
		min = v[i];
		pos_min = i;	
		for (j = i; j < n; j++) {
			if (v[j] < min) {
				min = v[j];
				pos_min = j; 
			}
		}
		tmp = v[i];
		v[i] = min;
		v[pos_min] = tmp;
	}
}

int main(void) {
	int v[100];
	int i, n;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)  scanf("%d", &v[i]);
		//scanf("%d", v + i);
		
	bubble(v, n);

	for (i = 0; i < n; i++) printf("%d ", v[i]);
		
	printf("\n");	
}


