////////////////////////////////////////
// 
// Function Name : Display
// Description : to display first number in second number of times 
// Input : Integer , Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iFrequency; iCnt++)
   {
        printf(" %d ",iNo);
   }
   
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the number : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;

}