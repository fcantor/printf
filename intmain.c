#include <stdio.h>
#include "holberton.h"

int main(void)
{
char *x;
int y;

	y = 123456;

	x = intostring(y);
	printf("%s\n", x);
	return(0);
}

