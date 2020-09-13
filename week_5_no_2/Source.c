#include <stdio.h>

void num(x,y, letter1, letter2) {
	if (x > y) {
		printf("%s\n%s", letter1, letter2);
	}
	if (y > x) {
		printf("%s\n%s", letter2, letter1);
	}
	if (x==y){
		printf("%s %s", letter1, letter2);
	}
}

int main() {
	char letter1[200];
	char letter2[200];
	scanf("%s", letter1);
	scanf("%s", letter2);
	int i, j ;
	char a, b;
	for (i = 0; letter1[i]; i++) {
		a = letter1[i];
	}
	for (j = 0; letter2[j]; j++) {
		b = letter2[j];
	}

	num(i, j, letter1, letter2);

}