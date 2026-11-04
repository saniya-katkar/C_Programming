////////////////////////////////////////
// 
// Function Name : Count
// Description : To count the frequency of digits less than 6 in the given number
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
           iCount++;
        }
       
        
        iNo = iNo / 10;
    }

    return iCount;

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Frequency is : %d",iRet);


    return EXIT_SUCCESS;
}