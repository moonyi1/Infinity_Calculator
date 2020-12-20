#include <stdio.h>
#include <stdlib.h>

char * input(char* ar)
{
	char	c, *p;
	int	i;
	FILE	*ifp;

	ifp = fopen(ar, "r");
	for (i = 0; (c = getc(ifp)) != EOF; i++) { }
	
	p = malloc(sizeof(char) * (i + 1));
	rewind(ifp);
	
	for (i = 0; (c = getc(ifp)) != EOF; i++) {
		p[i] = c;
	}
	
	p[i++] = '\0';
	return p;
}

/*
int main(void)
{
	char *p;
	p = input("test.txt");
	printf("%s", p);
}
*/
