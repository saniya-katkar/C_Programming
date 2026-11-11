/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To print the pattern
// Input : Integer, Integer 
// Output :  5  4   3   2   1
//           5  4   3   2   1
//           5  4   3   2   1
// Author : Saniya Sopan Katkar
// Date : 12/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {   
        for(j = iCol; j > 0; j--)
        {
            printf("%d\t",j);
        }
        
        printf("\n\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;

}