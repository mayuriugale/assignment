#include<stdio.h>
#include<stdlib.h>

void CheackLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid YEAR");
    }
    else if((iYear % 400) ==0) 
    {
        printf("not Leap year\n");
    }
    else if((iYear % 4)==0)
    {
        printf("Leap year\n");

    }
    else
    {
        printf("NOT Leap Year\n");
    }
}
int main()
{
    int iYear = 0;
    printf("Enter year:");
    scanf("%d",&iYear);

    CheackLeapYear(iYear);

    return EXIT_SUCCESS;
}