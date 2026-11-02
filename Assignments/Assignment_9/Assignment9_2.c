////////////////////////////////////////
// 
// Function Name : DollarToINR
// Description : To accept amount in US Dollar and return its Indian currency
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int DollarToINR(int iNo)
{
    int iInr = 0;

    iInr = iNo * 70;

    return iInr;
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}