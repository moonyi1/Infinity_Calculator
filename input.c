#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

char * input(char* ar)
{
	char	c, a[MAX], *p;
	int		i;
	FILE	*ifp;

	ifp = fopen(ar, "r");
	for (i = 0; (c = getc(ifp)) != EOF; ++i) {
		a[i] = c;
	}
	a[i] = '\0';
	p = a;

	return p;
}