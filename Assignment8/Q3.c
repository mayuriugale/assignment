#include<stdio.h>

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  printf("(");
  if(iNo == 0)
  {
    printf("1");
  }
  for(iCnt =iNo; iCnt >= 1; iCnt--)
  {
  iFact = iFact* iCnt;
  printf("%d",iCnt);
  if(iCnt != 1)
  {
    printf("*");
  }
}
  printf(")\n");
  
  return iFact;
}
int main()
{
    int iValue = 0;
    int iRet =0;
    printf("enter number : ");
    scanf("%d", &iValue);
      iRet = Factorial(iValue);
      if(iRet == -1)
      {
        printf("Invaild number");
      }
      else
      {
        printf("Factorial of number is %d\n", iRet);
      }
    return 0;
}