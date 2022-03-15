#include <iostream>
#include "Computer.h"
#include "Human.h"
using namespace std;


char refGame(Human *player1, Computer *player2){
    const char* sR = "r";
    const char* lR = "R";
    const char* ss = "s";
    const char* ls = "S";
    const char* sp = "p";
    const char* lp = "P";

    char player1Value = player1->makeMove();
   // char player2Value = player2->makeMove();

    if (&player1Value == ss || &player1Value == ls){
        cout << "L" << endl;

    } else if (player1Value == *sR || player1Value == *lR){
        cout << "T" << endl;

    } else if (player1Value == *sp || player1Value == *lp){
        cout << "W" << endl;

  } else{
 }
    return 0;
    }

int main()
{
    const char* rock = "r";

	Computer *one= new Computer(*rock);
    one -> setName(*rock);

    char n;
    cout << "Enter move: ";
    std::cin >> n;

	Human *two;
	two = new Human(n);
	two -> setName(n);

    refGame(two, one);
return 0;
}

