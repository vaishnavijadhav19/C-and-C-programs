//display even digits

#include <iostream>
using namespace std;

void DisplayEvenDigits(int iValue)
{
    int iDigit = 0;

    while(iValue !=0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
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

    cout<<" The even digits are:"<<endl;
    DisplayEvenDigits(iNo);


    return 0;
}