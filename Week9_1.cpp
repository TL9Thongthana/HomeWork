//64010300
#include<stdio.h>
#include<string.h>
int main()
{
	int i,d,No_U=0,No_l=0;
	char n[10000],c;
	printf("Input String : ");
	scanf("%s",n);
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
	
	return 0;
}
