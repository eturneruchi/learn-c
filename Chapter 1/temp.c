#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr=0, 20, ..., 300';
floating-point version*/

main()
{
float fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;
printf("Table of C to F conversions\n");
celsius = lower;
while (celsius <= upper) {
fahr = (5.0 / 9.0) * (celsius) + 32.0;
printf("%3f %6f\n", celsius, fahr);
celsius = celsius + step;
}
}
