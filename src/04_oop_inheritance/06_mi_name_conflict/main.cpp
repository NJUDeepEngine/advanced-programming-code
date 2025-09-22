// 06_mi_name_conflict/main.cpp
#include <iostream>
using namespace std;

class A {
public:
    void f(){ cout << "A::f\n"; }
};
class B {
public:
    void f(){ cout << "B::f\n"; }
};
class C : public A, public B {
public:
    void call(){
        A::f();
        B::f();
    }
};

int main(){
    cout << "==== 多继承命名冲突与限定 ====" << endl;
    C c; c.call();
    c.A::f(); c.B::f();
}
