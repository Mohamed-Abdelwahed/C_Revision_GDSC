
#include<stdio.h>
#define MAx_LENGTH 3
int main()
{
    int arr[MAx_LENGTH];

    for (int i = 0; i < MAx_LENGTH; i++)
    {
        printf("Enter Elemnt of %i element : " , i+1);
        scanf("%d" , &arr[i]);
    }

    printf("The value before swapping are :\n");
     for (int i = 0; i < MAx_LENGTH; i++)
    {
        printf("Elemnt %i  : %d\n" , i+1 , arr[i]);  
    }

     for (int i = 0; i < MAx_LENGTH/2; i++)
    {
        int temp = 0;
        
        temp = arr[i];
        arr[i] =  arr[MAx_LENGTH-i-1] ;
        arr[MAx_LENGTH-i-1] = temp;
    }

printf("The value after swapping are :\n");
     for (int i = 0; i < MAx_LENGTH; i++)
    {
        printf("Elemnt %i  : %d\n" , i+1 , arr[i]);  
    }


    
    
    return 0;
}
