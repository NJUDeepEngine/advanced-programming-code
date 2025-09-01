#include <iostream>
using namespace std;

class B {
    int x;
    const int y;
    int& z;
public:
    B(int v) : x(v), y(7), z(x) {
        cout << "x="<<x<<", y="<<y<<", z="<<z<<"\n";
    }

    // B(int v) {
    //  /   x = v;        // 可以
    //     y = 7;    // 错误！常量不能赋值
    //     z = x;    // 错误！引用不能重新绑定
    // }

    void bump(){ x++; cout << "x="<<x<<", z(引用x)="<<z<<"\n"; }
};

int main(){ B b(10); b.bump(); }
