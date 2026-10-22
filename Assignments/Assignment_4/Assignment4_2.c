////////////////////////////////////////
// 
// Function Name : CheckEvenOdd
// Description : To check whether number is even or odd
// Input : integer
// Output : integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("%d is an Even number\n", iValue);
    }
    else
    {
        printf("%d is an Odd number\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
