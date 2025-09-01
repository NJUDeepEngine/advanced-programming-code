#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* data_;
public:
    explicit String(const char* s){
        data_ = new char[strlen(s)+1];
        strcpy(data_, s);
        cout << "构造: " << data_ << "\n";
    }
    ~String(){
        cout << "析构: " << (data_?data_:"<null>") << "\n";
        delete[] data_;
        data_ = nullptr;
    }
    const char* c_str() const { return data_; }
};

int main(){
    String s1("hello");
    { String s2("world"); } // { } 表示为一个代码块，当一个代码块结束时，会自动调用该代码块中所有对象的析构函数
    cout << s1.c_str() << "\n";
}
