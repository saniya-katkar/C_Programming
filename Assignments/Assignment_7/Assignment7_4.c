////////////////////////////////////////
// 
// Function Name : OddDisplay
// Description : To accept number N from user and print all odd numbers upto N 
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 1/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if((iCnt %2) != 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}