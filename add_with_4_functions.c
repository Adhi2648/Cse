//Write a program to add two user input numbers using 4 functions.


#include<stdio.h>
int fir()
{
int n;
printf("Enter num 1 ");
scanf("%d",&n);
return n;
}
int sec()
{
int n;
printf("Enter num 2");
scanf("%d",&n);
return n;
}
int add(int fir,int sec)
{ 
return (fir+sec);
}
int print(int sum)
{
 printf("sum  = %d\n",sum);
}
int main()
{
int x=fir();
int y=sec();
int sum=add(x,y);
print(sum);
return 0;
}
