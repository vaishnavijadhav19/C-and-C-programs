// Take the number from user and print the table of it


#include <iostream>
using namespace std;

void Table(int iNum)
{
     int iCnt = 0;

     for(iCnt = 1; iCnt <= 10; iCnt++)
     {
          cout<< (iNum * iCnt )<< endl;
     }

     cout<<"_________________________________"<< iNum<< endl;
}


int main()
{
    int iNo = 0;
    
    cout << " Enter the number :" << endl;
    cin >> iNo;

 cout << " The table of"<<" " << iNo << " is " << endl;
    
    Table(iNo);

    

     return 0;
}