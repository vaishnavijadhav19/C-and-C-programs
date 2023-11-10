#include <iostream>
using namespace std;

class Hello
{
    int a;

public:

    Hello(int b)
    {
        a = b;

    }

    Hello(Hello &t)
    {
        a =t.a;
    }

    void Display()
    {
        cout<< " The number is :"<< a <<endl;
    }


};



int main()
{
    Hello obj(100);

    Hello obj2 = obj;

    Hello obj3(obj);


    obj.Display();
     

    obj2.Display();
    

    obj3.Display();
     

     







    return 0;
}

/*You have a class Hello with an integer member a.

You defined a constructor Hello(int b) which initializes a with the value b.

You defined a copy constructor Hello(Hello &t) which creates a new object by copying the value of a from the object t.

You have a member function Display() that prints the value of a.

In the main() function:

You create an object obj and initialize it with the value 100 using the constructor Hello(int b).
You create an object obj2 and initialize it as a copy of obj using the copy constructor Hello(Hello &t).
You create an object obj3 and initialize it as a copy of obj using the copy constructor Hello(Hello &t).
You then call the Display() function for each object and print the value of a.*/
