//64010300
#include<stdio.h>
#include<string.h>
void change(char* n)
{
	int i,d,c;
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
}
int main()
{
	int k;
	char n[10000];
	printf("Input String : ");
	scanf("%s",n);
	change(n);	
	
	return 0;
}
