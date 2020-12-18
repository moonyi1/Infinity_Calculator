#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

char * input()
{
	char c, a[MAX], *p;
	int i;

	for (i = 0; (c = getchar()) != '\n'; ++i) {
		a[i] = c;
	}
	a[i] = '\0';
	p = a;

	return p;
}

/*
int main(void)
{
	char *p = input();

	printf("%s\n", p);

	return 0;
}
*/
