#include<stdio.h>
int main()
{
	int year, leap;
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 != 0)
			leap = 1;
		else
			if (year % 400 == 0)
				leap = 1;
			else
			{
				leap = 0;
			}
		}
	else leap = 0;
	if (leap==1)
		printf("yes", year);
	else
		printf("no", year);

	
		return 0;
}