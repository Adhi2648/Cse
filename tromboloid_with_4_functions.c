//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float h,b,d,vol;
float height()
{ 
     printf("Enter height");
     scanf("%f",&h);
}
float breadth()
{ 
 printf("Enter b");
     scanf("%f",&b);
}
float depth()
{ 
    printf("Enter d");
     scanf("%f",&d);
}
float volume(float height,float breadth,float depth)
{
    return((height* depth)+depth/(3*breadth));
}
float print(float vol)
{
   printf("Volume of the tromboloid is :%2f",vol);
}
int main()
{
int x=height();
int y=breadth();
int z=depth();
int vol=volume(x,y,z);
print(vol);
return 0;
}

