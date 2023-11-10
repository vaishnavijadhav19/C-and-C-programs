#include <iostream>
using namespace std;

// data type fuctionname()
int Addition(int value1, int value2)
{
     int Ans = 0 ;
     Ans = value1 + value2;
     return Ans;


}


int main()
{
  int iNO = 0;
  int iNO2 = 0;

  int Result = 0;



  cout<<"Enter first number:"<<endl;
  cin>> iNO;

  cout<<"Enter second number:"<<endl;
  cin>> iNO2;

 Result = Addition(iNO, iNO2);

 cout<<"The summation is:"<<Result<<endl;
 //cout<<Result<<endl;


   
  
   
   return 0;

}

