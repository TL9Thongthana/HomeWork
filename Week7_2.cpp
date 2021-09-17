//64010300
#include<stdio.h>
void right_triangle(int);
int main()
{
	int x;
	scanf("%d",&x);
	right_triangle(x);
	return 0;
}
void right_triangle(int n)
{
	for(int i=1;i<=n;++i)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			++j;
		}
		printf("\n");
	}
}
