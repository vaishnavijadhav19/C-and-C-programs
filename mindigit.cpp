// Find the smallest digit from the given integer

#include <iostream>
using namespace std;

int MinDigit(int iValue)
{
    int iDigit = 0;
    int iMin = 9;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iValue = iValue / 10;

    }
    return iMin;

}

int main()
{ 

    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:"<<endl;
    cin>> iNo;

    iRet = MinDigit(iNo);

    cout<<"The samllest number from the given integer is:"<<iRet<<endl;




    return 0;
}