//64010300
#include<stdio.h>
int main()
{
	float w,h,BMI;
	printf("Input Weight(kg.) : ");
	scanf("%f",&w);
	printf("Input Height(m.) : ");
	scanf("%f",&h);
	if(w>0&&h>0)
	{
		BMI=w/(h*h);
		if(BMI<18.5)
		{
			printf("Underweight range");
		}
		else if(18.5<=BMI&&BMI<=24.9)
		{
			printf("Normal range");
		}
		else if(25.0<=BMI&&BMI<=29.9)
		{
			printf("Overweight range");
		}
		else if(30.0<=BMI)
		{
			printf("Obese range");
		}
		else
		{
		printf("Error");
		}
		
	}
	else
	{
		printf("Error");
	}
	return 0;
}
