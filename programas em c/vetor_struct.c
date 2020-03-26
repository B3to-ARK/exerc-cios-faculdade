#include <stdio.h>
#include <math.h>

#define NUM 2
struct ponto {
	float x;
	float y;
};

int main(void) {
	struct ponto p[NUM];
	float dist;

	scanf("%f %f", &p[0].x, &p[0].y);
	scanf("%f %f", &p[1].x, &p[1].y);
	printf("(%f, %f) (%f, %f)\n", p[0].x, p[0].y, p[1].x, p[1].y);

	dist = sqrt((p[0].x - p[1].x)*(p[0].x - p[1].x) + (p[0].y - p[1].y)*(p[0].y - p[1].y));
		
	printf("Distancia: %f\n", dist);

	return(0);
}
