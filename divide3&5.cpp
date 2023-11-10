#include <iostream>
using namespace std;

bool DivisibleBy3And5(int iNum)
{
    if(iNum % 3== 0) && (iNum % 5== 0)
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
    
    cout << " Write the number you want to check" << endl;
    cin >> iNo;

    bRet = DivisibleBy3And5(iNo);

     if(bRet == true)
     {

        cout<< " the number is divisible by 3 and 5" << endl;

     }
     else
     {
        cout<< " number is not dividible by 3 and 5" << endl;
     }
     





  return 0;
}