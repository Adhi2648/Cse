//Write a program to add two user input numbers using one function.
#include<stdio.h>
{
int n1,n2,n3;
printf("Enter 1st number:");
scanf("%d",&n1);
printf("Enter 2nd number:");
scanf("%d",&n2);
n3=sum(n1,n2);
printf("Sum:%d",n3);
return 0;
}
