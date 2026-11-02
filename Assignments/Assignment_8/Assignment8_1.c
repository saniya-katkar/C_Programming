////////////////////////////////////////
// 
// Function Name : Number
// Description : To print small,medium or large according to the number
// Input : Integer
// Output : String
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}