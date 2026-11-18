///////////////////////////////////////////////////////////////////////////
//
//Function : FirstChar
//Description : To accept string from user and give first index of given character
//Input : string
//Output : Integer
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        iCount++;
        str++;
    }

    if(*str != ch)
    {
        return -1;
    }
   
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}