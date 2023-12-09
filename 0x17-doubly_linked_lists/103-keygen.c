#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{
	char a[10],c[10];
	int i,j,k=0;
	while (k < 5 || k >=10)
	{
		if (k != 0)
			printf("username key\n");
	}

	i = k-1;
	j = 0;

	while (i >= 0)
	{
		c[j] = a[i]+i;
		i--;
		i++;
	}

	c[j] = 0;
	printf("\nusername: %s\n",c);
	printf("\nenter the exit\n");
}
