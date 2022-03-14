#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human
{
    string name; //
public:
    Human(string myName);
    void setName(string myName);      //
    string getName(); //
    string makeMove();
 ~Human();
};
#endif
