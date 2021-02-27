//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int main ()
{
  float x1, x2, y1, y2, d;
  float one ();
  float two ();
  float three ();
  float four ();
  x1 = one ();
  y1 =one ();
  x2 =two();
  y2 = two ();
  return 0;
}

float one ()
{
  float h,m;
  printf ("Enter x coordinate of point 1 = ");
  scanf ("%f ", &h);
  printf ("Enter y coordinate of point 1 = ");
  scanf ("%f", &m);
  return h;
  return m;
}
float two()
{
   float h;
   printf("Enter x coordinate of point 2=");
   scanf("%f",&h);
   printf("Enter y coordinate of point 2=");
   scanf("%f",&m);
   return h;
   return m;
}
float square()
{
   d = sqrt (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
   return d;
}
float res()
{
     printf ("Distance = %f ", d);
}

