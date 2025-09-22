
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Figure
{
public:
    virtual ~Figure() = default;
    virtual void draw() const = 0;
    virtual void input_data() = 0;
};
class Rectangle : public Figure
{
public:
    void draw() const override { cout << "draw Rectangle\n"; }
    void input_data() override {}
};
class Circle : public Figure
{
public:
    void draw() const override { cout << "draw Circle\n"; }
    void input_data() override {}
};

int main()
{
    vector<unique_ptr<Figure>> figs;
    figs.emplace_back(make_unique<Rectangle>());
    figs.emplace_back(make_unique<Circle>());
    for (auto &f : figs)
    {
        f->input_data();
        f->draw();
    }
}
