#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    if (n%2==0)
    {
        n++;
        printf("Number of rows changed to %d as input was even.\n\n",n);
    }
    int os=n/2,is=-1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=os;j++)
        {
            printf("\t");
        }
        printf("*\t");
        for (j=1;j<=is;j++)
        {
            printf("\t");
        }
        if (i>1 && i<n)
        {
            printf("*");
        }
        if (i<=n/2)
        {
            os--;
            is+=2;
        }
        else
        {
            os++;
            is-=2;
        }
        printf("\n");
    }
}
