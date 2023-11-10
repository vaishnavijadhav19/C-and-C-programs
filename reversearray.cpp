#include <iostream>
using namespace std;

void ReverseString(int Arr[])
{
     int iCnt = 0;

     for(iCnt = 4; iCnt>=0; iCnt--)
     {
         cout<<Arr[iCnt]<<endl;

     }
}
int main()
{
    int arr[5] = {1,2,3,4,5};

    ReverseString(arr);


    return 0;
}