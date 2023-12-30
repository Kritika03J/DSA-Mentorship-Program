#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        int icj=1;
        for (j=0;j<=i;j++)
        {
            printf("%d\t",icj);
            int icjp1= (icj*(i-j))/(j+1);
            icj=icjp1;
        }
        printf("\n");
    }
}
