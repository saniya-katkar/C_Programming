///////////////////////////////////////////////////////////////////////////
//
//Function : ChkDigit
//Description : To accept character from user and check whether it is digit or not
//Input : Character
//Output : Boolean
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkDigit(char ch)
{
    if(((ch >= '0') && (ch <= '9')))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("It is not Digit ");
    }


    return EXIT_SUCCESS;
}