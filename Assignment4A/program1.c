#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int ivalue)
{
    if(ivalue > 0)
    {
    printf("Positive number\n");
    }
    else if(ivalue < 0)
    {
    printf("Negative Number\n");
    }
    else
    {
         printf("Zero\n");
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter a number:");
    scanf("%d",&ivalue);
    CheckNumber(ivalue);
    return EXIT_SUCCESS;
}