#include <stdio.h>
void remove_vogal(char str[]) {
	int i = 0, j;

	while (str[i] != 0) {
		if (str[i] == 'a' || str[i] == 'e' ||	str[i] == 'i' || str[i] == 'o'|| str[i] == 'u') {
			j = i;	
			while (str[j] != 0) {
				str[j] = str[j+1];
				j++;
			}
		} else i++;
	}
}

int main(void) {
	char str[]="universidade";
	
	remove_vogal(str);

	printf("%s\n", str);

	return(0);	
}

