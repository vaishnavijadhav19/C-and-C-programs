// reverse the digits on the given number

#include <iostream>
using namespace std;


void DisplayReverseDigits(int iValue)
{
    int iDigit = 0;

    while(iValue != 0)
    {
        iDigit = iValue  % 10;
        iValue = iValue / 10;
        cout<<iDigit;

    }
    
}
int main()
{
   int iNo = 0;

   cout<<"Enter the number:"<<endl;
   cin>> iNo;
   
   cout<<"The reverse of the given digit is:"<<endl;
   DisplayReverseDigits(iNo);



    return 0;
}