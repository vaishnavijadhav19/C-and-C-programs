// Take the number from user and count the number of digits in it

#include <iostream>
using namespace std;


int CountDigits(int iValue)
{
    int iCnt;
    int iDigit = 0;

    for( iCnt = 0; iValue != 0; iCnt++)
    {
        iDigit = iValue % 10;
        iValue = iValue/10;

    }
    return iCnt;
}
int main()
{

     int iNo = 0;
     int iRet = 0;

     cout<<"Enter the number:"<<endl;
     cin>> iNo;
    
    iRet = CountDigits(iNo);

    cout<<"The number of digits in the given integer are:"<< iRet<<endl;
    

    return 0;
}
