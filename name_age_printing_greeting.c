#include<stdio.h>
void main()
{
    char name[50];
    int age;
    printf("Enter your name: ");
    fgets(name,50,stdin);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("\nHi, %ssince your age is %d\nwe welcome you to a grand party!",name,age);
}
