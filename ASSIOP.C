#include<stdio.h>
#include<conio.h>
void main()
{
int d=20,t=30;

clrscr();
	   d+=5;
	   printf("%d\n",d);

	   t-=3;
	   printf("%d\n",t);

	   d*=2;
	   printf("%d\n",d);

	   t/=3;
	   printf("%d\n",t);

	   // d%=2;
	   // printf("%d\n",d);
	   t&=d;
	   printf("\n%d",d);

	   d^=4;
	   printf("\n%d",d);

	   t|=3;
	   printf("\n%d",t);
getch();
}