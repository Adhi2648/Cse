//WAP to find the sum of n fractions.
#include<stdio.h>
#include<math.h>
Struct fraction
{
  int n;
  int d;
};
typedef struct fraction Fraction;

Fraction getdata(int i)
{
  Fraction FrationInput;
  printf(“Enter the number %d numerator value:”,i)
  scanf("%d", &FractionInput.n); 
  printf(“Enter the number %d denominator value:”,i)
  scanf(“%d”,&FractionInput.d);
  return  FractionInput;
}

void getN(int n,Fraction s[n])
{
  for (int i=0;i<n;i++)
  {
     [i] = getdata (i+1);
   }
}
int gcd (intn,intd)
{
  if(d!=0)
     return gcd (d,n%d);
  else 
     return n;
}

Fraction computeone(Fraction s1,Fractions2)
{
  Fraction Computevalue;
  int gcdvalue;
  computevalue.n=(s1.n*s2.d) + (s1.d*s2.n);
  computevalue.d=s1.d*s2.d);
  gcdvalue = gcd(computevalue.n,computevalue.d);
  computevalue.n=(computevalue.n/gcd value);
  computevalue.d=(computevalue.d/gcd value);
  return computevalue;
}

Fraction computeN (int n,Fraction s[n])
{
  Fraction result;
  result.n=0;
  result.d=1;
  for (int i=0;i<n;i++)
  {
     result=computeOne(result,s[i]);
  }
return result;
}

int numberFraction()
{
  int n;
  printf(“Enter the no. of fractions to be added:”);
  scanf(“%d”,&n);
  return n;
  }
void displayoutput(Fraction sum,int n)
{
   printf(“The sum of %d Fraction is %d/%d”,n,sum.n,sum.d);
}

Int main()
{
  Fraction SumofFraction;
  int n;
  n=numberFraction();
  Fraction s[n];
  getN(n,s);
  SumofFraction=computeN(n,s);
  displayOutput(SumOfFraction,n);
}

