

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char  num = 0 ; 
    printf("Enter number  between 1 and 100 : \n");
    scanf("%c" , &num);
    printf("output is : \n ");
    for (int i = 1; i <= 100; i++)
    {
        if( i%num == 3 ) {
            printf("%i \n" , i);
        }
    }
    
    return 0;
}
