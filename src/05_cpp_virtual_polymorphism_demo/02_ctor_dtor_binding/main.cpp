
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A::A(), calling f -> ";
        f();
    }
    virtual void f() { cout << "A::f\n"; }
    virtual ~A()
    {
        cout << "A::~A(), calling f -> ";
        f();
    }
};

class B : public A
{
public:
    B() {}
    ~B() override
    {
        cout << "in B's destructor, calling f -> ";
        f();
    }
    void f() override { cout << "B::f\n"; }
};

int main()
{
    B b;
}
