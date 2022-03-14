#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {
	name = "fart";
}

void Human::setName(string myName){
	name = myName;

}

string Human::getName(){
    return name;
}


Human::Human(string myName){
//	cout << "Humans's choice: " << myName << ". \n";

}


Human::~Human()
{
}