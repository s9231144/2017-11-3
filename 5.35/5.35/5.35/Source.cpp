# include <stdlib.h>
# include <stdio.h>

int main(){

	int a, i, b = 0, c = 1, d;

	while (1){

		
		printf("�п�J�n�p�⪺�Ӽ�:");
		scanf_s("%d", &a);
	

		if (a == 0)
			d = b;

		else if (a == 1)
			d = c;

		else{

			for (i = 2; i <= a; i++) {
				d = b + c;
				b = c;
				c = d;
			}

			b = 0;
			c = 1;

		}

		printf("%d\n", d);

		
	

	}

	return 0;

}