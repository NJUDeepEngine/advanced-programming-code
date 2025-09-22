
#include <iostream>
using namespace std;

class A
{
public:
    virtual void f(int) { cout << "[FixedOverride] A::f(int)\n"; }
    virtual ~A() = default;
};
class B : public A
{
public:
    void f(int) override { cout << "[FixedOverride] B::f(int)\n"; }
};

int main()
{
    A *p = new B;
    p->f(42);
    B b;
    b.f(42);
    delete p;
}
