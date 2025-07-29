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

	int ma,mg,mini,maxi;
	ma=mediaAritmetica(a,b,c);
	mg=mediaGeometrica(a,b,c);
	mini=minim(a,b,c);
	maxi=maxim(a,b,c);

	printf("Media aritmetica: %d\n",ma);
	printf("Media geometrica: %d\n",mg);
	printf("Minimul: %d\n",mini);
	printf("Maximul: %d\n",maxi);

	return 0;
}
