#include <iostream>
using namespace std;


class Arithmetic
{
    public:
      
         int iNo;
         int iNo2;

    Arithmetic(int a, int b): iNo(a), iNo2(b)
    {
        
    }

    ~Arithmetic()
    {

    }

    Addition()
    {
        return iNo + iNo2;
    }
    Subtraction()
    {
        return iNo - iNo2;
    }
    

};

int main()
{
    Arithmetic myobj(20,10);

    
    int Ret1 = 0;
    int Ret2 = 0;

    

    Ret1 = myobj.Addition();
    Ret2 = myobj.Subtraction();

    cout<<"The sum is:"<<Ret1<<endl;
    cout<<"The difference is:"<<Ret2<<endl;




    return 0;
}