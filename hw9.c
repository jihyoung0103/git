#include <stdio.h>
#include <string.h>

typedef struct city
{
	char city_name[30];
	char city_country[30];
	unsigned int city_population;
} City;

void Clearbuffer(){
	while (getchar() != '\n');
}

int main()
{
	City arr[3] = { 0 };
	int i;
	printf("Input three cities\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name > "); fgets(arr[i].city_name, sizeof(arr[i].city_name), stdin); 
		arr[i].city_name[strlen(arr[i].city_name) - 1] = 0;
		printf("Country > "); fgets(arr[i].city_country, sizeof(arr[i].city_country), stdin);
		arr[i].city_country[strlen(arr[i].city_country) - 1] = 0;
		printf("Population > "); scanf("%d", &arr[i].city_population);
		Clearbuffer();
	}
	printf("\nPrinting the three cities.\n");
	for (i = 0; i < 3; i++) 
	{
		printf("%d. %s in %s with a population of %d people.\n", i + 1, arr[i].city_name, arr[i].city_country, arr[i].city_population);
	}
}