/*
        Author: AnOnYmOus001100
        Date: 15/10/2020
        Description: count the number of characters input
*/

#include <stdio.h>
/* count characters on input; 2nd version */
main( )
{
        double nc;        // double nc declared
        // initialising nc to 0
        for (nc = 0; getchar() != EOF; ++nc);     // loop till not equal end of file
  	// increasing the value of nc by 1
        printf ("%.0f\n", nc) ;  // printin value of nc
}
