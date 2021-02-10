//Write a program to find the sum of n different numbers using 4 functions
int main()
{
   int n,sum = 0,i,a[100];
   scanf("%d", &n);
   for (i= 0;i< n;i++)
   {
      scanf("%d", &a[i]);
      sum = sum + a[i];
   }
   printf("Sum = %d",sum);
   return 0;
}
