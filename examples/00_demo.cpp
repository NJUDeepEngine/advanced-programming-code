#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Counter {
    inline static int g_ = 0; // 静态数据成员
    int id;
    Counter() : id(++g_) { cout << "Counter() id="<<id<<"\n"; }
    ~Counter(){ cout << "~Counter() id="<<id<<"\n"; }
};

class Point {
    int x_, y_;
public:
    Point(int x=0,int y=0): x_(x), y_(y) {}
    Point& moveX(int dx){ x_+=dx; return *this; } // 链式：返回 *this
    Point& moveY(int dy){ y_+=dy; return *this; }
    string str() const { return "("+to_string(x_)+","+to_string(y_)+")"; }
};

class Box {
    int w_, h_;
public:
    Box(int w, int h): w_(w), h_(h) {}
    int area() const { return w_*h_; }    // const 成员
    Box& scale(int k){ w_*=k; h_*=k; return *this; } // 非 const
};

int main(){
    cout << "== static member ==\n";
    Counter a,b;

    cout << "\n== this & chaining ==\n";
    Point p(1,1);
    cout << p.moveX(2).moveY(3).str() << "\n";

    cout << "\n== const member ==\n";
    const Box cb(2,3);
    cout << "area=" << cb.area() << "\n";

    cout << "\n== vector of objects ==\n";
    vector<Point> ps; ps.emplace_back(0,0); ps.emplace_back(2,2);
    for (auto& q: ps) cout << q.str() << "\n";
}
