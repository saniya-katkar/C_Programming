////////////////////////////////////////
// 
// Function Name : Display
// Description : To accept number from user and print numbers till that number
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 1/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}