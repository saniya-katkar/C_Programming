////////////////////////////////////////
// 
// Function Name : Display
// Description : To accept number from user and print pattern
// Input : Integer
// Output : *   *   *   #   #   #
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}