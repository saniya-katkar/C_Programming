////////////////////////////////////////
// 
// Function Name : Display
// Description : To print numbers from 5 to 1
// Input : -
// Output : Integer
// Author : Saniya Sopan Katkar
// Date : 22/10/26
//
///////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i>=0)
    {
        printf("%d ",i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}