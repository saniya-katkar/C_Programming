/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To display the pattern
// Input : Integer, Integer 
// Output :   1   2    3    4    
//            2   3    4    5
//            3   4    5    6
//            4   5    6    7
// Author : Saniya Sopan Katkar
// Date : 10/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    
    for(i = 1; i <= iRow; i++)
    {   
        
        for(j = 1 , iCnt = i; j <= iCol; j++, iCnt++)
        {
            printf("%d\t",iCnt);
            
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