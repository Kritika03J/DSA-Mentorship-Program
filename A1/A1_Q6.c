#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        printf("%d\n",rem);
        n=n/10;
    }
}
