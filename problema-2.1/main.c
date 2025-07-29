#include<stdio.h>
#include"f.h"

int main()
{
	int x,y;
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	printf("cmmdc(%d, %d) = %d\n",x,y,cmmdc(x,y));
	if(!prim(cmmdc(x,y)))
		printf("cel mai mic divizor comun NU este prim\n");
	else
		printf("cel mai mic divizor comun este prim\n");
	return 0;
}
