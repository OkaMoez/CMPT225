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
    b.push_back(7);
    b.push_back(3);
    b.push_back(7);
    cout << "List a: " << a << endl;
    auto replaced1 = a.replaceAll(ax,ay);
    cout << "List a: " << a << endl;
    auto replaced2 = a.replaceAll(ay,ax);
    cout << "List a: " << a << endl;
    cout << "List a replaced " << replaced1 << " then " << replaced2 << " element(s)." << endl;
    cout << "List b has size: " << b.size() << endl;
    cout << "List b: " << b << endl;
    auto removed1 = b.removeAll(bx);
    cout << "List b: " << b << endl;
    auto removed2 = b.removeAll(by);
    cout << "List b: " << b << endl;
    cout << "List b has size: " << b.size() << endl;
    cout << "List b removed " << removed1 << " then " << removed2 << " element(s)." << endl << endl;
    
    
    Vector<char> va;
    Vector<int> vb;
    va.push_back('a');
    va.push_back('b');
    va.push_back('x');
    va.push_back('x');
    va.push_back('b');
    va.push_back('x');
    va.push_back('a');
    va.push_back('b');
    va.push_back('x');
    va.push_back('x');
    va.push_back('b');
    va.push_back('x');
    va.push_back('a');
    va.push_back('b');
    va.push_back('x');
    va.push_back('x');
    va.push_back('b');
    va.push_back('x');
    va.pop_back();
    cout << "Vector a has size: " << va.size() << endl;
    vb.push_back(1);
    vb.push_back(2);
    vb.push_back(3);
    vb.push_back(4);
    vb.push_back(7);
    vb.push_back(7);
    vb.push_back(3);
    vb.push_back(7);
    cout << "Vector a: " << va << endl;
    auto vreplaced1 = va.replaceAll(ax,ay);
    cout << "Vector a: " << va << endl;
    auto vreplaced2 = va.replaceAll(ay,ax);
    cout << "Vector a: " << va << endl;
    cout << "Vector a replaced " << vreplaced1 << " then " << vreplaced2 << " element(s)." << endl;
    
    cout << "Vector b has size: " << vb.size() << endl;
    cout << "Vector b: " << vb << endl;
    auto vremoved1 = vb.removeAll(bx);
    cout << "Vector b: " << vb << endl;
    auto vremoved2 = vb.removeAll(by);
    cout << "Vector b: " << vb << endl;
    cout << "Vector b has size: " << vb.size() << endl;
    cout << "Vector b removed " << vremoved1  << " then " << vremoved2 << " element(s)." << endl;
    
    
    return 0;
}