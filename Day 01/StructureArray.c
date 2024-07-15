#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    int emp_id;
    char emp_name[20];
    int emp_sal;
};
int main()
{
    printf("Enter Number of Employees : ");
    int n;
    scanf("%d", &n);
    struct employee emp[n];
    for(int i=0;i<n;i++){
        printf("Enter id : ");
        scanf("%d",&emp[i].emp_id);
        scanf("%c");
        printf("Enter name : ");
        gets(emp[i].emp_name);
        printf("Enter salary : ");
        scanf("%d",&emp[i].emp_sal);
    }
    for(int i=0;i<n;i++){
        printf("Id : %d\n",emp[i].emp_id);
        printf("Name : %s\n",emp[i].emp_name);
        printf("Salary : %d\n",emp[i].emp_sal);
    }
    return 0;
}