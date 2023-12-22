/** file at2.c
 * @author Emre Sunar
 *
 * Program to produce randomized arrays in C.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include "print_arrays.h"
#include "array_sort.h"


/** Main program for demonstrating arrays. It fills them with random numbers, prints them, sorts them, and then prints them again.
 * @param argc number of values entered by the user plus one
 * @param argv[] user input.
 * @return 0, Indicating success.
 */
int main(int argc, char* argv[]) {
  if (argc != 3) { 
  printf("This function can only take 2 inputs: the maximum size of each random integer, and the number of random integers respectfully.\n"); 
  }  
  
  int max_rand = atoi (argv[1]); 
  int num_rands = atoi (argv[2]); 
  int array[num_rands];

  rand_fill(array, max_rand, num_rands);
  
  printf("Array of random unsorted integers:\n");
  print_int_array(array, num_rands);

  array_sort_int(array, num_rands);
  
  printf("Array of random sorted integers:\n");
  print_int_array(array, num_rands);
  
  return 0; // Success!
}
