//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
Int main()
{
float x1,x2,y1,y2,d;
float one();
float two();
float three();
float four();

x1=one();
y1=two();

x2=three();
y2=four();
d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf(“Distance=%f”,d);
return 0;
}

float one()
{
   float h;
   printf(“Enter x coordinate of point 1=”);
   scanf(“%f”,&h);
   return h;
}
float two()
{
   float h;
   printf(“Enter y coordinate of point 1=”);
   scanf(“%f”,&h);
   return h;
}
float three()
{
   float h;
   printf(“Enter x coordinate of point 2=”);
   scanf(“%f”,&h);
   return h;
}
float four();
{
   float h;
   printf(“Enter y coordinate of point 2=”);
   scanf(“%f”,h);
   return h;
}
