#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,s;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        n++;
        printf("Number of rows changed to %d as input was even.\n\n",n);
    }
    for (s=1;s<=n;s++)
    {
        i=s;
        if (i>(n/2)+1)
        {
            i=n-i+1;
        }
        for (j=1;j<=(n/2)-i+1;j++)
        {
            printf("  ");
        }
        k=i;
        for (j=1;j<=2*i-1;j++)
        {
            printf("%d ",k);
            if (j>(2*i-1)/2)
            {
                k--;
            }
            else
            {
                k++;
            }
        }
        printf("\n");
    }
}
