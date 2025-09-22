
#include <iostream>
using namespace std;

class I_A
{
public:
    virtual ~I_A() = default;
    virtual void f(int) = 0;
};
class A : public I_A
{
    int i{0}, j{0};

public:
    void f(int x) override
    {
        i = x;
        j = x * 2;
        cout << i << "," << j << "\n";
    }
};
void func(I_A *p)
{
    p->f(2);
    // *((int *)p) = 1;
    // *((int *)p + 1) = 2;
    // p->f(2);
}

int main()
{
    A a;
    func(&a);
}
