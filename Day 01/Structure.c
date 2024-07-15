#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};
void func(int roll, char name[30], struct student s1);
void printDetails(struct student s1);
int main()
{
    struct student s1;
    printf("Enter Your Name : ");
    gets(s1.name);
    printf("Enter Your Roll : ");
    scanf("%d",&s1.roll);
    printf("Enter Your Marks : ");
    scanf("%f",&s1.marks);
    // struct student *s2=s1;
    printDetails(s1);


}
// void func(int rollNo, char studentName[30], struct student s1)
// {
//     s1.roll = rollNo;
//     // s1.name=studentName;

// }
void printDetails(struct student s1)
{
    printf("Roll is = %d\n", s1.roll);
    printf("Name is = %s\n", s1.name);
    printf("Marks is = %.2f\n", s1.marks);
}

// wap to swap two number using call by address.
// write a program to decalre the sutent structure having the data number includes rollno , name and marks and then input the student details and display the details using structure pointer.
// wap to accept an array of 5 employees information in terms of structure and try to sorting them according to the salary that includes name,id,salary.
// wap to accept 10 numbers using dynamic array and find the sum and average of that number.
// wap to enter a line from the keyboard nad write into the file and same content read from the file and then read the same content from the file.
