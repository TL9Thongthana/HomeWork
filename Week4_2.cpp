//64010300
//เปลี่ยนโจทย์เป็น
//จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่าตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจำนวนเฉพาะหรือไม่ เมื่อแสดงผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทำงาน (Level 2)
#include<stdio.h>
int main()
{
	int n,i=2,k;
	printf("Input Number : ");
	scanf("%d",&n);
	while(n!=-99)
	{
		i=2;
		while(i<=n&&n%i!=0)
		{
			i=i+1;
		}
		if(n==i)
		{
			k=1;
		}
		else
		{
			k=0;
		}

		if(k==1)
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
	return 0;
}
