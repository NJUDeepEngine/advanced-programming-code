// 03_inheritance_modes/main.cpp
#include <iostream>
using namespace std;

class A {
public:    void pub() { cout << "A::pub\n"; }
protected: void pro() { cout << "A::pro\n"; }
private:   void pri() { cout << "A::pri\n"; }
};

class PubD : public A {
public: void test(){ pub(); pro(); /* pri(); */ } };

class ProD : protected A {
public: void test(){ pub(); pro(); /* pri(); */ } };

class PriD : private A {
public: void test(){ pub(); pro(); /* pri(); */ } };

int main(){
    cout << "==== 继承方式访问差异 ====" << endl;
    cout << "==== PubD ====" << endl;
    PubD p;  p.test();  p.pub();
    cout << "==== ProD ====" << endl;
    ProD q;  q.test();   /* q.pub(); */
    cout << "==== PriD ====" << endl;
    PriD r;  r.test();  /* r.pub(); */
}
