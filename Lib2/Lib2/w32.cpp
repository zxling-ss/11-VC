
#include "stdafx.h"
#include "w32.h"

int pchar(int n)
{
	int a = 1;
	for (int i = 1; i <= n; i++)
		a = a*i;

	return a;
}
float nchar(float m)
{
	float b = (3.14 / 180) * m;

	return b;
}



