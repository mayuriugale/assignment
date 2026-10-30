#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1;

    while(iCnt <= 10)
    {
        printf("%d ", iNo * iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}