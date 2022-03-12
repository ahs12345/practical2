#include "Human.h"
#include <iostream>
using namespace std;
Human::Human(){}

char Human::makeMove(){
    char myChar;
    cout << "Enter move: ";
    cin >> myChar;
    return myChar;
} 