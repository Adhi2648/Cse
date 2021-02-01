//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter 1st number:");
  scanf("%d",&n1);
  printf("Enter 2nd number:");
  scanf("%d",&n2);
  n3=sum(n1,n2);
  return 0;
}
int sum(int n1,int n2){
  int n4;
  n4=n1+n2;
  return(n4);
}
