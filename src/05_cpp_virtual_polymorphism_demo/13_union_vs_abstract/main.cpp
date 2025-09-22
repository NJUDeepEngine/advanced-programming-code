
#include <iostream>
#include <vector>
using namespace std;

struct Line
{
    double x1, y1, x2, y2;
};
struct Rect
{
    double l, t, r, b;
};
struct Circle
{
    double x, y, r;
};
union FigureU
{
    Line line;
    Rect rect;
    Circle circle;
};
struct TaggedFigure
{
    int tag;
    FigureU u;
};

void draw(const TaggedFigure &tf)
{
    switch (tf.tag)
    {
    case 0:
        cout << "draw Line\n";
        break;
    case 1:
        cout << "draw Rect\n";
        break;
    case 2:
        cout << "draw Circle\n";
        break;
    default:
        cout << "unknown\n";
    }
}

class Figure
{
public:
    virtual ~Figure() = default;
    virtual void draw() const = 0;
};
class Rectangle : public Figure
{
public:
    void draw() const override { cout << "draw Rectangle (poly)\n"; }
};
class LineFig : public Figure
{
public:
    void draw() const override { cout << "draw Line (poly)\n"; }
};
class CircleFig : public Figure
{
public:
    void draw() const override { cout << "draw Circle (poly)\n"; }
};

int main()
{
    cout << "[Union+switch]\n";
    TaggedFigure a{0, {}}, b{1, {}}, c{2, {}};
    draw(a);
    draw(b);
    draw(c);
    cout << "[Abstract polymorphism]\n";
    vector<Figure *> v{new Rectangle, new LineFig, new CircleFig};
    for (auto p : v)
    {
        p->draw();
        delete p;
    }
}
