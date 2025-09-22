
#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A() = default;
};
class B : public A
{
public:
    void g() { cout << "B::g\n"; }
};
class C : public A
{
};

void call(A *p)
{
    cout << dynamic_cast<B *>(p);
    if (B *q = dynamic_cast<B *>(p))
        q->g();
    else
        cout << "not a B\n";
}

int main()
{
    B b;
    C c;
    call(&b);
    call(&c);
}
