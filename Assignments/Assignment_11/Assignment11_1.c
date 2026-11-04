////////////////////////////////////////
// 
// Function Name : RangeDisplay
// Description : To display numbers within given range
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart < iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
        printf("%d\t",iCnt);
        }
    
    }
    else
    {
        printf("Invalid input\n");
    }

    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1 , iValue2);
    

    return EXIT_SUCCESS;
}