#include <stdio.h>
int main()
{
	int arr[5];
	int i = 0;
	printf("5���� ������ �Է��ϼ���. ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Ȧ�� ���: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
	printf("\n¦�� ���: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	return 0;
}