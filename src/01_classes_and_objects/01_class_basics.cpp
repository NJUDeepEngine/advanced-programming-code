#include <iostream>
#include <string>
using namespace std;

class Student {
    string name_;
    int id_{};
public:
    void setName(const string& s){ name_ = s; }
    void setId(int id){ if(id>0) id_=id; }
    const string& name() const { return name_; }
    int id() const { return id_; }
    void introduce() const { cout<<"I am "<<name_<<" (ID="<<id_<<")\n"; }
};

int main(){
    Student s; s.setName("Alice"); s.setId(1001); s.introduce();
}
