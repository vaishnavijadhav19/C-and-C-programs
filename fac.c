#include <stdio.h>


int Factorial(int Value)
{
     int i = 0;

     int iFac = 1;

     for(i = 1; i<=Value; i++)
     {
         iFac = iFac * i;
     }

     return iFac;

}

int main()
{
    int No = 0;
    int Ret = 0;

    printf("Enter the number you wish to find factorial of:");
    scanf("%d", &No);

    Ret = Factorial(No);

    printf("The ans of factorial is: %d\n", Ret);



    return 0;
}