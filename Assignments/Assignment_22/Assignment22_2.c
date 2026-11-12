/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To display the pattern
// Input : Integer, Integer 
// Output :  5  #   4   #   3   #   2   #   1   #
// Author : Saniya Sopan Katkar
// Date : 12/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;
    
    for(i = iNo; i > 0; i--)
    {   
        printf("%d\t#\t",i);
        
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