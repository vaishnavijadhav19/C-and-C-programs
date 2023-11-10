// Take the number from user and find its factors, add them and then check whether the number is a perfect number or not.


#include <iostream>
using namespace std;

bool CheckPerfect(int iNum)
{
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 1; iCnt <= (iNum/2); iCnt++)
     {
         if((iNum % iCnt == 0))
         {
             iSum = iSum + iCnt;
         }
     }

     if(iNum == iSum)
     {
        return true;
     }
     else
     {
        return false;
     }


}


int main()
{
    int iNo = 0;
    bool bRet = false;


    cout << " Enter the number:" <<endl;
    cin >> iNo;

     bRet = CheckPerfect(iNo);

     if(bRet == true)
     {
        cout << " The number is a perfect number" <<endl;
     }
     else
     {
        cout << " The number is not the perfect number" <<endl;
     }



    return 0;
}