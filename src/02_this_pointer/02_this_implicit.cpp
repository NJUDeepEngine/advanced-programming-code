#include <iostream>
using namespace std;

class A {
    int x{}; //C++11的初始化方法，相当于int x=0;
public:
    void set(int v){ x = v; } // 实际为 this->x = v;
    void show() const { cout << "x="<<x<<"\n"; } //常量成员函数
};

int main(){
    A a,b; a.set(10); b.set(20); a.show(); b.show();
}
