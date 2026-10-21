#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iValue)
{
    if((iValue % 5) ==0)
    {
    printf("Divisible by 5\n");
    }
    else
    {
         printf("Not Divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a anumber:");
    scanf("%d",&iValue);
     CheckVotingEligibility(iValue);
    return EXIT_SUCCESS;
}