#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int i;

	printf("Input >> ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; i < strlen(str); i++)
	{
		const int diff = 'a' - 'A';
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else
			str[i] = str[i];
	}
	printf("Output >> "); fputs(str, stdout);
	return 0;
}