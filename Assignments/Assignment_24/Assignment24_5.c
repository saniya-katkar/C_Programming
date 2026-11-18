///////////////////////////////////////////////////////////////////////////
//
//Function : StrRevX
//Description : It is used to accept string from user and reverse the string 
//Input : string
//Output : string
//Author : Saniya Sopan Katkar
//Date : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char temp; 
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char arr[20];
   
    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is : %s\n",arr);
    

    return EXIT_SUCCESS;
}