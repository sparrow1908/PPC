#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

unsigned long fact(unsigned char a) {
	if (a == 1 || a == 0) return 1;
	unsigned long b = fact(a - 1);
	return a * b;
}

int main (int argc, char* argv[]) {
	unsigned char x = 0;
	if (argc == 1) {
		printf("Enter the number you want a factorial of_ ");
		scanf("%hhu", &x);
		while (scanf("%hhu", &x) != 1 || x < 1 || x > 20) {
			printf("It must be a positive whole number less than 21_ ");
			__fpurge(stdin);
		}
	}
	else if (argc == 2) {
		x = atoi(argv[1]);
		if (x < 1 || x > 20) {
			printf("The program accepts only a whole positive number less than 21\n");
			return 0;
		}
	}
	else {
		printf("The program accepts only 1 argument - a whole positive number less than 21\n");
		return 0;
	}
	printf("%u! = %lu\n", x, fact(x));
	return 0;
}
