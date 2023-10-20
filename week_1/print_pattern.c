#include<stdio.h>


int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= (6-i); j++)
        {
            printf("%i " , j);
        }
        printf("\n");
        
    }





printf("\n==================\n");




    /*=========================================*/
    int k = 0;
    for (int i = 1; i <= 5; ++i, k = 0) {
      for (int j = 1; j <= (5 - i); ++j) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
    


/*===============================*/
k = 1;
printf("\n==================\n");
for (int i = 1; i <= 5; i++)   
    {  
        for (int j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }  

    
    return 0;
}
