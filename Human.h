#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human
{
    char move; //
public:
    Human(char move);
    void setName(char move);      //
  //  string getName(); //
    char makeMove();
 ~Human();
};
#endif
