#include <stdio.h>
#define MAX_LENGTH 10

int arr[MAX_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(int argc, char const *argv[])
{
    int head = 0;
    int tail = MAX_LENGTH - 1;
    int middle = (head + tail) / 2;

    int num_to_find = 0;

    printf("Enter number to search : ");

    scanf("%d", &num_to_find);

    int flag = 1;
    while (flag)
    {
        if (num_to_find == arr[head])
        {
            printf("number ( %i ) foundedd in index ==> %i \n", num_to_find, head);
            flag = 0;
        }
        else if (num_to_find == arr[tail])
        {
            printf("number ( %i ) foundedd in index ==> %i \n", num_to_find, tail);
            flag = 0;
        }
        else if (num_to_find == arr[middle])
        {
            printf("number ( %i ) foundedd in index ==> %i \n", num_to_find, middle);
            flag = 0;
        }
        else if (tail < head || num_to_find < head )
        {
            printf("Sorry number not (%i) found ... \n", num_to_find);
            flag = 0;
        }
        else if (num_to_find > middle)
        {
            head = middle + 1;
            tail = MAX_LENGTH - 1;
            middle = (head + tail) / 2;
        }
        else if (num_to_find < middle)
        {
            head = 0;
            tail = middle - 1;
            middle = (head + tail) / 2;
        }
    }

    return 0;
}
