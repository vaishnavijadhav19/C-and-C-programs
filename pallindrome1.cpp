// Find if the number is  pallindrome


#include <iostream>
using namespace std;


int CheckPallindrome(int iValue)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iValue;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iRev = (iRev * 10) + iDigit;
        iValue = iValue / 10;

    }
    return iRev == iTemp;

}
int main()
{
    int iNo =  0;
    bool bRet = false;


    cout<<"Enter the number:"<<endl;
    cin>> iNo;

    bRet = CheckPallindrome(iNo);

    if(bRet == true)
    {
        cout<<"The give number is pallindrome"<<endl;
    }
    else
    {
        cout<<"The given number is not pallindrome"<<endl;
    }




    return 0;
}