////////////////////////////////////////
// 
// Function Name : RangeDisplayEven
// Description : To display even numbers within given range
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0 )
        {
            printf("%d\t",iCnt);
        }
       
    }

    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1 , iValue2);
    

    return EXIT_SUCCESS;
}