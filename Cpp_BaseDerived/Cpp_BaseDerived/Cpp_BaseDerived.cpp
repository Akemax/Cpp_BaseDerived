#include <iostream>
using namespace std;

class Base {
public:
    void Public(string s) {
        s = "public";
        cout << s << endl;
    }

protected:
    void Protected(string s) {
        s = "protected";
        cout << s << endl;
    }

private:
    void Private(string s) {
        s = "private";
        cout << s << endl;
    }
};

class Derived : public Base {
public:
    void ReturnProtected(string s) {  }

};

int main() {

    string s_main;
    Derived dc;
    dc.ReturnProtected(s_main);
    dc.Public(s_main);

    return 0;

}