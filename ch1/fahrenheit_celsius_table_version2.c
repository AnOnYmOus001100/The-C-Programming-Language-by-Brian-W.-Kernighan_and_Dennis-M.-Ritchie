/*
        Author: AnOnYmOus001100
        Date: 15/10/2020
        Description: prints fahrenheit and its equivalent celsius, table
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
	main()
	{
        float fahr, celsius;      // float variable declaration
        int lower, upper, step;	  // int variable declaration

        lower = 0;      /* lower limit of temperatue table */
        upper = 300;    /* upper limit */
        step = 20;      /* step size */
        
	fahr = lower;   // setting fahr to lower limit
        while (fahr <= upper) {         // loops as long as fahr is less than or equal to upper
        celsius = (5.0/9.0) * (fahr-32.0);    // conversion from fahrenheit to celsius
        printf("%3.0f %6.1f\n", fahr, celsius);      // print in float format, 3.0f means print fahr 3 characters wide  and 6.1f means to print celsius 6 characters wide with 1 digit after decimal point
        fahr = fahr + step;     // increment fahr by step
        }
}

