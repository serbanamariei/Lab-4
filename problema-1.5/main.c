#include<stdio.h>
#include"f.h"

int main()
{
	int x,y;
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);
	printf("f(%d) = %d\n",x,f(x));
	printf("g(%d, %d) = %d\n",x,y,g(x,y));

	return 0;
}
