#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human
{
    string name;
public:
    Human();
    Human(string myName);
    void setName(string myName);      // change the person's name
    string getName();
    char makeMove();
 ~Human();
};
#endif
