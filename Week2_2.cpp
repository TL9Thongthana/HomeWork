//64010300
#include<stdio.h>
int main(){
	float Number[1];
	char opt;
	printf("Input Number1 : ");
	scanf("%f",&Number[0]);
	printf("Input Number2 : ");
	scanf("%f",&Number[1]);
	printf("Input Arithmetic operators : ");
	scanf("%str",&opt);
	switch (opt)
	{
		case '+':
			printf("%.2f",Number[0]+Number[1]);
			break;
		case '-':
			printf("%.2f",Number[0]-Number[1]);
			break;
		case '*':
			printf("%.2f",Number[0]*Number[1]);
			break;
		case '/':
			printf("%.2f",Number[0]/Number[1]);
			break;
		default:
			printf("\nError");
			break;
	}
}
