/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To display the pattern
// Input : Integer, Integer 
// Output :   A   B   C   D   E
// Author : Saniya Sopan Katkar
// Date : 12/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;
    char ch = '\0';
    
    for(i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {   
        printf("%c\t",ch);
        
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