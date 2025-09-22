// 08_aggregation_composition/main.cpp
#include <iostream>
using namespace std;

class Engine {
public:
    void start(){ cout << "Engine started\n"; }
};
class CarAgg {
    Engine* eng; 
public:
    CarAgg(Engine* e): eng(e) {}
    void run(){ eng->start(); cout << "CarAgg running\n"; }
};
class Heart {
public:
    void beat(){ cout << "Heart beat\n"; }
};
class Person {
    Heart h;
public:
    void live(){ h.beat(); cout << "Person alive\n"; }
};

int main(){
    cout << "==== 聚合 vs 组合 ====" << endl;
    Engine e;
    CarAgg c(&e); c.run();
    Person p; p.live();
}
