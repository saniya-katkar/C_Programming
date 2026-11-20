///////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : To accept character from user and check it is special character or not
//Input : Character
//Output : Character
//Author : Saniya Sopan Katkar
//Date : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '%') || 
    (ch == '^') || (ch == '&') || (ch == '*') || (ch == '$'))
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
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }


    return EXIT_SUCCESS;
}