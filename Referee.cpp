#include <iostream>
#include "Computer.h"
#include "Human.h"
using namespace std;


char refGame(Human *player1, Computer *player2){
    string player1Value = player1->getName();
   // cout << player1Value<< endl;
    string player2Value = player2->getName();
   // cout << player2Value<< endl;

    if (player1Value == player2Value || player1Value == "R"){
        cout << "T" << endl;
    } else if (player1Value == "s" || player1Value == "S"){
        cout << "L" << endl;
    } else if (player1Value == "p" || player1Value == "P"){
        cout << "W" << endl;
   } // } else {
    //     cout << "" << endl
    // }

    return 0;
    }

int main()
{
	Computer *one= new Computer("r");//,3);
    one -> setName("r");

    string n;
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

