#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks>100 || marks<0)
    {
        printf("Invalid marks!");
    }
    else if (marks>90)
    {
        printf("Excellent!!");
    }
    else if (marks>80)
    {
        printf("Good!");
    }
     else if (marks>70)
    {
        printf("Fair.");
    }
    else if (marks>60)
    {
        printf("Meets Expectations.");
    }
    else if (marks<=60)
    {
        printf("Below Par.");
    }
}
