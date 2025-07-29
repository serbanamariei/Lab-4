#include<stdio.h>
#include"f.h"

int main()
{
	int x,y;
	printf("Introduceti intervalul [x, y]:\n");
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	printf("Numerele prietene din intervalul [%d, %d]:\n",x,y);
	for(int a=x;a<=y-1;++a)
		for(int b=a+1;b<=y;++b)
			if(prietene(a,b)) printf("(%d, %d), ",a,b);

	return 0;
}
