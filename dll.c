#include <stdio.h>
#include "dll.h"

MYDLL int soma(int x, int y)
{
	int total = x + y;
	return total;
}

MYDLL int sub(int x, int y)
{
	int total = x - y;
	return total;
}