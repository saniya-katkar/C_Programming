////////////////////////////////////////
// 
// Function Name : MultipleDisplay
// Description : To accept number N from user and print first 5 multiples of N
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 1/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {   
            printf("%d\t",iCnt*iNo);
        
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}