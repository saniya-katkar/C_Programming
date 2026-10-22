////////////////////////////////////////
// 
// Function Name : PrintEven
// Description : to accept number from user and print that number of even numbers on screen
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{   
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;   
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %d ", iCnt * 2);
    }

    
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;

}