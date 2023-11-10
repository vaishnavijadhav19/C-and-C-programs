// Take the number from user and perform addition of digits upto that number

#include <iostream>
using namespace std;

int Multiplication(int iVal)
{
      int iCnt = 0;
      int iMul = 1;

      for(iCnt = 1; iCnt<= iVal; iCnt++)
      {
          iMul = iMul* (iCnt);

      }

      return iMul;



}

int main()
{
     int iNo = 0;

     int iRet = 0;


     cout <<" Enter the number:" <<endl;
     cin >> iNo;

     iRet = Multiplication(iNo);

     cout << " The multiplication of the digits till"<<" "<< iNo << " "<< "is" << " "<<  iRet <<endl;





     return 0;
}




