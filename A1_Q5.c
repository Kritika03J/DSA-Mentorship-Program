#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        count++;
        n1=n1/10;
    }
    printf("Number of digits in %d is %d",n,count);
}
