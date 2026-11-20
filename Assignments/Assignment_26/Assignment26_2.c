///////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : to accept character from user and convert it into uppercase or lowercase
//Input : Character
//Output : Character
//Author : Saniya Sopan Katkar
//Date : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch - 32);
    }
    else
    {
        printf("%c",ch);
    }


    
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}