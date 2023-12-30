#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for (j=1;j<=2*(n-i)-1;j++)
        {
            printf("  ");
        }
        for (j=i;j>=1;j--)
        {
            if (j==n)
            {
                continue;
            }
            else
            {
                printf("%d ",j);
            }

        }
        printf("\n");
    }
}
