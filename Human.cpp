#include <iostream>
#include "Human.h"
using namespace std;


Human::Human(string myName){
	//	name = myName;
}

void Human::setName(string myName){
	name = myName;
}

string Human::makeMove(){
    return name;
}

Human::~Human()
{
}