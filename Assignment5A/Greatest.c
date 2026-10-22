#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst,int iSecond ,int iThird)
{
  if(  iFirst >= iSecond && iFirst >= iThird)
  {
       printf("%d is Greates\n",iThird);
  }
  else if(iSecond >= iFirst && iSecond >= iThird)
  {
    printf("%d is Greates\n",iFirst);
  }
  else
  {
    printf("%d is Greates\n",iThird);
  }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enetr three numbers:");
    scanf("%d %d %d", &iValue1,iValue2,iValue3);
    FindGreatest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}