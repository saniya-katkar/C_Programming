 #include"header.h"         //double quote because it is in current directory
 
 /////////////////////////////////////
 // Entry point function
 /////////////////////////////////////

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
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
   }


    iResult = Additon(iValue1,iValue2);    
   

    printf("Additon is : %d\n",iResult);

    return EXIT_SUCCESS;
}
