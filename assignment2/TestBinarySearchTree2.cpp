#include <iostream>
#include "BinarySearchTree2.h"
using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
    int NUMS = 400000;
    const int GAP  =   3711;
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
    cout << "countInRange testing..." << endl;

    BinarySearchTree<int> t3;
    t3.insert( 10 );
    t3.insert( 5 );
    t3.insert( 7 );
    t3.insert( 15 );
    t3.insert( 12 );
    t3.insert( 1 );
    t3.insert( 18 );
    cout << "# of keys between 5 and 15 in t3 (expect 4): " << t3.countInRange( 5 , 15) << endl;
    t3.insert( 11 );
    cout << "# of keys between 5 and 15 in t3 after adding 11: " << t3.countInRange( 5 , 15) << endl;
    t3.insert( 3 );
    cout << "# of keys between 5 and 15 in t3 after adding 3: " << t3.countInRange( 5 , 15) << endl;
    t3.insert( 8 );
    cout << "# of keys between 5 and 15 in t3 after adding 8: " << t3.countInRange( 5 , 15) << endl;
    t3.remove( 5 );
    cout << "# of keys between 5 and 15 in t3 after removing 5: " << t3.countInRange( 5 , 15) << endl;
    t3.remove( 18 );
    cout << "# of keys between 5 and 15 in t3 after removing 18: " << t3.countInRange( 5 , 15) << endl;

    cout << "Finished countInRange testing" << endl;

    return 0;
}