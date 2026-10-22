////////////////////////////////////////
// 
// Function Name : FindGreater
// Description : To find greater number
// Input : integer
// Output : integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers:\n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
