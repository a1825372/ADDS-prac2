
// v1 = rand() % 3;         // v1 in the range 0 to 99


#include <iostream>
#include "Computer.h"
using namespace std;

Computer::Computer() {
	name = "fart";
}

void Computer::setName(string myName){
	name = myName;

}

string Computer::getName(){
	return name;
}

Computer::Computer(string myName){
//	cout << "Computer's choice: " << myName << ". \n";

}


Computer::~Computer()
{
}



// // v1 = rand() % 3;         // v1 in the range 0 to 99


// #include <iostream>
// #include "Computer.h"
// using namespace std;

// Computer::Computer() {
// 	getName = "fart";
// 	getSalary = 2;
// }

// Computer::Computer(string myName,int mySalary){
// 	cout << "Computer name: " << myName << ". ";
// 	cout << "Computer salary: " << mySalary << endl;

// }

// void Computer::setName(string myName){
// 	getName = myName;

// }

// void Computer::setSalary(int mySalary){
// 	getSalary = mySalary;
// }

// Computer::~Computer()
// {
// }
