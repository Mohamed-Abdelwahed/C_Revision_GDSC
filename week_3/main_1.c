#include <stdio.h>
#define MAX_LENGTH 10
int calculat_reapeting[MAX_LENGTH];

int main()
{
    int arr_num[7];

    for (int i = 0; i < 7; i++)
    {   printf("Enter number %i : " , i);
        scanf("%d" , &arr_num[i]);
       calculat_reapeting[arr_num[i]]++;

    }


    printf("The Repeating elements are : ");

    for (int i = MAX_LENGTH -1; i > 0 ; i--)
    {
        if (calculat_reapeting[i] == 2)
        {
            printf("%i " , i);
        }    
    }
    
    

   
        
    
    
    


    return 0;
}
