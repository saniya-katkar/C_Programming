////////////////////////////////////////
// 
// Function Name : Display
// Description : To accept number N from user and print all odd numbers upto N
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

    for(iCnt = iNo; iCnt >= -iNo; iCnt--)
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