#include <iostream>
using namespace std;

void IterativeStatement(int iNum)
{
    

   

    int iCnt = 1;
    while(iCnt<=iNum)
    {
        cout << " Hello youu!!!" << endl;
        iCnt++;
    }

}

int main()
{

    int iNo = 0;

    cout << " How many time we you want the statement to be printed ?";
    cin >> iNo;

    IterativeStatement(iNo);



    return 0;
}



