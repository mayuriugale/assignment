#include<stdio.h>

void oddDisplay(int iNo)
{
    int iCnt =1;
     while (iCnt <= iNo)
     {
        printf("%d\t", iCnt);
        iCnt = iCnt + 2;
     }
     printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    oddDisplay(iValue);


    return 0;

}