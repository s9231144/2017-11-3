#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
	
	char a,b;

	scanf_s("%c", &a);
	if (a <= 90)
	{
		b = a + 32;
	}
	else
	{
		b = a - 32;
	}
	
	printf("%c\n", b);


	system("pause");
}