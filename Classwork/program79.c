// Input : 5
// 1+2+3+4+5 = 15

// Input : 8
// 1+2+3+4+5+6+7+8 = 36

#include<stdio.h>
#include<stdlib.h>

void Display( int iNo)
{
    int iCnt = 0, iSum = 0;


    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iSum = iSum + iCnt;
         
    }
    printf(iSum);
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}