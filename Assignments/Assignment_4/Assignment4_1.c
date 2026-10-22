////////////////////////////////////////
// 
// Function Name : CheckNumber
// Description : To check whether number is positive or negative
// Input : integer
// Output : integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("%d is an even number\n", iValue);
    }
    else
    {
        printf("%d is an odd number\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
