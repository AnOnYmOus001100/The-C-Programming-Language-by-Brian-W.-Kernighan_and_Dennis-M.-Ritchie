/*
	Author: AnOnYmOus001100
	Date: 15/10/2020
	Description: count the number of characters input
*/

#include <stdio.h>
/* count characters on input; 1st version */
main( )
{
	long nc;	// long int
	nc = 0;	// initialising nc to 0
	while (getchar() != EOF)     // loop till not equal end of file
	++nc;	// increasing the value of nc by 1
	printf ("%ld\n", nc) ;	// printin value of nc
}
