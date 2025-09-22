// 05_copy_assign/main.cpp
#include <iostream>
using namespace std;

class A {
    int x{0};
public:
    A() = default;
    A(int v): x(v) {}
    A(const A& o){ x = o.x; cout << "A copy, x="<<x<<"\n"; }
    A& operator=(const A& o){ 
        if(this!=&o){ x=o.x; cout << "A assign, x="<<x<<"\n"; }
        return *this;
    }
};
class B : public A {
    int y{0};
public:
    B() = default;
    B(int vx,int vy): A(vx), y(vy) {}
    B(const B& o): A(o), y(o.y){ cout << "B copy, y="<<y<<"\n"; }
    B& operator=(const B& o){
        if(this!=&o){
            A::operator=(o);
            y = o.y;
            cout << "B assign, y="<<y<<"\n";
        }
        return *this;
    }
};

int main(){
    cout << "==== 拷贝与赋值：显式调用基类操作 ====" << endl;
    B b1(1,2), b2(3,4);
    B b3 = b1;
    b1 = b2;
    cout << "done\n";
}
