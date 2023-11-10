#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)
{

    int iCnt= 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;

}

int main()
{
   
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int Ret = 0;

    printf("Enter the number of elements you wish to enter");
    scanf("%d", &iLength );

    ptr = (int*)malloc(iLength*sizeof(int));

    printf("Enter the elements you want to put in array:");

    for(i = 0; i<iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The elements from the array are:\n");

     for(i = 0; i< iLength; i++)
    {
        printf("%d\n",ptr[i]);
    }


    Ret = Summation(ptr, iLength);

    printf("The sum of all the elements of from the array is: %d\n", Ret);




    return 0;
}