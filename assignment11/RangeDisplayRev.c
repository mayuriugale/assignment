#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    // Filter: Check if the starting point is greater than the ending point
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Loop backward from iEnd down to iStart
    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}