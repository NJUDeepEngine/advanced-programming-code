#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Engine { int hp_; public: explicit Engine(int hp): hp_(hp){} int hp() const {return hp_;} };
class Car {
    Engine eng_;
    string model_;
public:
    Car(string m,int hp): eng_(hp), model_(move(m)) {}
    void info() const { cout<<"Car("<<model_<<") "<<eng_.hp()<<"hp\n"; }
};

int main(){ Car c("Sedan", 180); c.info(); }
