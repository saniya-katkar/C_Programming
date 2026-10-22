////////////////////////////////////////
// 
// Function Name : CheckVotingEligibility
// Description : To check whether one is eligible to vote or not
// Input : integer
// Output : string
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}