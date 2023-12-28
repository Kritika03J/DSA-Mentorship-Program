#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,n;
    printf("Enter size of Z: ");
    scanf("%d",&n);
    for (r=1;r<=n;r++)
    {
        for (c=1;c<=n;c++)
        {
            if (r==1||r==n||r+c==n+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
