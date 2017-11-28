#include <stdio.h>

/*
 *  If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 *  we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 *  Find the sum of all the multiples of 3 or 5 below 1000.
 */

int main(int argc, char *argv[]) {
  // Let's start off with their example in the description. 
  int example_sum = 0;
  for (int i=0; i < 10; i++) { 
    if (i % 3 == 0 || i % 5 == 0)
      example_sum += i;
  } 

  printf("Sum of multiples of 3 or 5 less than 10 is %d!\n", example_sum);

  // Onto the real question
  int sum = 0;
  for (int i=0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) 
      sum += i;
  }

  printf("Sum of all multiples of 3 and 5 less than 1000 is %d!\n", sum);

  return 0;
}
