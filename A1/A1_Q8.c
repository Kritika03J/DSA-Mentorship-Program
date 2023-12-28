#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,num;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter number of rotations: ");
    scanf("%d",&k);
    int d=countd(n);
    while (k>d)
    {
        k=k-d;
    }
    if (k<0)
    {
        k=k+d;
    }
    int div=pow(10,k);
    num=((n%div)*pow(10,d-k))+(n/div);
    printf("%d",num);
}

int countd(int n1)
{
    int count=0;
    while(n1!=0)
    {
        count++;
        n1=n1/10;
    }
    return count;
}
