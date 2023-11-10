// count the number of even digits in an integer


#include <iostream>
using namespace std;

int CountEvenDigits(int iValue)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iValue = iValue /10;
    }

    return iCnt;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:"<<endl;
    cin >> iNo;

    iRet = CountEvenDigits(iNo);

    cout<<"The number of even digits in the given integer is:"<< iRet<<endl;

    return 0;
}