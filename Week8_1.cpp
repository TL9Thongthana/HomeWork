//64010300
#include<stdio.h>
#include<string.h>
int main()
{
	int i,d;
	char n[10000],c;
	printf("Input String : ");
	scanf("%s",n);
	for(i=0;i<strlen(n);++i)
	{
		c=n[i];
		if(c>=65&&c<=90)
		{
			d=c+32;
			printf("%c",d);
		}
		else if(c>=97&&c<=122)
		{
			d=c-32;
			printf("%c",d);
		}
		else
		{
			printf("%c",c);
		}
	}	
	
	return 0;
}
