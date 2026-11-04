////////////////////////////////////////
// 
// Function Name : RangeSumEven
// Description : To display sum of even numbers within given range
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    
    
        if((iStart >= 0 ) && (iStart < iEnd))
        {
            for(iCnt = iStart; iCnt <= iEnd; iCnt++)
            {
                if((iCnt % 2) == 0)
                {
                    iSum = iSum + iCnt;
                }
                
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

    iRet = RangeSumEven(iValue1 , iValue2);

    printf("Addition is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}