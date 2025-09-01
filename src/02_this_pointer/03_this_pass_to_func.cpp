#include <iostream>
using namespace std;

class A {
    int x{};
public:
    void set(int v){ x = v; }
    void show() const { cout << "x="<<x<<"\n"; }
    void callFriend();
};
void func(A* p){ cout << "func got: "; p->show(); } //注意，这谁个外部函数！！！
void A::callFriend(){ func(this); }

int main(){
    A a; a.set(42); a.callFriend();
}
