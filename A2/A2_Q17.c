#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        n++;
        printf("Number of rows changed to %d as input was even.\n\n",n);
    }
    for (i=1;i<=n;i++)
    {
        s=i;
        if (s!=(n/2)+1)
        {
            for (j=1;j<=n/2;j++)
            {
                printf("\t");
            }
            if (s>(n/2)+1)
            {
                s=n-s+1;
            }
            for (j=1;j<=s;j++)
            {
                printf("*\t");
            }
        }
        else
        {
            for (j=1;j<=n;j++)
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}
