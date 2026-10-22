////////////////////////////////////////
// 
// Function Name : CheckEven
// Description : To check whether number is even or odd
// Input : Integer
// Output : Boolean value
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bret = CheckEven(iValue);

    if(bret == TRUE)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return EXIT_SUCCESS;
}