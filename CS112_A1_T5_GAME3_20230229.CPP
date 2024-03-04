// File: subtract square  game
// Purpose: In this game, A positive integer is wriiten down and two players take turns substracting squared integer values until one player leaves zero in which case the player is the winner
// Author: Abdallah maged abdelhamid elgably
// ID: 20230229

# include<iostream>
# include<vector>
# include<cmath>
# include<cstdlib>
# include<ctime>
# include<algorithm>


using namespace std;
int main() {
    cout << "welcome to subtract square gmae\n";

    // ask the user if they want to choose the number of coins

    string choice;
    cout << "do you want to choose the number of coins yourself? (type 'yes' or 'no'):";
    cin >> choice;

    // if the user chooses to input the number of coins themselves
    
    if (choice == "yes") {

        while (true) {

            // ask the user to input the number of coins 
            int x;
            cout << "please enter the number of coins:";
            cin >> x;

            // generate a list of square numbers up to the given number of coins 
            vector<int> squarenumbers;
            int y = 1;
            for (int i = 0; i< x; ++i) {

                int z = y*y;
                y++;
                squarenumbers.push_back(z);
            }

            // start the game loop 
            while (true) {
                // player1's turn 
                int player1;
                cout << "player1, please enter a square number:";
                cin >> player1;
                while (find(squarenumbers.begin(), squarenumbers.end(), player1) == squarenumbers.end()) {

                    cout << "player1, please enter a valid square number:";
                    cin >> player1;

                }

                // update the number of coins 
                x -= player1;
                if (x <= 0){
                    cout << "player1 wins!" << endl;
                    break;

                } else{
                    cout << "now the number of coins is" << x << endl;
                }

                //player2's turn
                 int player2;
                cout << "player2, please enter a square number:";
                cin >> player2;
                while (find(squarenumbers.begin(), squarenumbers.end(), player2) == squarenumbers.end()) {

                    cout << "player2, please enter a valid square number:";
                    cin >> player2;

                }

                // update the number of coins 
                x -= player2;
                if (x <= 0){
                    cout << "player2 wins!" << endl;
                    break;

                } else{
                    cout << "now the number of coins is" << x << endl;
                }


            }

                

        }



    }






}

