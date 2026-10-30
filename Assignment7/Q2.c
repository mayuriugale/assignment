#include<stdio.h>

void Display(int iNo)
{
    int iCnt =1;
     while (iCnt <= iNo)
     {
        printf("%d\t", iCnt);
        iCnt++;
     }
     printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;

}