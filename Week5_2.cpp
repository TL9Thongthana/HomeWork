//64010300
#include<stdio.h>
int main()
{
	int n[3],max,i=1;
	printf("Input first number : ");
	scanf("%d",&n[1]);	
	printf("Input second number : ");
	scanf("%d",&n[2]);	
	printf("Input third number : ");
	scanf("%d",&n[3]);
	max=n[1];	
	for(i=2;i<=3;++i)
	{
		if(max>n[i])
		{
			max=max;
		}
		else
		{
			max=n[i];
		}
	}
	printf("Maximum number is %d",max);
	
	
	
	return 0;
}
