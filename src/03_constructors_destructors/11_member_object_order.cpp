#include <iostream>
using namespace std;

struct A { A(){ cout<<"A()\n"; } ~A(){ cout<<"~A()\n"; } };
struct B { B(){ cout<<"B()\n"; } ~B(){ cout<<"~B()\n"; } };

struct Holder {
    A a;
    B b;
    Holder(){ cout<<"Holder()\n"; }
    ~Holder(){ cout<<"~Holder()\n"; }
};

int main(){ Holder h; }
