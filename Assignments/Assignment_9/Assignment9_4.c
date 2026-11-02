////////////////////////////////////////
// 
// Function Name : OddFactorial
// Description : To return odd factorial of a number
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo, iFact = 1; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0 )
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d",iRet);

    return EXIT_SUCCESS;
}