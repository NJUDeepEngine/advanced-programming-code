#include <iostream>
using namespace std;

struct Order {
    int a = 1;
    int b = 2;
    Order() : b(20), a(10) { // 实际按声明顺序：先 a 再 b
    // Order() : a(20), b(10) { // 实际按声明顺序：先 a 再 b
        cout << "a="<<a<<", b="<<b<<"\n";
    }
};
int main(){ Order o; }
