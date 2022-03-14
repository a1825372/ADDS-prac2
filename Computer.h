#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
    string name; //
public:
    Computer(string myName);  //
    void setName(string myName);      //
    string getName();
    string makeMove();
 ~Computer(); //
};
#endif

