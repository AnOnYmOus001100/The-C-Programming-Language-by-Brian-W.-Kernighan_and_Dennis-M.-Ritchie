/*
        Author: AnOnYmOus001100
        Date: 15/10/2020
        Description: prints celsius and its equivalent fahrenheit, table
*/

#include <stdio.h>

/* print Celsius Fahrenheit table
for fahr = 0, 20, ..., 300; floating-point version */
        main()
        {
        float fahr, celsius;      // float variable declaration
        int lower, upper, step;   // int variable declaration

        lower = 0;      /* lower limit of temperatue table */
        upper = 150;    /* upper limit */
        step = 10;      /* step size */

        celsius = lower;   // setting celsius to lower limit
	printf("    C	  F\n");
        while (celsius <= upper) {         // loops as long as celsius is less than or equal to upper
        fahr = celsius*(9.0/5.0) + 32;    // conversion from celsius to fahrenheit
        printf("%6.1f %3.0f\n",celsius, fahr);      // print in float format, 3.0f means print fahr 3 characters wide  and 6.1f means to print celsius 6 characters wide with 1 digit after decimal point
        celsius = celsius + step;     // increment celsius by step
        }
}

