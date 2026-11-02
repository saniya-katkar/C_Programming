////////////////////////////////////////
// 
// Function Name : FactorialDiff
// Description : To return the difference between Even and Odd factorial
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFact = 0, OddFact = 0, Fact = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo, EvenFact = 1, OddFact = 1; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0 )
        {
            EvenFact = EvenFact * iCnt;
        }
        else
        {
             OddFact = OddFact * iCnt;
        }
        
    }

    Fact = EvenFact - OddFact;

    return Fact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d",iRet);

    return EXIT_SUCCESS;
}