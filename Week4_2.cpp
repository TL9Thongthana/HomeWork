//64010300
#include<stdio.h>
#include <math.h>
float Area(float a,float b,float c)
{	
	float s,A;
	s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
	float a,b,c;
	printf("First side : ");
	scanf("%f",&a);
	printf("Second side : ");
	scanf("%f",&b);
	printf("Third side : ");
	scanf("%f",&c);
	if(a>0&&b>0&&c>0)
	{
		printf("%.2f",Area(a,b,c));		
	}
	else
	{
		printf("Error");
	}
	return 0;
}
