#include "Referee.h"
#include <iostream>
using namespace std;
int main() {
    Human player1;
    Computer player2;
    Referee myReferee;

    cout << myReferee.refGame(player1,player2);
}