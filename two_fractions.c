//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct fraction
{
int num, den;
}
Fraction;
Fraction input(Fraction temp)
{
printf("numerator:");
scanf("%d",&temp.num);
printf("Enter the denominator:");
scanf("%d",&temp.den);
return temp;
};
void showoutput(Fraction temp,Fraction a, Fraction b)
{
printf("Sum is %d/%d+%d/%d = %d/%d",a.num,a.den,b.num,b.den,temp.num,temp.den);
};
int div(int a,int b)
{
    if (a ==0)
    {
        return b;
    }
    return div(y%x,x);
};
Fraction out(Fraction a, Fraction b)
{
    Fraction c;
    int x,y;
    x = (a.num * b.den) + (b.num * a.den);
    y = (a.den * b.den);

    
    c.num = x /div(x,y);
    c.den = y /div(x,y);
    return c;
};
int main()
{
Fraction a,b,c;
int div;
printf("First fraction:\n");
a = input(a);
printf("Second fraction:\n");
b = input(b);
c = out(a,b);
showoutput(c,a,b);
return 0;
}
