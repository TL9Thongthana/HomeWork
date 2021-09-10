//64010300
#include<stdio.h>
float Max(float x,float y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	float a,b,c,max,sum;
	printf("Input first number : ");
	scanf("%f",&a);	
	printf("Input second number : ");
	scanf("%f",&b);	
	printf("Input third number : ");
	scanf("%f",&c);	
	max=Max(Max(a,b),Max(b,c));
	sum=a+b+c-max;
	printf("MED+MIN = %.2f",sum);
	return 0;
}
