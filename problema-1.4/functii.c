#include<stdio.h>
#include"f.h"

int verif(int a, int b, int c)
{
	if((a+b)>c && (b+c)>a && (a+c)>b) return 1;
	else return 0;
}

int echi(int a, int b, int c)
{
	if(verif(a,b,c))
		if(a==b && a==c && b==c) return 1;
	return 0;
}

int iso(int a, int b, int c)
{
	if(verif(a,b,c))
		if(!echi(a,b,c))
			if(a==b || b==c || a==c) return 1;
	return 0;
}

int drept(int a, int b, int c)
{
	if(a*a==(b*b + c*c) || b*b==(a*a + c*c) || c*c==(a*a + b*b)) return 1;
	else return 0;
}
