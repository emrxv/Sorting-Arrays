/** file print_arrays.c
 * @author Emre Sunar
 *
 * Functions for printing arrays.
 */

#include <stdio.h>
#include <stdlib.h> 
#include "print_arrays.h"

/** Store doubles into an array
    @param b[] an array of doubles
    @param array_size the max size of the array
    @param argc number of entries into the array
    @param argv keyboard entries into the array
*/
void store_floats(double b[], int array_size, int argc, char* argv[]) {
  int i; // Loop counter
  if (argc < 2) {
    printf("Please enter values after the command.\n");
  }
  for (i = 1; i < argc && i <= array_size; i++) {
    b[i-1] = atof(argv[i]);
  }
  if (argc - 1 > array_size) {
    printf("The array can only hold %d values. \n", array_size);
  }
}

/** Print an array of ints, one per line.
    @param a Array to print
    @param num_entries Number of entries in the array
*/
void print_int_array(int a[], int num_entries) {

  int i; // Loop counter
  

  
  for (i = 0; i < num_entries; i++) {
    printf("%d\n", a[i]);
  }
}

/** Print an array of doubles, one per line.
    @param a Array to print
    @param num_entries Number of entries in the array
*/
void print_double_array(double b[], int num_entries) {

  int i; // Loop counter

  for (i = 0; i < num_entries; i++) {
    printf("%0.3f\n", b[i]);
  }
}


