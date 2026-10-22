////////////////////////////////////////
// 
// Function Name : Display
// Description : Accept number from user and print that number of *
// Input : Integer
// Output : *
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;
    while(iCnt > 0)
    {
        printf(" * ");
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of * to be printed : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}