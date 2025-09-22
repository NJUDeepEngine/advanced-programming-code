
#include <iostream>
using namespace std;

class A
{
public:
    virtual void f(int) { cout << "[Buggy] A::f(int)\n"; }
    virtual ~A() = default;
};
class B : public A
{
public:
    void f(double) { cout << "[Buggy] B::f(double)\n"; } // 未覆盖
};

int main()
{
    A *p = new B;
    p->f(42);
    B b;
    b.f(42);
    delete p;
    cout << "提示：把 B::f(double) 改成 'void f(double) override' 会报错。\n";
}
