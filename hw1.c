#include <stdio.h>
int main()
{
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	int num_and = num1 & num2;
	int num_or = num1 | num2;
	int num_xor = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, num_and);
	printf("%d | %d = %d \n", num1, num2, num_or);
	printf("%d ^ %d = %d \n", num1, num2, num_xor);
}