#include<stdio.h>
int main()
{
	int a, b, c, i, sum[10]{};
	scanf_s("%d",&a);
	b = a;
	for ( i = 0;a!=0; i++)
	{
		sum[i] = a % 10;
		a = a / 10;
	}
	for (i=0,c=0;sum[i] != 0; i++)
	{
		c = (c + sum[i]) * 10;
	}
	c = c / 10;
	if(c==b)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}