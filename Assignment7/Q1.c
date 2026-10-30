#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("$ * ");
        iCnt++;
    }
    printf("\n");
    
    
}
int main()
{
    int iValue = 0;
        printf("Enter number:");
        scanf("%d",&iValue);
        pattern(iValue);
        return 0;
}
