      
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
// Function Name    : Addition
// Input            : Integer
// Output           : Integer
// Description name : Performs Addition
// Date             : 04/10/2026
// Author           : Saniya Sopan Katkar
//
////////////////////////////////////////////////////////////////

int Additon(
                int iNo1 ,      //first input
                int iNo2        //second input
           )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;          //Business logic
    return iAns;
}

/////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////////////

int main()
{
   int iValue1=0 , iValue2=0 , iResult=0 ;

   printf("Enter first number : \n");

   if(scanf("%d",&iValue1)!=1)
   {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
   }

   printf("Enter second number : \n");

   if(scanf("%d",&iValue2)!=1)
   {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
   }


    iResult = Additon(iValue1,iValue2);    
   

    printf("Additon is : %d\n",iResult);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////
// Step 5: test the program
//
// Tested test cases
//
//  Input1  Input2  Input2
//-------------------------------------------------
//   10       11      21
//   11       0       11
//   0        11      11
//   20       -9      11
//   -9       20      11
//   -20     -11      -31