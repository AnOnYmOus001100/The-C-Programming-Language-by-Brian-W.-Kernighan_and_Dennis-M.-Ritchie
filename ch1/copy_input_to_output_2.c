/*
        Author: AnOnYmOus001100
        Date: 15/10/2020
        Description: copies its input to its output one character at a time
*/

#include <stdio.h>
/* copy input to output; 2nd version */
main( )
{
        int c;  // c is taken as int instead of char to distinguish end of input from valid data, here getchar returns a distinctive value when there is no more input, a value that cannot be confused with character, this cvalue if called EOF for "end of file", c must be big enough to hold any value that getchar returns, so char cannot be used, so int is used
        // getchar reads next input character from a text stream, character is internally stored as a pattern
        while ((c = getchar()) != EOF)// loop runs till c not equals to  end of file
        putchar(c);     // prints a character each time it is called, prints the contents of the integer variable as character
}
