#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
    string name;
public:
    Computer();
    Computer(string myName);
    void setName(string myName);      // change the person's name
    string getName();
    char makeMove();
 ~Computer();
};
#endif


// #ifndef COMPUTER_H
// #define COMPUTER_H
// #include <string>
// using namespace std;

// class Computer
// {
// public:
//     Computer();
//     Computer(string myName,int mySalary); // a name and salary must be provided to create a person
//     void setName(string myName);      // change the person's name
//     string getName;
//     void setSalary(int mySalary);     // change the person's salary
//     int getSalary;
//     void ass(string getName,int getSalary);
//  ~Computer();
// };
// #endif
