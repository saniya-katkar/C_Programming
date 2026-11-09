/////////////////////////////////////////////////////////////////////////
// 
// Function Name : Pattern
// Description : To print the pattern
// Input : Integer, Integer 
// Output :   A   B   C   D
//            a   b   c   d
//            A   B   C   D
//            a   b   c   d
// Author : Saniya Sopan Katkar
// Date : 10/11/26
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {   
        if((i % 2) != 0)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }   
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