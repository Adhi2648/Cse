//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float addition(float n1,float n2)
{
   float sum;
   sum=n1+n2;
   return sum;
}
int main()
{
  float n1,n2,t;
  printf("Enter 2 numbers:");
  scanf("%f%f",&n1,&n2);
  t=addition(n1,n2);
  printf("%.2f+%.2f\n",n1,n2,t);
  return 0;
}
