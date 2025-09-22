// 04_ctor_dtor_order/main.cpp
#include <iostream>
using namespace std;

class Base  {
public:
    Base(){ cout << "Base()\n"; }
    ~Base(){ cout << "~Base()\n"; }
};
class Member{
public:
    Member(){ cout << "Member()\n";}
    ~Member(){ cout << "~Member()\n";}
};
class Derived : public Base {
    Member m;
public:
    Derived(){ cout << "Derived()\n"; }
    ~Derived(){ cout << "~Derived()\n"; }
};

int main(){
    cout << "==== 构/析顺序：基类→成员→派生；析构反向 ====" << endl;
    { Derived d; }
}
