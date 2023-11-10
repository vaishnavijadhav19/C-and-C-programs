// Take the number from user and print its odd factors



#include <iostream>
using namespace std;


void DisplayFactors(int iValue)
{
     int iCnt;

     for(iCnt = 1; iCnt<= iValue; iCnt++)
     {
          if((iValue % iCnt == 0 && iValue % 2 != 0))
          {
               cout<<iCnt<<endl;
          }
     }
}
int main()
{
      int iNo = 0;


      cout<<"Enter the number:"<<endl;
      cin>> iNo;
      
      cout<<"The odd factors are:"<<endl;
      DisplayFactors(iNo);




     return 0;
}
