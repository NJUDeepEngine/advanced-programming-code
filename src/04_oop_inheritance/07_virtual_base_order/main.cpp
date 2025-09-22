// 07_virtual_base_order/main.cpp
#include <iostream>
using namespace std;

class A {
    int v{0};
public:
    A(int v): v(v) { cout << "A("<<v<<")\n"; }
    void print_v(const char* who = "A") const { cout << who << " sees A.v=" << v << "\n"; }
};
class B : virtual public A {
public:
    B(): A(1){ cout << "B()\n"; print_v("B"); }
};
class C : virtual public A {
public:
    C(): A(2){ cout << "C()\n"; print_v("C"); }
};
class D : public B, public C {
public:
    D(): A(3){ cout << "D()\n"; print_v("D"); }
};

int main(){
    cout << "==== 虚基类：由最新派生类构造 ====" << endl;
    cout << "==== create D d ====" << endl;
    D d;
    d.print_v("main");
    cout << "==== create B b ====" << endl;
    B b;
    b.print_v("main");
}
