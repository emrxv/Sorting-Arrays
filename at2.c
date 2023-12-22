/** file at2.c
 * @author Emre Sunar
 *
 * Program to demonstrate fixed-size arrays in C.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include "print_arrays.h"
#include "array_sort.h"

#define SAMPLE_INT_ARRAY_SIZE (10)
#define SAMPLE_DOUBLE_ARRAY_SIZE (10)

/** Main program for demonstrating arrays. It fills them and prints them.
 * @param argc number of values entered by the user plus one
 * @param argv[] user input.
 * @return 0, Indicating success.
 */
int main(int argc, char* argv[]) {
  int i; // Loop counter
  int a[SAMPLE_INT_ARRAY_SIZE]; // Sample array for demonstration
  double b[SAMPLE_DOUBLE_ARRAY_SIZE];
  int num_entries = argc - 1;
  
    // Fill the array with consecutive integers
  for (i = 0; i < SAMPLE_INT_ARRAY_SIZE; i++) {
    a[i] = i;
  }

  // Now print it out
  store_floats(b, SAMPLE_DOUBLE_ARRAY_SIZE, argc, argv);
  printf("Array of integers:\n");
  print_int_array(a, SAMPLE_INT_ARRAY_SIZE);
  printf("Unsorted array of doubles:\n");
  print_double_array(b, num_entries);
  array_sort(b, num_entries);
  
  return 0; // Success!
}
