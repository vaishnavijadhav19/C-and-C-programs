#include <iostream>
using namespace std;

int MaxDigit(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;


}

int MinDigit(int Arr[], int iSize)
{
    int iMin = Arr[iSize-1];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    int Ret = 0;
    

    cout<<" Enter the number of elements you wish to store in array:"<<endl;
    cin>> iLength;

    ptr = new int[iLength]; 

    cout<<"Enter the number of elements you want store in an array:"<<endl;

    for(i = 0; i <iLength; i++)
    {
        cin >> ptr[i];
    }

    iRet = MaxDigit(ptr, iLength);

    cout<<"The maximum digit is: "<<iRet<<endl;

    Ret = MinDigit(ptr, iLength);

    cout<<"The minimun digit is: "<<Ret<<endl;





     delete[] ptr;





    return 0;
}