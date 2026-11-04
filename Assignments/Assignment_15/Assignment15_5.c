////////////////////////////////////////////////////
// 
// Function Name : Percentage
// Description : To Calculate the percentage of marks obtained
// Input : Integer, Integer
// Output : float
// Author : Saniya Sopan Katkar
// Date : 4/11/26
//
/////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    
    if(iNo1 == 0)
    {
        return 0.0;
    }

    return ((float)iNo2 / iNo1) * 100;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    float fRet = 0.0;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f",fRet);

    return 0;
}