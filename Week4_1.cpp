//64010300
//เปลี่ยนโจทย์เป็น
//จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่าตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจำนวนเฉพาะหรือไม่ เมื่อแสดงผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทำงาน (Level 2)
#include<stdio.h>
int isPrime(int);
int main()
{
	int n;
	printf("Input Number : ");
	scanf("%d",&n);
	while(isPrime(n)==1||isPrime(n)==0)
	{
		if(n!=-99)
		{
			if(isPrime(n)==1)
			{
				printf("Prime Number\n\n");
			}
			else
			{
				printf("Not Prime Number\n\n");	
			}	
			printf("Input New Number : ");
			scanf("%d",&n);
		}
		else
		{
			return 0;
		}
	}
}
int isPrime(int x)
{
	int i=2;
	while(i<=x&&x%i!=0)
	{
		i=i+1;
	}
	if(x==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
