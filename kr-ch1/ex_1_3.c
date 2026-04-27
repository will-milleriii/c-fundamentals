#include <stdio.h>

void celsiusConversion(void);
void fahrConversion(void);

int main(void)
{
	fahrConversion();	
	celsiusConversion();
	return 0;
}

void fahrConversion(void)
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("%3s %6s\n\n", "Fahr", "Celsius");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
}

void celsiusConversion(void)
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 100;
	step = 5;
	celsius = lower;
	
	printf("%7s %3s\n\n", "Celsius", "Fahr");
	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

}
