// Take the number from user and find the non factors and add them

#include <iostream>
using namespace std;

int SumNonFactors(int iNum)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
        if((iNum % iCnt != 0))
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


    cout<< " Enter the number:" <<endl;
    cin >> iNo;

    iRet = SumNonFactors(iNo);

    cout << " The sum of non-factors is:"<< iRet<<endl;


    return 0;
}

