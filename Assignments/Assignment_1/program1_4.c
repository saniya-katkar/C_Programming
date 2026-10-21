////////////////////////////////////////
// 
// Function Name : Check
// Description : To check whether number is divisible by 5 or not
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

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bret = Check(iValue);

    if(bret == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf(" Not Divisible by 5");
    }

    return EXIT_SUCCESS;
}