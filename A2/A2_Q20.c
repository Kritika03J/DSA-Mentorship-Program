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
            if (j==1 || j==n)
            {
                printf("*\t");
            }
            else if (i>n/2 && (i==j || i+j==n+1))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n");
    }
}
