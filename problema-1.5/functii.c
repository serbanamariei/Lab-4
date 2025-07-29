#include<stdio.h>
#include<math.h>
#include"f.h"

int f(int x)
{
	if(x<=2) return x^2+3*x+5;
	else
	if(x<8) return 3*x;
	else return pow(2,x)+2;
}

int g(int x, int y)
{
	return 3*x^2+(int)sin(x)/(int)pow(y,1/4);
}
