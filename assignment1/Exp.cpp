#include "dsexceptions.h"
#include "List.h"
#include "Vector.h"
#include <stdlib.h>
#include <cstdlib> 
#include <time.h>
#include <iostream>
using namespace std;

float elapsed_time( clock_t start, clock_t finish);

int main( )
{
    clock_t start, end;
    int count[2];
    float times[6];
    const int N = 2000000;
    count[0] = N;

    srand((unsigned)time(0));

    Vector<int> v0;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        v0.push_back( i );
    }
    end = clock( );
    times[0] = elapsed_time(start, end);

    List<int> lst0;
    start = clock( );
    for( int i = N - 1; i > 0; --i )
    {
        lst0.push_front( i );
    }
    end = clock( );
    times[1] = elapsed_time(start, end);

    // Produce matching vectors and lists for replace/remove tests
    Vector<int> v1;
    Vector<double> v2;
    List<int> lst1;
    List<double> lst2;
    for( int i = N - 1; i > 0; --i )
    {
        int rnum = (rand()%10);
        v1.push_back( rnum );
        v2.push_back( rnum );
        lst1.push_front( rnum );
        lst2.push_front( rnum );
    }
    
    // Run replaceAll and removeAll tests
    Vector<int> v1a = v1;
    start = clock( );
    count[1] = v1a.replaceAll(5, 9);
    end = clock( );
    times[2] = elapsed_time(start, end);

    Vector<int> v1b = v1;
    start = clock( );
    v1b.removeAll(5);
    end = clock( );
    times[4] = elapsed_time(start, end);

    List<int> lst1a = lst1;
    start = clock( );
    lst1a.replaceAll(5, 9);
    end = clock( );
    times[3] = elapsed_time(start, end);

    List<int> lst1b = lst1;
    start = clock( );
    lst1b.removeAll(5);
    end = clock( );
    times[5] = elapsed_time(start, end);

    // Print output
    cout << "Brigham Okano" << endl;
    cout << "301366905" << endl;
    cout << "Type of Elements: int" << endl;
    cout << "Number of Elements Added: " << count[0] << endl;
    cout << "Number of Elements Changed/Removed: " << count[1] << endl;
    cout << "Time units: \"milliseconds\"" << endl;
    cout << "Time for Vector Insertion: " << times[0] << endl;
    cout << "Time for List Insertion: " << times[1] << endl;
    cout << "Time for Vector Change: " << times[2] << endl;
    cout << "Time for List Change: " << times[3] << endl;
    cout << "Time for Vector Deletion: " << times[4] << endl;
    cout << "Time for List Deletion: " << times[5] << endl;

    return 0 ;
}

float elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(float)(CLOCKS_PER_SEC/1000);
}