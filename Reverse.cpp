// Take the number from user and reverse its sequence from highest to lowest.


#include <iostream>
using namespace std;

void DisplayReverse(int iNum)
{
    int iCnt = 0;

    for(iCnt = iNum; iCnt >=1; iCnt--)
    {
        cout << iCnt <<endl;
    }
}


int main()
{
     int iNo = 0;

     cout << " enter the number" << endl;
     cin >> iNo;

    cout << " Reverse sequence of the number is:"<<endl;
    DisplayReverse(iNo);



    return 0;
}





