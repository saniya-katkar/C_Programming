/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To display the pattern
// Input : Integer, Integer 
// Output :  1  *   2   *   3   *    4   *    5   *
// Author : Saniya Sopan Katkar
// Date : 12/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iNo; i++)
    {   
        printf("%d\t*\t",i);
        
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);


    Pattern(iValue);

    return EXIT_SUCCESS;

}