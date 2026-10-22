////////////////////////////////////////
// 
// Function Name : Display
// Description : print 'Hello' or 'Demo' depending on input 
// Input : Integer
// Output : String
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}