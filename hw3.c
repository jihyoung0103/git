#include <stdio.h>
int main()
{
	int i, n = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
	if (i == n)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}