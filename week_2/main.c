#include <stdio.h>
#include "fun.h"


unsigned int numberToTest = 8;
int main(int argc, char const *argv[])
{
 


   unsigned int num =  factorial(numberToTest);
   printf("Factorial for number %i is : %i\n" , numberToTest , num);

   /*====================================================*/

  
   unsigned int myPrime = checkPrime(numberToTest);
   printf("Result of number %i is prime = %i\n" , numberToTest,myPrime);
    
   /*====================================================*/

  int powerNum = 5;
  int powerResult = calculatePower(numberToTest,powerNum);
  printf("Power %i to %i = %i\n" , numberToTest ,powerNum , powerResult );

   /*====================================================*/
   calculateFibonacci(numberToTest);
   /*====================================================*/
   int gcdNum = 4 ;
   int gcdResult = gcd(numberToTest ,gcdNum );
   printf("\nGCD Result of %i and %i is %i\n" , numberToTest , gcdNum , gcdResult);
   /*====================================================*/
    return 0;
}
