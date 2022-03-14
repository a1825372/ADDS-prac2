#ifndef REFEREE_H
#define REFEREE_H
#include "Computer.h"
#include "Human.h"
#include <string>
using namespace std;

class Referee
{
public:
    Referee();
    string refGame(Human player1, Computer player2);


   // Referee(string myName);
    //void setName(string myName);      // change the person's name
   // string getName;
   // char makeMove();
 ~Referee();
};
#endif
