#include <iostream>
using namespace std;

int CheckDivisibility(int iNum)
{
    int iAns;
    iAns = iNum % 8;
    if(iAns != 0)
    {
       return 1;
    }
    else
    {
         return 0;
    }

}

int main()
{
     int iNo = 0;
     bool iRet = false;


     cout <<"enter the number: " << endl;
     cin >> iNo;

     iRet = CheckDivisibility(iNo);
     if(iRet == 0)
     {
           cout <<"divisible by 8" <<endl;

     }
     else
     {
          cout <<" not divisible by 8" <<endl;
     }








  return 0;
}