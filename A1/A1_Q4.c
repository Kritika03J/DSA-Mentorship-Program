#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n,i,j,flag=0,count=0;
    printf("Enter lower number: ");
    scanf("%d",&n1);
    printf("Enter higher number: ");
    scanf("%d",&n2);
    if (n1<1 || n2<1)
    {
        printf("Invalid input!");
        return 0;
    }
    if (n2<n1)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    if (n1==1)
    {
        n=n1+1;
    }
    else
    {
        n=n1;
    }
    printf("\nPrime numbers between %d and %d are: \n",n1,n2);
    for (j=n;j<=n2;j++)
    {
        int flag=0;
        for (i=2;i<=j/2;i++)
        {
            if (j%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d , ",j);
            count++;
        }
    }
    printf("\n\nTotal prime numbers between %d and %d are: %d\n",n1,n2,count);
}
