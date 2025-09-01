#include <iostream>
using namespace std;

class Counter {
    inline static int g_ = 0;
    int id_;
public:
    Counter(): id_(++g_) {}
    static int howMany(){ return g_; }
    int id() const { return id_; }
};

int main(){
    cout << "before: " << Counter::howMany() << "\n";
    Counter a,b,c;
    cout << a.id()<<","<<b.id()<<","<<c.id()<<"\n";
    cout << "after: " << Counter::howMany() << "\n";
}
