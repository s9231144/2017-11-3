
#include <stdlib.h>
#include <stdio.h>

void qq(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("���ʺФl��%c �� %c\n", A, C);
	}
	else
	{
		qq(n - 1, A, C, B);
		qq(1, A, B, C);
		qq(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	printf("�п�J�L�ơG");
	scanf_s("%d", &n);
	qq(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}