// addition from 1 to 5


#include <iostream>
using namespace std;

int Summation()
{
     int iSum = 0;
     int iCnt = 0;

     for(iCnt = 1; iCnt<=5 ; iCnt++)
     {
          iSum = iSum + iCnt;

     }
       
       return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    cout << " The summation is :" <<  iRet <<endl;

     


    return 0;
}