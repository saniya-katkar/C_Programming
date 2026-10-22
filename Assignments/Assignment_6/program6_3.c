///////////////////////////////////////
// 
// Function Name : CalculateDiscount
// Description : To calculate the discount and final payable amount
// Input : Float
// Output : String
// Author : Saniya Sopan Katkar
// Date : 23/10/26
//
///////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount\n");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }

    if(fAmount >= 0)
    {
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}