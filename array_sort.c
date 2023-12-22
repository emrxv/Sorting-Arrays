/** file array_sort.c
 * @author Emre Sunar
 *
 * Functions for sorting arrays, producing random integers, and randomized arrays
 */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include "array_sort.h"
#include "print_arrays.h"

/**Create a random number from 0 to a specified maximum
 * @param max_rand which is the maximum a random number can be
 * @return x which is a random number from 0 to the max value inclusive
 */
 int int_rand(int max_rand) {
 

  int x = (rand() % max_rand) + 1;
  
  return x;

}
 
 /**Fills the array with randomized integers
 * @param array that is being filled
 * @param max_rand max value that the integer can be
 * @param num_rands Number of random values
 */
void rand_fill(int array[], int max_rand, int num_rands) {
 int i; //Loop counter

  srand(time(NULL));

 for (i = 0; i < num_rands; i++) {
    array[i] = int_rand(max_rand);
  }
}

/** Function that sorts the arrays
 * @param array that is being sorted
 * @param array_size size of the array
 */
void array_sort(double array[], int array_size) {

  double temp;
  int step, i;

  for (step = 0; step < array_size - 1; step++) {
    for (i = 0; i < array_size - step - 1; i++) {
      if (array[i] > array[i + 1]) {
      
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }  
    }    
  }
  
  printf("Sorted array of doubles:\n");
  print_double_array(array, array_size);
}

/** Function that sorts the arrays
 * @param array that is being sorted
 * @param array_size size of the array
 */
void array_sort_int(int array[], int array_size) {

  int temp;
  int step, i;

  for (step = 0; step < array_size - 1; step++) {
    for (i = 0; i < array_size - step - 1; i++) {
      if (array[i] > array[i + 1]) {
      
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }  
    }    
  }
  
 
}

