#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human
{
    char name; //
public:
    Human(char myName);
    void setName(char myName);      //
    string getName(); //
    char makeMove();
 ~Human();
};
#endif
