#include<stdio.h>
#include"f.h"

int main()
{
	int a,b,c;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	if(echi(a,b,c)) printf("Triunghiul e echilateral\n");
	if(iso(a,b,c)) printf("Triunghiul e isoscel\n");
	if(drept(a,b,c)) printf("Triunghiul e dreptunghic\n");

	return 0;
}
