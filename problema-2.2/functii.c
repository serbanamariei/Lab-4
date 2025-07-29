#include<stdio.h>
#include"f.h"

int sumaDiv(int x)
{
	int d,s=0;
	for(d=1;d<x;++d)
	{
		if(x%d==0) s+=d;
	}

	return s;
}

int prietene(int x, int y)
{
	int sumaX=sumaDiv(x),sumaY=sumaDiv(y);

	if(sumaX==y && sumaY==x) return 1;
	return 0i;
}
