///////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : To accept character from user and display its decimal, 
//              octal and hexadecimal value
//Input : Character
//Output : Integer
//Author : Saniya Sopan Katkar
//Date : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : O%o\n",ch);
    printf("Hexadecimal : OX%X\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}