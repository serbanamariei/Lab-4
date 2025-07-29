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

int tip(int x)
{
	if(sumaDiv(x)<x) return -1;
	else if(sumaDiv(x)==x) return 0;
	else return 1;
}
