// 02_hiding_using/main.cpp
#include <iostream>
using namespace std;

class A {
public:
    void f(){ cout << "A::f()\n"; }
    void f(int){ cout << "A::f(int)\n"; }
};
class B : public A {
public:
    using A::f;
    void f(double){ cout << "B::f(double)\n"; }
};

int main(){
    cout << "==== 名字隐藏与 using ====" << endl;
    B b;
    b.f();
    b.f(1);
    b.f(1.0);
    b.A::f();
}
