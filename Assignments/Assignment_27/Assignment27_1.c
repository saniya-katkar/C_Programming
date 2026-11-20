///////////////////////////////////////////////////////////////////////////
//
//Function : CountCapital
//Description : To count capital characters
//Input : character
//Output : integer
//Author : Saniya Sopan Katkar
//Date : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Frequency of character is : %d",iRet);

    return 0;
}