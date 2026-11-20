///////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : To accept character from user and display it in sequence if uppercase 
//              and in reverse if lowercase
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
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",ch);
            ch--;
        }
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