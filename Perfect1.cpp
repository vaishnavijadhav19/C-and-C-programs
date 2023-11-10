// Take the number from user and find its factors, add them and then check whether the number is a perfect number or not.


#include <iostream>
using namespace std;

int SumFactor(int iVal)
{
      int iCnt = 0;
      int iSum = 0;

      for(iCnt =1 ; iCnt<= (iVal/2); iCnt++)
      {
           if((iVal % iCnt == 0))
           {
                 iSum = iSum + iCnt;

           }

           
      }
        return iSum;


}

bool CheckPerfect(int iNum)
{
     int iAns = 0;

     iAns = SumFactor(iNum);


     if(iAns == iNum)
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

    cout<< " Enter the number:" <<endl;
    cin >> iNo;

    bRet = CheckPerfect(iNo);

    if(bRet == true)
    {
        cout << " The given number is perfect number"<< endl;
    }
    else
    {
        cout<< " The number is not a perfect number" << endl;
    }


    return 0;

}


