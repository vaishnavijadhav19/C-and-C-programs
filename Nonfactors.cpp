// Take the number from user and find the non factors of that number

#include <iostream>
using namespace std;

void DisplayNonFactors(int iNum)
{
     int iCnt = 0;

     for(iCnt = 1; iCnt <= iNum; iCnt++)
     {
        if((iNum % iCnt != 0))
        {
            cout << iCnt <<endl;
        }
        
     }
}



int main()
{
    int iNo = 0;
    int iRet = 0;

    cout << "Enter the number:" <<endl;
    cin >> iNo;

     cout << "The non factors are:" <<endl;
   
    DisplayNonFactors(iNo);

   
    
    return 0;
}



     

