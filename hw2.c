#include <stdio.h>

main()
{
	float kilo, mile = 0;
	printf("Please enter kilometers: ");
	scanf("%f", &kilo);
	mile = kilo / 1.609;
	printf("%.1f km is eqaul to %.1f miles.\n", kilo, mile);

	return 0;
}