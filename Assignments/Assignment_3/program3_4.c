////////////////////////////////////////
// 
// Function Name : DisplayConvert
// Description : To convert the case of a character
// Input : character
// Output : character
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char CValue)
{   

    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        CValue = CValue + 32;
        printf("%c", CValue);
    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        CValue = CValue - 32;
        printf("%c", CValue);
    }
    
    
}
int main()
{
    int cValue = 0;

    printf("Enter the character : \n");

    scanf("%d",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;

}