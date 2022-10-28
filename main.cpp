/*
@Author: Azjinsol
*/
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
//my program


int main() {
    
    //creating a variable for the program
   string choice = "";
   int playerRemove = 0;
   //int compRemove = 0;
   //int matches = 0;
 
   //output the program title
   cout << "The game of Nim. THe player to remove the last matches loses.\n";
  
   //create an error for non Y/N
   do  {
        cout << "Would you like to go first? (Y/N): ";
        cin >> choice;
    
        //check if it is Y or N
        if (choice != "Y" && choice != "y") {
            cout << "\nError: Invalid entry, please retry\n";
            continue;
        }  
        else if (choice != "N" && choice != "n") {
            cout << "\nError: Invalid entry, please retry\n";
            continue;
        
        break;
    }
    while (true); 
 
    //Printing the group of five matches
    cout << "Matches: ";
    for (int i = 0; i < 21; i++) {
        string matches = "|";
        if (i % 5 == 0) {
            cout << " ";
        }
        for (int i = amountOfStars; i > 0; i--) {
            cout << "*";
        }
        cout << " ";
    }

    cout << 

    /*
    //Printing the result of player's moves
    if () {
        for (int i = 0; i > 0; i--) {
    
        }
    }
    */

    //create an error if it is out of range
    do  {
        cout << "\nRemove (1 - 3): " << endl;
        cout << "**";
        cin >> playerRemove;
        //checking if theres non-numbers
        if (cin.fail()) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Please, type 1, 2, or 3 as your response\n";
            continue;
        }
        //check if it is less than 0
        if (playerRemove < 0) {
            cout << "Cannot remove more than three matches\n";
            continue;
        }  
        //check if it is more than 3
        else if (playerRemove > 3) {
            cout <<"Must remove at least one match\n";
            continue;
        }
        break;
    }
    while (true); 
 

    return 0;
}
