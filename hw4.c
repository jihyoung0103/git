#include <stdio.h>
int DtoB(int num)
{
	if (num > 0)
	{
		DtoB(num / 2);
		printf("%d", num % 2);
	}
}
int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	DtoB(num);
	return 0;
}