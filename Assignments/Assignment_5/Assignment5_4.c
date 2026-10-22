////////////////////////////////////////
// 
// Function Name : CheckMultipleDivisibility
// Description : To check the divisibility of a number with 3 and 5
// Input : Integer
// Output : String
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}