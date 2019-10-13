#include <iostream>
#include "List.H"
#include "Vector.h"
using std::endl;
using std::string;

int main()
{
    auto ax = 'x';
    auto ay = 'y';
    auto bx = 3;
    auto by = 7;

    /*
    List<char> a;
    List<int> b;
    a.push_back('a');
    a.push_back('b');
    a.push_back('x');
    a.push_back('x');
    a.push_back('b');
    a.push_back('x');
    a.push_back('a');
    a.pop_back();
    cout << "List a has size: " << a.size() << endl;
    b.push_back(1);
    b.push_back(3);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    cout << "List b has size: " << b.size() << endl;
    auto replaced = a.replaceAll(ax,ay);
    cout << "List a replaced " << replaced << " element(s)." << endl;
    auto removed = b.removeAll(bx);
    cout << "List b has size: " << b.size() << endl;
    cout << "List b removed " << removed << " element(s)." << endl;
    */
    ///*
    Vector<char> a;
    Vector<int> b;
    a.push_back('a');
    a.push_back('b');
    a.push_back('x');
    a.push_back('x');
    a.push_back('b');
    a.push_back('x');
    a.push_back('a');
    a.push_back('b');
    a.push_back('x');
    a.push_back('x');
    a.push_back('b');
    a.push_back('x');
    a.push_back('a');
    a.push_back('b');
    a.push_back('x');
    a.push_back('x');
    a.push_back('b');
    a.push_back('x');
    a.pop_back();
    cout << "Vector a has size: " << a.size() << endl;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    cout << "Vector b has size: " << b.size() << endl;
    cout << "Vector a: " << a << endl;
    auto replaced = a.replaceAll(ax,ay);
    cout << "Vector a: " << a << endl;
    cout << "Vector a replaced " << replaced << " element(s)." << endl;
    
    cout << "Vector b: " << b << endl;
    auto removed = b.removeAll(bx);
    cout << "Vector b: " << b << endl;
    cout << "Vector b has size: " << b.size() << endl;
    cout << "Vector b removed " << removed << " element(s)." << endl;
    //*/
    
    return 0;
}