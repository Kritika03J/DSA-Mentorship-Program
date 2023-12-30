#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,s=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d\t",s);
            s++;
        }
        printf("\n");
    }
}
