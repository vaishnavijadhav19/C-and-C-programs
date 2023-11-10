#include <iostream>
using namespace std;

class Hello
{
    int a;
    int b;

  public:
      Hello(int c, int d)
      {

          a = c;
          b = d;
      }

    int Fun()
    {

        return a;
    }
    int Gun()
    {

        return b;
    }

};

int main()
{

    Hello obj( 4, 5);
    obj.Fun();

    Hello obj2(7,8);
    obj2.Gun();


    //cout<< "Value of b: " << obj2.Gun() << endl;
     cout << obj2.Gun() << endl;



    return 0;

}
