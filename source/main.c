#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int o[SIZE] = { 15, 18, 4, 7, 10, 12, 89, 68, 99, 53 };
	int a[SIZE] = { 15, 18, 4, 7, 10, 12, 89, 68, 99, 53 };
	int b[SIZE] = { 15, 18, 4, 7, 10, 12, 89, 68, 99, 53 };
	int pass;
	int i;
	int hold;
	int counter = 0;
	int timea = 0, timeb = 0, timeo = 0;

	///Origin
	printf("\n\n(�������w)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", o[i]);
	}

	for (pass = 1; pass < SIZE; pass++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (o[i] > o[i + 1]) {
				hold = o[i];
				o[i] = o[i + 1];
				o[i + 1] = hold;
			}
			timeo++;   //�p�⦸��
		}
	}
	printf("\nData items is ascendind order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", o[i]);
	}


	///��a�D
	printf("\n\n(a)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}

	for (pass = 1; pass < SIZE; pass++) {
		for (i = 0; i < SIZE - pass; i++) {
			if (a[i] > a[i + 1]) {
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			timea++; //�p�⦸��

		}
	}

	printf("\nData items is ascendind order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}





	//��b�D

	printf("\n\n(b)\n\n");
	printf("Data items is origine order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", b[i]);
	}

	for (pass = 1; pass < SIZE; pass++) {
		counter = 0;
		for (i = 0; i < SIZE - 1; i++) {
			if (b[i] > b[i + 1]) {
				hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;
				counter++;
			}

			timeb++; //�p�⦸��
		}
		if (counter == 0) break;  //��L�Ʀr��ʮɸ��X
	}

	printf("\nData items is ascendind order\n");
	for (i = 0; i < SIZE; i++) {
		printf("%4d", b[i]);
	}

	printf("\n\n ��l����w����F%d���A(a)�@����F%d���A(b)�@����F%d��\n", timeo, timea, timeb);
	system("pause");
	return 0;
}
