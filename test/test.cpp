#include <iostream>
#include <string>
#include <unistd.h>
using std::endl;
using std::cout;
using std::string;
using std::flush;

void AnimateTest(); // Show a small ASCII animation in terminal

int main(){
    cout << "Hello World!" << endl;

    AnimateTest();

    return 0;
}

void AnimateTest(){
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