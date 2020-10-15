/*
	Author: AnOnYmOus001100
	Date: 15/10/2020
	Description: Print Fahrenheit-Celsius Table with for loop
*/

#include <stdio.h>
/* print Fahrenheit-Celsius table */
main( )
 {
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) // starts at 0 and loops until fahr is less than or equal to 300
	 printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); // printing
 }
