#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(int *a,int *b);
int main()
{
    int a, b;
    printf("Enter 1st Number :");
    scanf("%d", &a);
    printf("Enter 2nd Number :");
    scanf("%d", &b);
    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
    int c;
    c=*(a);
    *(a)=*(b);
    *(b)=c;
}