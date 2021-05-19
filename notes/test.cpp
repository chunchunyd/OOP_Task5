/*

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class F1
{
public:
    F1()
    {
        cout << "F1" << endl;
    }
    ~F1()
    {
        cout << "~F1" << endl;
    }
};
class F2
{
public:
    F2()
    {
        cout << "F2" << endl;
    }
    ~F2()
    {
        cout << "~F2" << endl;
    }
};
class A1
{
public:
    A1()
    {
        cout << "A1" << endl;
    }
    ~A1()
    {
        cout << "~A1" << endl;
    }
};
class A2
{
public:
    A2()
    {
        cout << "A2" << endl;
    }
    ~A2()
    {
        cout << "~A2" << endl;
    }
};
class B:public F1,public F2
{
public:
    A1 a1;
    A2 a2;
    B()
    {
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
};

int main()
{
    B b;
    return 0;
}
/*
结果：
F1
F2
A1
A2
B
~B
~A2
~A1
~F2
~F1
*/