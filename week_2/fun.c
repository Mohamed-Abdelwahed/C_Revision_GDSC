#include <stdio.h>
#include "fun.h"

unsigned int factorial(unsigned int n)
{
    if (n == 1) {
      return 1;
    }
   
    return n * factorial(n - 1);
}

/**=====================================================*/
int checkPrime(int N) 
{ 
    
    int flag = 1; 
    for (int i = 2; i <= N / 2; i++) { 
        if (N % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag) return 1;
    else return 0;
} 

/**=============================================*/
unsigned int calculatePower(int num , int power){
    long long result = 1 ;
    for (int i = 1; i <= power; i++)
    {
        result *= num; 
    }


    return result;
    
}
/**=============================================*/
void calculateFibonacci(int n) 
{ 
    int f1 = 0, f2 = 1, i; 
  
    if (n < 1) 
        return; 
    printf("%d ", f1); 
    for (i = 1; i < n; i++) { 
        printf("%d ", f2); 
        int next = f1 + f2; 
        f1 = f2; 
        f2 = next; 
    } 
}
/**=============================================*/
int gcd(int a, int b) 
{ 
    
    int result = ((a < b) ? a : b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    return result; 
} 
/**=============================================*/