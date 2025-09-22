
#include <iostream>
using namespace std;

class A1
{
public:
    ~A1() { cout << "A1 dtor\n"; }
};
class B1 : public A1
{
public:
    ~B1() { cout << "B1 dtor\n"; }
};

class A2
{
public:
    virtual ~A2() { cout << "A2 dtor\n"; }
};
class B2 : public A2
{
public:
    ~B2() override { cout << "B2 dtor\n"; }
};

int main()
{
    cout << "[Non-virtual base dtor]\n";
    A1 *p1 = new B1;
    delete p1;
    cout << "[Virtual base dtor]\n";
    A2 *p2 = new B2;
    delete p2;
}
