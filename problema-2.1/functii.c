#include<stdio.h>
#include"f.h"

int cmmdc(int x, int y)
{
	int r;
	while(y)
	{
		r=x%y;
		x=y;
		y=r;
	}

	return x;
}

int prim(int x)
{
	int d;
	if(x==2) return 1;
	if(x%2==0) return 0;
	for(d=3;d*d<=x;++d)
	{
		if(x%d==0) return 0;
	}

	return 1;
}
