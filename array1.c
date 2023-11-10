#include<stdio.h>

int main()
{
    
    int Arr[7];
    int iCnt = 0;

    printf("Enter the elements:");

    for(iCnt = 1; iCnt < 6; iCnt++)
    {
         scanf("%d\n", &Arr[iCnt]);
    }

    printf("Elements from the array are:");

    for(iCnt = 1; iCnt < 6; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }




    return 0;
}