// Take the number from user and perform addition of digits upto that number

#include <iostream>
using namespace std;

int Summation(int iVal)
{
      int iCnt = 0;
      int iSum = 0;

      for(iCnt = 1; iCnt<= iVal; iCnt++)
      {
          iSum = iSum + iCnt;

      }

      return iSum;



}

int main()
{
     int iNo = 0;

     int iRet = 0;


     cout <<" Enter the number:" <<endl;
     cin >> iNo;

     iRet = Summation(iNo);

     cout << " The summation of the digits till"<<" "<< iNo << " "<< "is" << " "<<  iRet <<endl;





     return 0;
}




