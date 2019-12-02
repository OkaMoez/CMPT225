#include <iostream>
#include "AvlTreeB.h"
using namespace std;

    // Test program
int main( )
{
    AvlTree<int> t;
    int NUMS = 2000; // Took too long with 2m nums
    const int GAP  =   37;
    int i;

    cout << "Error checking..." << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );
    t.remove( 0 );
    for( i = 1; i < NUMS; i += 2 )
        t.remove( i );
    t.isBalanced();

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 2; i < NUMS; i += 2 )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i += 2 )
    {
        if( t.contains( i )  )
            cout << "Find error2!" << endl;
    }

    AvlTree<int> t2;
    t2 = t;

    for( i = 2; i < NUMS; i += 2 )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i += 2 )
    {
        if( t2.contains( i ) )
            cout << "Find error2!" << endl;
    }

    cout << "End error checking..." << endl << endl;


    cout << "Balance testing..." << endl;
    cout << "Begin insertion test..." << endl;
    AvlTree<int> t3;
    for ( int i = 1 ; i < 20 ; i++ )
    {
    t3.insert( i );
    cout << endl;
    }
    t3.isBalanced();
    cout << "Finished insertion testing" << endl;
    cout << endl << "Begin removal test..." << endl;

    for ( int i = 20 ; i > 10 ; i-- )
    {
    t3.remove( i );
    t3.isBalanced();
    cout << endl;
    }
    cout << "Finished removal testing" << endl;
    cout << "Test tree ";
    t3.isBalanced();
    cout << "Finished balance testing" << endl;
    return 0;
}