//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int addition(int n1,int n2)
{
  int sum;
  sum=n1+n2;
  return sum;
}
int main()
{
  int n1,n2,t;
  printf("Enter 2 numbers:");
  scanf("%d%d",&n1,&n2);
  t=addition(n1,n2);
  printf("Sum=",t);
  return 0;
}
