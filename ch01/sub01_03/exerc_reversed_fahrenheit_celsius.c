#include <stdio.h>

/* print Fahrenheit-Celsius table backward */
main() {
	int fahrenheit;

	for(fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20) {
		printf("%3d\t%6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32));
	}
}
