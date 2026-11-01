////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To accept number from user and print that number of $ and *
// Input : Integer
// Output : $   *   $   *   $   *
// Author : Saniya Sopan Katkar
// Date : 1/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}