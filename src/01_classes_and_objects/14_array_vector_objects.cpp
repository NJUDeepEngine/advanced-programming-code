#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

struct Hero {
    string name; int lv;
    Hero(string n,int l): name(move(n)), lv(l) {}
    string str() const { return name+" (Lv."+to_string(lv)+")"; }
};

int main(){
    Hero team[] = { {"Alice",10}, {"Bob",12}, {"Cindy",8} }; //C++11新特性，允许直接使用花括号语法初始化对象数组
    for (auto& h : team) cout << h.str() << "\n"; //aut&h 自动推导出h的类型为Hero&，引用
    vector<Hero> party; party.emplace_back("Duke",15); party.emplace_back("Erin",9); //C++11新特性，直接构造
    for (auto& h : party) cout << h.str() << "\n";
}
