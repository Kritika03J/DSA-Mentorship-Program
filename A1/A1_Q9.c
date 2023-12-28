#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("GCD of %d and %d is: %d\n",a,b,hcf);
    int lcm=(a*b)/hcf;
    printf("LCM of %d and %d is: %d",a,b,lcm);
}

int gcd(int n1,int n2)
{
    if (n2==0)
    {
        return n1;
    }
    return gcd(n2,n1%n2);
}
