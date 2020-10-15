/*
	Author: AnOnYmOus001100
	Date: 15/10/2020
	Description: prints fahrenheit and its equivalent celsius, table
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
main()
 {
	int fahr, celsius;	// variable declaration
	int lower, upper, step;

	lower = 0;	/* lower limit of temperatue table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	fahr = lower;	// setting fahr to lower limit
	while (fahr <= upper) {		// loops as long as fahr is less than or equal to upper
	celsius = 5 * (fahr-32) / 9;	// conversion from fahrenheit to celsius
	printf("%d\t%d\n", fahr, celsius);	// print
	fahr = fahr + step;	// increment fahr by step
	}
}
