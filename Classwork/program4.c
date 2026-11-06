/*
    Step 1: understand the problem statement  
    Step 2: write the algorithm
    Step 3: decide the program language
    Step 4: write the program
    Step 5: test the program

*/

///////////////////////////////////////////////////
//
/*
// Step 1: Understand the problem statement
           user is going to enter two integers
           and we have to perform addition
*/
/////////////////////////////////////////////
//
// Step 2: write the algorithm
/*
    START
        Accept first number as no1
        Accept second number as no2
        create variable as Ans to store result
        perform addition and store in Ans
        Display the result
    END
*/
////////////////////////////////////////////////
// Step 3: decide the program language
//          We select C programming
////////////////////////////////////////////////
// 
//   Step 4: write the program
//
/////////////////////////////////////////////

      
#include<stdio.h>

int main()
{
   int iValue1, iValue2, iResult;

   printf("Enter first number : \n");
   scanf("%d",&iValue1);

   printf("Enter second number : \n");
   scanf("%d",&iValue2);


    iResult = iValue1 + iValue2;     //Business logic

    printf("%d\n",iResult);

    return 0;
}