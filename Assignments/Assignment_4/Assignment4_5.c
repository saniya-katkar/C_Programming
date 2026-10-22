////////////////////////////////////////
// 
// Function Name : CheckDivisibility
// Description : To check whether number is divisible by 5 or not
// Input : integer
// Output : string
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
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

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}