#include <iostream>
#include "Computer.h"
#include "Human.h"
using namespace std;


char refGame(Human *player1, Computer *player2){
    const char* R = "R";
    const char* ss = "s";
    const char* ls = "S";
    const char* sp = "p";
    const char* lp = "P";



    char player1Value = player1->makeMove();
    char player2Value = player2->makeMove();
    if (player1Value == player2Value || player1Value == *R){
        cout << "T" << endl;
    } else if (player1Value == *ss || player1Value == *ls){
        cout << "L" << endl;
    } else if (player1Value == *sp || player1Value == *lp){
        cout << "W" << endl;
   }
    return 0;
    }

int main()
{
    const char* rock = "r";

	Computer *one= new Computer(*rock);//,3);
    one -> setName(*rock);

    char n;
    cout << "Enter move: ";
    std::cin >> n;

	Human *two;//, *two;
	two = new Human(n);//,3);
	two -> setName(n);
//    Referee()
//	two = new Computer("bob",4);
    refGame(two, one);
return 0;
}

