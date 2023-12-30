#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
    }
}
