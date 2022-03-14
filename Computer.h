#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
    char move; //
public:
    Computer(char move);  //
    void setName(char move);      //
   // string getName();
    char makeMove();
 ~Computer(); //
};
#endif

