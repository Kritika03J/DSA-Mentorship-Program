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
    int sp=0,st=n;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=sp;j++)
        {
            printf("\t");
        }
        for (j=1;j<=st;j++)
        {
            if (i>1 && i<=n/2 && j>1 && j<st)
            {
                printf("\t");
            }
            else
            {
                printf("*\t");
            }
        }
        if (i<=n/2)
        {
            sp++;
            st-=2;
        }
        else
        {
            sp--;
            st+=2;
        }
        printf("\n\n");
    }
}
