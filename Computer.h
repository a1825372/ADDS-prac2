#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
    char name; //
public:
    Computer(char myName);  //
    void setName(char myName);      //
   // string getName();
    char makeMove();
 ~Computer(); //
};
#endif

