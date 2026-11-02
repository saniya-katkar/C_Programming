////////////////////////////////////////
// 
// Function Name : EvenFactorial
// Description : To return even factorial of a number
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo, iFact = 1; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0 )
        {
            iFact = iFact * iCnt;
        }
        
    }

    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return EXIT_SUCCESS;
}