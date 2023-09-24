#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,num=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        count++;
        num=(count*pow(10,rem-1))+num;
        n=n/10;
    }
    printf("%d",num);
}
