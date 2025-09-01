#include <iostream>
using namespace std;

class A {
    int x{}, y{};
public:
    A(){ cout << "A()\n"; }
    A(int x1){ x=x1; cout << "A(int)\n"; }
    A(int x1,int y1){ x=x1; y=y1; cout << "A(int,int)\n"; }
    void print() const { cout << "("<<x<<","<<y<<")\n"; }
};

int main(){
    A a1; A a2(5); A a3(3,4);
    a1.print(); a2.print(); a3.print();
}
