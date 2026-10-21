#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int ivalue)
{
    if((ivalue % 2) ==0)
    {
    printf("Even number\n");
    }
    else if(ivalue < 0)
    {
    printf("odd Number\n");
    }
    else
    {
         printf("Odd Number\n");
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter a number:");
    scanf("%d",&ivalue);
    CheckEvenOdd(ivalue);
    return EXIT_SUCCESS;
}