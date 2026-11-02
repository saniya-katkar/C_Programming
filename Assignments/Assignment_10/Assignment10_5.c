////////////////////////////////////////
// 
// Function Name :SquareMeter
// Description : To convert the area from square feet to square meter
// Input : Integer
// Output : double
// Author : Saniya Sopan Katkar
// Date : 2/11/26
//
///////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf\n", dRet);


    return EXIT_SUCCESS;
}
