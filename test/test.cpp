#include <iostream>
#include <string>
#include <unistd.h>
using std::endl;
using std::cout;
using std::string;
using std::flush;

void animate();

int main(){
    cout << "Hello World!" << endl;

    animate();

    return 0;
}

void animate(){
    string text[7] = {
        "Testing",
        "tEsting",
        "teSting",
        "tesTing",
        "testIng",
        "testiNg",
        "testinG"
    };

    for(int i=0; i<21; i++){
    cout << "\r" << text[i%7] << flush;
    usleep(250000);
    }
    cout << "\rTesting" << endl;
}