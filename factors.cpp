// Take the number from user and find its factors


#include <iostream>
using namespace std;

void DisplayFactors(int iNum)
{
     int iCnt = 0;

     for(iCnt = 1; iCnt<= iNum; iCnt++)
     {
        if((iNum % iCnt == 0))
        {
            cout<<iCnt<<endl;

        }
        
     }

}


int main()
{
     int iNo = 0;
     int iRet = 0;

     cout <<" Enter the number whos factors you want to find out:" << endl;
     cin >> iNo;


     cout<<" The factors are: "  <<endl;

     DisplayFactors(iNo);

    
    


    return 0;
}




     




