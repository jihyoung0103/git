#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the num1, num2: ");
	scanf("%d %d", &num1, &num2);
	int num_and = num1 & num2;
	int num_or = num1 | num2;
	int num_xor = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, num_and);
	printf("%d | %d = %d \n", num1, num2, num_or);
	printf("%d ^ %d = %d \n", num1, num2, num_xor);
}
