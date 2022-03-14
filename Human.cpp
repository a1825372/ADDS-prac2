#include <iostream>
#include "Human.h"
using namespace std;


Human::Human(char myName){
		name = myName;
}

void Human::setName(char myName){
	name = myName;
}

char Human::makeMove(){
    return name;
}

Human::~Human()
{
}