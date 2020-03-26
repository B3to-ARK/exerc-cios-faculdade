#include <stdio.h>
#include <math.h>

#define NUM 5
struct ponto {
	float x;
	float y;
};


int main(void) {
	int i;
	struct ponto p[NUM];
	float soma_dist = 0.0;
	for (i = 0; i < NUM; i++) scanf("%f %f", &p[1].x, &p[1].y);

	for (i = 0; i < NUM-1; i++) soma_dist += sqrt((p[i].x - p[NUM-1].x)*(p[i].x - p[1].x) + (p[i].y - p[NUM-1].y)*(p[i].y - p[NUM-1].y));
			
	printf("Soma das distancias: %f\n", soma_dist);
	
	return(0);
}
