/* C Program - Find Largest of Two Numbers */
		
#include<stdio.h>
void big()
{
//	clrscr();
	int a, b, big;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	printf("Biggest of the two number is %d\n",big);
//	getch();
}


