/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To display the pattern
// Input : Integer, Integer 
// Output :  2  4   6   8   10  12  14  16
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
        printf("%d\t",2*i);
        
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