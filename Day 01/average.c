#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *arr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", (arr + i));
    }

    int sum = 0;
    float average;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + (*(arr + i));
    }
    average =(float) sum / 10;

    printf("Sum of Number is %d\n", sum);
    printf("Average of Number is %.2f", average);

    return 0;
}