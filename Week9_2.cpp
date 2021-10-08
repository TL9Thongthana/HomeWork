//64010300
#include<stdio.h>
#include<string.h>
void find(char* n)
{
	int i,c,No_U=0,No_l=0;
	for(i=0;i<strlen(n);++i)
	{
		c=n[i];
		if(c>=65&&c<=90)
		{
			No_U=No_U+1;
		}
		else if(c>=97&&c<=122)
		{
			No_l=No_l+1;
		}
	}
	printf("Upper = %d \nlower = %d",No_U,No_l);
}
int main()
{
	char n[10000];
	printf("Input String : ");
	scanf("%s",n);
	find(n);	
	
	return 0;
}
