
#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    virtual ~Stack() = default;
    virtual void push(int) = 0;
    virtual bool pop(int &) = 0;
};
class ArrayStack : public Stack
{
    vector<int> s;

public:
    void push(int v) override { s.push_back(v); }
    bool pop(int &v) override
    {
        if (s.empty())
            return false;
        v = s.back();
        s.pop_back();
        return true;
    }
};
class LinkedStack : public Stack
{
    struct Node
    {
        int v;
        Node *next;
    };
    Node *head = nullptr;

public:
    ~LinkedStack()
    {
        while (head)
        {
            Node *t = head;
            head = head->next;
            delete t;
        }
    }
    void push(int v) override { head = new Node{v, head}; }
    bool pop(int &v) override
    {
        if (!head)
            return false;
        v = head->v;
        Node *t = head;
        head = head->next;
        delete t;
        return true;
    }
};
void use_stack(Stack &st)
{
    st.push(1);
    st.push(2);
    int x;
    while (st.pop(x))
        cout << x << " ";
    cout << "\n";
}
int main()
{
    ArrayStack a;
    LinkedStack l;
    use_stack(a);
    use_stack(l);
}
