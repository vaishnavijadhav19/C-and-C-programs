#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize, int Value )
{
    int iCnt = 0;
    int freq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== Value)
        {
            freq++;
        }
    }

    return freq;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iDigit = 0;
    int i = 0;
    int No = 0;
    int Ret = 0;

    

    printf("How many elements you wish to store in array:");
    scanf("%d", &iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    printf("enter the elements you wish to store in an array:");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }


   


    printf("Enter the element of which you wish to see frequency of:");
    scanf("%d", &No);



    Ret =  Frequency(ptr, iLength, No);

    printf("The freq of occurance of the given digit is: %d\n", Ret);
    










    return 0;
}