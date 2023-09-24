#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,div;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n%2==0)
    {
        printf("%d ",2);
        n=n/2;
    }
    for (div=3;div*div<=n;div=div+2)
    {
        while(n%div==0)
        {
            printf("%d ",div);
            n=n/div;
        }
    }
    if (n>2)
    {
        printf("%d",n);
    }
}
