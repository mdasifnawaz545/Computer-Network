#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char content[20];
    FILE *f;
    printf("Enter the Content : ");
    scanf("%s", &content);
    f = fopen("content.txt", "w");
    fputs(content, f);
    char str[20];
    char c;
    f = fopen("content.txt", "r");
    printf("File Content is : ");
    while ((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }
    fclose(f);
    return 0;
}