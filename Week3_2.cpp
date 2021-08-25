//64010300
#include<stdio.h>
float BMI(float w,float h)
{
	return w/(h*h);
}
int main()
{
	float w,h,result;
	printf("Input Weight(kg.) : ");
	scanf("%f",&w);
	printf("Input Height(m.) : ");
	scanf("%f",&h);
	result = BMI(w,h);
	if(result>=30.0)
	{
		printf("Obese range");
	}
	else if(result>=25)
	{
		printf("Overweight range");
	}
	else if(result>=18.5)
	{
		printf("Normal range");
	}
	else if(result>0)
	{
		printf("Underweight range");
	}
	else
	{
		printf("Error");
	}	
	return 0;
}
