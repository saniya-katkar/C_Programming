/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Multiply
// Description : To Perform Multiplication of Three numbers
// Input : Integer, Integer , Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    

    if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d",iRet);

    return 0;
}