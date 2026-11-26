#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    // Filter for invalid range or negative numbers
    if ((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1; // Indicates invalid range
    }

    // Loop through the range and add only even numbers
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}