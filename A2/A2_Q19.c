#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        n++;
        printf("Number of rows changed to %d as input was even.\n\n",n);
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i==1)
            {
                if (j<=n/2+1 || j==n)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            else if (i<n/2+1)
            {
                if (j==n/2+1 || j==n)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            else if (i==n/2+1)
            {
                printf("*\t");
            }
            else if (i<n)
            {
                if (j==n/2+1 || j==1)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            else
            {
                if (j>=n/2+1 || j==1)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
        }
        printf("\n\n");
    }
}
