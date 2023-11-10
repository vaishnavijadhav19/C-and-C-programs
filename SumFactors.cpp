// Take the number from user and find its factors and add them


#include <iostream>
using namespace std;

int SumFactors(int iNum)
{
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 1; iCnt <= iNum; iCnt++)
     {
         if((iNum % iCnt == 0))
         {
            iSum = iSum + iCnt;
         }

     }

      return iSum;

}



int main()
{
    int iNo = 0;
    int iRet = 0;

    cout << " Enter the number yout want to find factors of:" << endl;
    cin >> iNo;

    iRet = SumFactors(iNo);

    cout << " The sum of the factors of the given number is:"<< iRet <<endl;

    return 0;
}


