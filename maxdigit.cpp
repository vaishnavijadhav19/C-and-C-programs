// find out max digit from the given integer

#include <iostream>
using namespace std;

int MaxDigit(int iValue)
{
    int iDigit = 0;
    int iMax = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iValue = iValue / 10;
    }
    return iMax;

}

int main()
{
    int iNo = 0;
    int iRet = 0;
    
    cout<<"Enter the number"<<endl;
    cin >> iNo;


    iRet = MaxDigit(iNo);

    cout<<"The maximum number from the given integer is:"<<iRet<<endl;
    





    return 0;
}