#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=1;j<n-i;j++)
        {
            printf("\t");
        }
        printf("*\n");
    }
}
