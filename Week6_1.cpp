//64010300
#include<stdio.h>
int main()
{
	float a,b,c,med,min;
	printf("Input first number : ");
	scanf("%f",&a);	
	printf("Input second number : ");
	scanf("%f",&b);	
	printf("Input third number : ");
	scanf("%f",&c);	
	if(a>b&&a>c)
	{
		if(b>c)
		{
			med=b;
			min=c;
		}
		else
		{
			med=c;
			min=b;
		}
	}
	else if(a>b)
	{	
		med=a;
		min=b;	
	}
	else if(a>c)
	{	
		med=a;
		min=c;
	}
	else
	{
		if(b>c)
		{
			med=c;
			min=a;
		}
		else
		{
			med=b;
			min=a;	
		}
	}
	printf("MED+MIN = %.2f",med+min);
	return 0;
}
