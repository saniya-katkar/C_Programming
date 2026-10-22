////////////////////////////////////////
// 
// Function Name : DisplayEvenFactor
// Description : To print even factors of a number
// Input : Integer
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactor(int iNo)
{   
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;   
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf(" %d ",i);
        }
    }
    
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;

}