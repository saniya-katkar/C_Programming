//////////////////////////////////////////////////////////////
// 
// Function Name : ChkEqual
// Description : check whether the numbers are Equal or not
// Input : int , int
// Output : Bool
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}