#include <iostream>
using namespace std;

void CheckNum(int iNum)
{
    

    if( iNum % 5 == 0)
    {
         
          cout << "Divisible by 5" << endl;  
    }
    else
    {
    
           cout << "Not divisible by 5" << endl;
    }
   

}

int main()
{
    int iNo = 0;
    
    cout << " Enter the number:" <<endl;
    cin >> iNo;
    
    CheckNum(iNo);


  return 0;
}