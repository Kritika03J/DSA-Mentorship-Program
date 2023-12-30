#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        n--;
        printf("Number of rows changed to %d as your input was even.\n\n",n);
    }
    for (i=0;i<n;i++)
    {
        s=i;
        if (i>n/2)
        {
            s=n-i-1;
        }
        for (j=0;j<((n-1)/2)-s;j++)
        {
            printf("\t");
        }
        for (j=0;j<2*s+1;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
