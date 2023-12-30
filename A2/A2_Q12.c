#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x1=0,x2=1,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d\t",x1);
            int x3=x1+x2;
            x1=x2;
            x2=x3;
        }
        printf("\n");
    }
}
