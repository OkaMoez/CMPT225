#include <iostream>
#include "List.H"
#include "Vector.h"
using std::endl;
using std::string;

int main()
{
    Vector<string> a;
    a.push_back("1st place");
    a.push_back("2st place");
    a.push_back("3st place");
    a.pop_back();
    cout << "Vector a has size: " << a.size() << endl;
    Vector<string> b;
    b.push_back("a");
    b.push_back("b");
    b.push_back("c");
    b.push_back("d");
    cout << "Vector b has size: " << b.size() << endl;
    a.replaceAll(1,2);
    b.removeAll(1);
    
    return 0;
}