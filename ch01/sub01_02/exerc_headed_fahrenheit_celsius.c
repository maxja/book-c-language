#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main() {
	float fahrenheit, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	printf("fahr\t|\tcels\n----------------------\n"); /* heading */
	fahrenheit = lower;
	while(fahrenheit <= upper) {
		celsius = (5.0/9.0) * (fahrenheit - 32.0);
		printf("%3.0f\t|\t%6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
}
