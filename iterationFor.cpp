#include <iostream>
using namespace std;

void DisplayStatement(int iNum)
{
    int iCnt = 0;
      

     for(iCnt = 1; iCnt<= iNum ; iCnt++)
     {
          cout << " Hello Coco" << endl;

     }



}

int main()
{
    int iNo = 0;

    cout << " How many times you want it to be printed :" << endl;
    cin >> iNo;

    DisplayStatement(iNo);



    return 0;
}