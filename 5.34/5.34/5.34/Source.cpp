#include<stdio.h>
#include<stdlib.h>
#include<iostream> 
#include<conio.h> 
int qq(int a, int b)
{
	int c;

	if (b == 0)
	{
		return (1);
	}
		
	else
	{
		c = a*qq(a, b - 1);
		return (c);
	}
		
}
int main(void)
{
	int a,b,c;
	printf("請輸入底數:");
	scanf_s("%d", &a);
	printf("請輸入指數:");
	scanf_s("%d", &b);
	if (b == 0)
	{
		c = 1;
	}
	else
	{
		c = qq(a, b);
	}
		
	printf("%d\n",c);
	
	system("pause");
}
