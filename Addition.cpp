#include <iostream>
using namespace std;


int Addition(int No1, int No2)
{
     int Ans = 0;

     Ans =(No1 + No2);

     return Ans;


}


int main()
{
      int a = 0;
      int b = 0;
      int Sol = 0;

    
      
      cout<< "Enter the first number: : "<< a << endl;
      cin >> a;

      cout<< "Enter the second number: : "<< b << endl;
      cin >> b;

     Sol = Addition(a,b);

     cout<< "The addition of two numbers is:" << Sol <<endl;


    return 0;
}