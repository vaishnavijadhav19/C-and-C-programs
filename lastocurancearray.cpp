#include <iostream>
using namespace std;


int lastoccurance(int Arr[], int iSize, int iVal)
{
        iCnt = 0;

        for(iCnt = iSize - 1; iCnt>= 0; iCnt--)
        {
            if(Arr[iCnt]==iVal)
            {
                break;
            }
        }

        return iCnt;
}
int main()
{

    int *ptr = nullptr;
     int iNo = 0;
     int iLength = 0;
     int i= 0
     int Ret = 0;

     cout<<"enter the number of digits you wish to put in array:"<<endl;
     cin >> iLength;

     ptr = new int[iLength];

     cout<<"Enter the elements you wish to add in array:"<<endl;

     for(i = 0; i < iLength; i++)
     {
        cin >> ptr[i];
     }


     Ret = lastoccurance(ptr, iLength, iNo)

     cout<<"the last occurance of"<<iNo<<"is:"<<Ret<<endl;


        delete[] ptr; 




    return 0;

}