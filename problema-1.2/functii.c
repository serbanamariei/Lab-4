#include<stdio.h>
#include<math.h>
#include"f.h"

int mediaAritmetica(int a, int b, int c)
{
	return (a+b+c)/3;
}

int mediaGeometrica(int a, int b, int c)
{
	return sqrt(a*b*c);
}

int minim(int a, int b, int c)
{
	if(a<b)
		if(a<c)
			return a;
		else return c;
	else 
		if(b<c) return b;
		else return c;
}

int maxim(int a, int b, int c)
{
	if(a>b)
		if(a>c) return a;
		else return c;
	else
		if(b>c) return b;
		else return c;
}
