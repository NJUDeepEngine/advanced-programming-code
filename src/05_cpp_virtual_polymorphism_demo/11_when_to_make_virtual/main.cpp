
#include <iostream>
using namespace std;

class Compressor
{
public:
    virtual void compress(const string &in, string &out)
    {
        out = in;
        cout << "Compressor default\n";
    }
    virtual ~Compressor() = default;
    virtual size_t max_block_size() const = 0;
};
class FastCompressor : public Compressor
{
public:
    void compress(const string &in, string &out) override
    {
        out = "[fast]" + in;
        cout << "FastCompressor::compress\n";
    }
    size_t max_block_size() const override { return 4096; }
};
int main()
{
    string in = "data", out;
    Compressor *c = new FastCompressor;
    c->compress(in, out);
    cout << "out=" << out << ", max_block=" << c->max_block_size() << "\n";
    delete c;
}
