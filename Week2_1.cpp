//64010300
#include<stdio.h>
int main(){
	float Number1,Number2;
	char opt;
	printf("Input Number1 : ");
	scanf("%f",&Number1);
	printf("Input Number2 : ");
	scanf("%f",&Number2);
	printf("Input Arithmetic operators : ");
	scanf("%str",&opt);
		if(opt == '+')
		{
			printf("%.2f",Number1+Number2);	
		}
		else if(opt == '-')
		{
			printf("%.2f",Number1-Number2);	
		}
		else if(opt == '*')
		{
			printf("%.2f",Number1*Number2);	
		}
		else if(opt == '/')
		{
			printf("%.2f",Number1/Number2);	
		}
		else
		{
			printf("\nError");
		}
}
