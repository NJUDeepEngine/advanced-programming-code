#include <iostream>
#include <string>
#include <utility>
using namespace std;

class SecretBox {
    string s_="42";
public:
    SecretBox()=default;
    explicit SecretBox(string s): s_(move(s)) {} //move是将s的所有权转移给s_，s变为空，s_变为s的值
    friend ostream& operator<<(ostream& os, const SecretBox& b); //友元函数
};
ostream& operator<<(ostream& os, const SecretBox& b){
    return os<<"SecretBox{secret="<<b.s_<<"}";
}
int main(){ SecretBox a, b("xyz"); cout<<a<<"\n"<<b<<"\n"; }
