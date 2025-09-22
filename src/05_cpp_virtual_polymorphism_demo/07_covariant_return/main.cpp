
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() = default;
};
class Der : public Base
{
};

class MakerA
{
public:
    virtual Base *make()
    {
        cout << "MakerA::make->Base*\n";
        return new Base;
    }
};
class MakerB : public MakerA
{
public:
    Der *make() override
    {
        cout << "MakerB::make->Der*\n";
        return new Der;
    }
};

int main()
{
    MakerA *m = new MakerB;
    Base *x = m->make();
    delete x;
    delete m;
}
