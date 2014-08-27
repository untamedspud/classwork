/*
 * -- Name:                 Sandy Student
 * -- Assignment Number:    2
 * -- Version:              1
 * -- Description:          This program is a driver to test the function
 *                                  obtain_restaurant( )
 *                          provided in class for lab assignment 4.
 * -- Date:                 January 30, 2013
 * -- Class:                CIS 1057 Spring 2013 Section 004
 * -- Instructors:          Ray Lauff / AJ Shields
 * -- File Name:            lab2.c
 * -- Functions:            none.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PROGRAMMER_NAME "Sandy Student"

int main( void )
{
    int start = 500;
    int end   = 625;
    
    printf( "This program was written by %s.", PROGRAMMER_NAME);

    printf( "%d %d\n", end, start );
    printf( "There are %d steps to consider.\n", end - start);

    return EXIT_SUCCESS;
}