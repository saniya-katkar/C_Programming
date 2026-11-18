///////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : To accept Division from user and give the exam time for that division
//Input : character
//Output : String
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch == 'a') || (ch == 'A'))
    {
        printf("Your exam time is 7.00 AM");
    }
    else if((ch == 'b') || (ch == 'B'))
    {
        printf("Your exam time is 8.30 AM");
    }
    else if((ch == 'c') || (ch == 'C'))
    {
        printf("Your exam time is 9.20 AM");
    }
    else if((ch == 'd') || (ch == 'D'))
    {
        printf("Your exam time is 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the Division : ");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}