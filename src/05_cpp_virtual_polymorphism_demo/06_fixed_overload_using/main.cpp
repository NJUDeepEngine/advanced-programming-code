
#include <iostream>
using namespace std;

class A
{
public:
    virtual void f(int) { cout << "[FixedOverloadUsing] A::f(int)\n"; }
    virtual ~A() = default;
};
class B : public A
{
public:
    using A::f;
    // void f(int) override { cout << "[FixedOverloadUsing] B::f(int)\n"; }
    void f(double) { cout << "[FixedOverloadUsing] B::f(double)\n"; }
};

int main()
{
    B b;
    A *p = &b;
    p->f(42);
    b.f(42);
    b.f(3.14);
}
