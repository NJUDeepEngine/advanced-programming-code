
#include <iostream>
using namespace std;

class A
{
public:
    virtual void f() { cout << "A::f\n"; } // 虚 → 可动态绑定
    void g() { cout << "A::g\n"; }         // 非虚 → 静态绑定
};

class B : public A
{
public:
    void f() override { cout << "B::f\n"; } // 覆盖
    void g() { cout << "B::g\n"; }          // 隐藏（非虚）
};

int main()
{
    A a;
    B b;
    a.f();
    b.f();
    A *p = &b;
    A &r = b;
    p->f();
    r.f();
    p->g();
    r.g();
}
