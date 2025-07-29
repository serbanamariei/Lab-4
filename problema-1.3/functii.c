#include<stdio.h>
#include"f.h"

int suma()
{
	int s=0;
	int x;
	printf("x = ");
	scanf("%d",&x);
	while(x)
	{
		s+=x;
		printf("x = ");
		scanf("%d",&x);
	}

	return s;
}

void afisare(int a)
{
	printf("Suma numerelor din sir: %d\n",a);
}

double rezultat(int s, int y)
{
	return (double)(s%y);
}

void f1()
{
	int s=suma();
	afisare(s);
	int y;
	printf("y = ");
	scanf("%d",&y);
	printf("Restul impartirii lui s la y este %.2lf\n",rezultat(s,y));
}
