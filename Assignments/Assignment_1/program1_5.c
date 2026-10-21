////////////////////////////////////////
// 
// Function Name : Accept
// Description : To print *
// Input : Integer
// Output : *
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number of star to be printed : \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}