////////////////////////////////////////
// 
// Function Name : TableRev
// Description : To display table of a number in reverse order
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {   
            printf("%d\t",iCnt*iNo);
        
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}