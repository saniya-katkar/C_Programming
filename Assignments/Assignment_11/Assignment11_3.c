////////////////////////////////////////
// 
// Function Name : RangeSum
// Description : To display sum of numbers within given range
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    
    
        if((iStart >= 0 ) && (iEnd >= 0 ) && (iStart < iEnd))
        {
            for(iCnt = iStart; iCnt <= iEnd; iCnt++)
            {
                iSum = iSum + iCnt;
            } 
            
             return iSum;
            
        }
        else
        {
            printf("Invalid input \n");
        }
       
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    printf("Addition is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}