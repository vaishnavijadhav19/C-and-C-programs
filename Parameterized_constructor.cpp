#include <iostream>
using namespace std;

class Param
{
    int a;
    int b;

public:
    Param(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void Addition()
    {
        cout << "The numbers are (" << a << ", " << b << ")" << endl;
    }
};

int main()
{
    Param obj(4, 5);
    obj.Addition();

    return 0;
}
