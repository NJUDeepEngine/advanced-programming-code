#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    size_t n{};
    char* p{};
public:
    Buffer() = default; //C++11新特性，相当于Buffer() {}
    explicit Buffer(size_t n): n(n), p(n?new char[n]:nullptr) { cout<<"ctor n="<<n<<"\n"; }
    Buffer(const Buffer& other): n(other.n), p(n?new char[n]:nullptr) {
        cout<<"copy ctor n="<<n<<"\n";
        if(p) memcpy(p, other.p, n);
    }
    Buffer& operator=(const Buffer& other){
        cout<<"copy assign\n";
        if(this==&other) return *this;
        char* np = other.n?new char[other.n]:nullptr;
        if(np && other.p) memcpy(np, other.p, other.n);
        delete[] p; p=np; n=other.n; return *this;
    }
    ~Buffer(){ cout<<"dtor n="<<n<<"\n"; delete[] p; }
    
    // 添加一个公共方法来获取大小信息
    size_t size() const { return n; }
};

int main(){
    Buffer a(8);
    Buffer b = a; // copy ctor
    Buffer c;
    c = a;        // copy assign
    cout << "c: n=" << c.size() << endl;
    cout << "a: n=" << a.size() << endl;
    cout << "b: n=" << b.size() << endl;
}
