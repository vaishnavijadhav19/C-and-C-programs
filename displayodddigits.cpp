//Display odd digits


#include <iostream>
using namespace std;


void DisplayOddDigits(int iValue)
{
    int iDigit = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 != 0)
        {
            cout<<iDigit<<endl;
        }
        iValue = iValue / 10;
    }

}
int main()
{
   int iNo = 0;

   cout<<"Enter the number:"<<endl;
   cin>> iNo;

   cout<<"The odd digits in the given integer:"<<endl;

   DisplayOddDigits(iNo);

   




    return 0;
}
