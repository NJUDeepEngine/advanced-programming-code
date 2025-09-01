#include <iostream>
#include <string>
using namespace std;

class UrlBuilder {
    string scheme_="https", host_="example.com", path_="/";
public:
    UrlBuilder& scheme(const string&s){ scheme_=s; return *this; }
    UrlBuilder& host(const string&h){ host_=h; return *this; }
    UrlBuilder& path(const string&p){ path_=p; return *this; }
    string str() const { return scheme_ + "://" + host_ + path_; }
};

int main(){
    UrlBuilder b;
    cout << b.scheme("http").host("localhost").path("/api").str() << "\n";
}
