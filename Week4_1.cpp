//64010300
#include<stdio.h>
#include <math.h>
int main()
{
	float a,b,c,s;
	printf("First side : ");
	scanf("%f",&a);
	printf("Second side : ");
	scanf("%f",&b);
	printf("Third side : ");
	scanf("%f",&c);
	if(a>0&&b>0&&c>0)
	{
		s=(a+b+c)/2;
		printf("%.2f",sqrt(s*(s-a)*(s-b)*(s-c)));	
	}
	else
	{
		printf("Error");
	}
	return 0;
}
