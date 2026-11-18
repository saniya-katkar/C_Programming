///////////////////////////////////////////////////////////////////////////
//
//Function : DisplayDigit
//Description : To accept string from user and display only digits from string
//Input : string
//Output : string
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        
        str++;
    }
    
}
int main()
{
    char arr[20];
   
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}