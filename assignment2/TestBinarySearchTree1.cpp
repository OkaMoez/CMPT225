#include <iostream>
#include "BinarySearchTree1.h"
using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
    int NUMS = 400000;
    const int GAP = 3711;
    int i;

    cout << "Error checking..." << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );

    for( i = 1; i < NUMS; i+= 2 )
        t.remove( i );

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 2; i < NUMS; i+=2 )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t.contains( i ) )
            cout << "Find error2!" << endl;
    }

    BinarySearchTree<int> t2;
    t2 = t;

    for( i = 2; i < NUMS; i+=2 )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t2.contains( i ) )
            cout << "Find error2!" << endl;
    }

    cout << "Error check success!" << endl;
    cout << "Sum testing..." << endl;

    BinarySearchTree<int> t3;
    t3.insert( 2 );
    t3.insert( 1 );
    cout << "Sum of tree t3: " << t3.sum() << endl;
    t3.insert( 3 );
    t3.insert( 4 );
    cout << "Sum of tree t3 after adding 3 + 4: " << t3.sum() << endl;
    t3.insert( 12 );
    cout << "Sum of tree t3 after adding 12: " << t3.sum() << endl;
    t3.remove( 4 );
    cout << "Sum of tree t3 after removing 4: " << t3.sum() << endl;

    cout << "Finished sum testing" << endl;

    return 0;
}