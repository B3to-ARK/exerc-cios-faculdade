#include <stdio.h>
struct ponto {
	int x;
	int y;
};

int main(void) {
	struct ponto p0, p1;

	p0.x = 0;
	p0.y = 1;

	p1.x = 1;
	p1.y = 0;

	p0.x = p0.x + p1.x;
	p0.y = p0.y + p1.y;

	printf("(%d, %d)\n", p0.x, p0.y);

	return(0);
}
