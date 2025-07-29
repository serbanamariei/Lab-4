#include<stdio.h>
#include"f.h"

int main()
{
	int x,y;
	printf("Introduceti intervalul [x, y]:\n");
	printf("x = "); scanf("%d",&x);
	printf("y = "); scanf("%d",&y);

	for(int a=x;a<=y;++a)
	{
		if(tip(a)==-1) printf("nr %d este deficient\n",a);
		else if(tip(a)==0) printf("nr %d este perfect\n",a);
		else printf("nr %d este abundent\n",a);
	}

	return 0;
}
