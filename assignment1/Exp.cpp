#include "dsexceptions.h"
#include "List.h"
#include "Vector.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

double elapsed_time( clock_t start, clock_t finish);

int main( )
{
    clock_t start, end ;
    const int N = 20000;

    Vector<int> v1;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        v1.push_back( i );
    }
    end = clock( );
    cout << "Time for " << N << " Vector<int> Push-back Operations: " << ( end - start ) << endl;

    Vector<double> v2;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        v2.push_back( i );
    }
    end = clock( );
    cout << "Time for " << N << " Vector<double> Push-back Operations: " << ( end - start ) << endl;
    
    List<int> lst1;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        lst1.push_front( i );
    }
    end = clock( );
    cout << "Time for " << N << " List<int> Push-front Operations: " << ( end - start ) << endl;

    List<double> lst2;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        lst2.push_front( i );
    }
    end = clock( );
    cout << "Time for " << N << " List<double> Push-front Operations: " << ( end - start ) << endl;

    return 0 ;
}

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}