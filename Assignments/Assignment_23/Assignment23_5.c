///////////////////////////////////////////////////////////////////////////
//
//Function : CountWhite
//Description : To accept string from user and return number of white spaces
//Input : string
//Output : string
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
    
}
int main()
{
    char arr[20];
    int iRet = 0;
   
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);


    return EXIT_SUCCESS;
}