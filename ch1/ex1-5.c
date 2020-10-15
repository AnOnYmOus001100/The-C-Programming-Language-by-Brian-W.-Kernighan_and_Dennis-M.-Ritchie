/*
        Author: AnOnYmOus001100
        Date: 15/10/2020
        Description: Print Fahrenheit-Celsius Table with for loop in reverse order from 300 degrees to 0
*/

#include <stdio.h>
/* print Fahrenheit-Celsius table */
main( )
 {
        int fahr;
        for (fahr = 300; fahr >= 0; fahr = fahr - 20) // starts at 300 and loops until fahr is greater than or equal to 300
         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); // printing
 } 
