#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 10;

    while(iCnt >= 1)
    {
        printf("%d ", iNo * iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}