#include <math.h>
#include <stdio.h>
	
double compute_standard_deviation(double *n)
{
	double beforesqrt = 0, sum = 0;
	double average = (n[0]+n[1]+n[2]+n[3]+n[4])/5;
	int i;
	for (i = 0; i < 5; i++)
		sum += pow((n[i] - average), 2);
	beforesqrt = sum / 5;
	double standard_deviation = sqrt(beforesqrt);
	return standard_deviation;
}
int main()
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3lf",compute_standard_deviation(arr) );
	
	
	return 0;
}