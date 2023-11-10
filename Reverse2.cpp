// Take the number from user and reverse its sequence from highest to lowest.


#include <iostream>
using namespace std;

void DisplayReverse(int iNum)
{
     int iCnt = 0;

     iCnt = iNum;
     while(iCnt>= 1)
     {
        cout << iCnt <<endl;
        iCnt--;
     }
}


int main()
{
    int iNo = 0;


    cout << " Enter the number:" << endl;
    cin >> iNo;


    cout << " Reverse sequence of the number provided by user is:" <<endl;
    DisplayReverse(iNo);

    return 0;

}