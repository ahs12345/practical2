#include "Computer.h"
#include "Human.h"
#include "Referee.h"

    Referee::Referee(){}
    char Referee::refGame(Human player1, Computer player2){
        char humanMove = player1.makeMove();
        char computerMove = player2.makeMove();

        switch(humanMove){
            case 'R':
                switch(computerMove) {
                    case 'R':
                        return 'T';
                        break;
                    case 'P':
                        return 'L';
                        break;
                    default:
                        return 'W';
                    }
                break;

            case 'P':
                switch(computerMove) {
                    case 'R':
                        return 'W';
                        break;
                    case 'P':
                        return 'T';
                        break;
                    default:
                        return 'L';
                    }
                break;
                
                break;
            default:
                switch(computerMove) {
                    case 'R':
                        return 'L';
                        break;
                    case 'P':
                        return 'W';
                        break;
                    default:
                        return 'T';
                    }
                break;
                
        }
    }
