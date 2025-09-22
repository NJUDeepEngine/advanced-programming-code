// 01_protected/main.cpp
#include <iostream>
using namespace std;

class Base {
protected:
    int px = 42;
public:
    void pub() { cout << "Base::pub, px=" << px << "\n"; }
};

class Derived : public Base {
public:
    void touch() { px += 1; cout << "Derived can see px=" << px << "\n"; }
};

int main() {
    cout << "==== protected 访问控制 ====" << endl;
    Derived d; 
    d.touch();
    d.pub();
    // d.px; // ❌ 外部不可访问
}
