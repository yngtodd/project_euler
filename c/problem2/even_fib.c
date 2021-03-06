#include <stdio.h>
#include <stdlib.h>

/*
 *  Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
 *  By starting with 1 and 2, the first 10 terms will be:
 *
 *  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 *  By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
 *  find the sum of the even-valued terms.
 */

int fib(int n) {
  /* Declare an array to store Fibonacci numbers. */
  int f[n+1];
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++) {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}

int main() {
  int sum = 0;
  int fib_val = 0;
  fib_val = fib(100);
  for (int i=0; i<101; i++) {
    if (i % 2 == 0) {
      sum += i;
    }
  }
  
  printf("Sum of even Fibonacci numbers less than one hundred is %d.\n", sum);
  //printf("Sum of the even Fibonnaci numbers less than four billion is %d.", sum * 4000000); 
  return 0;
} 
