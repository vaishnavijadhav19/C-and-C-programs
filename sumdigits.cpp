// Take the number from user and sum the digits in it

#include <iostream>
using namespace std;

int SumDigits(int iValue)
{
     int iCnt = 0;
     int iDigit = 0;
     int iSum = 0;

     for(iCnt = 0; iValue != 0; iCnt++)
     {
          iDigit = iValue % 10;
          iValue = iValue/ 10;
          iSum = iSum + iDigit;
     }
     return iSum;
     
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:"<<endl;
    cin>> iNo;

    iRet = SumDigits(iNo);

    cout<<"The summation of the digits in the given interger is :"<<iRet<<endl;


    return 0;
}

