#include <iostream>
using namespace std;
char matrix[3][3] = {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
char player = 'X';
void draw() {
    cout << "      -------\n";

    for (int r = 0; r < 3; r++) {
        cout << "   ";
        cout << "| ";
        cout << " ";
        for (int col = 0; col < 3; col++) {
            cout << matrix[r][col];
            cout << "  ";

        }
        cout << "|";
        cout << endl;
        
    }
    cout << "      -------\n";

}
void replace() {
    char pos;
    cout << "please enter your position (" << player << "): ";
    cin >> pos;
    for (int r = 0; r < 3; r++) {
        for (int col = 0; col < 3; col++) {
            if (matrix[r][col] == pos) {
                matrix[r][col] = player;
            }
        }

    }
    if (player == 'X') {
        player = 'O';
    }
    else {
        player = 'X';
    }
}
char winner() {
    int x = 0;
    int o = 0;
    int counter = 0;
    for (int r = 0; r < 3; r++) {
        for (int col = 0; col < 3; col++) {
            if (matrix[r][col] == 'X') {
                x++;
            }
            else if (matrix[r][col] == 'O') {
                o++;
            }
            if (x == 3) {
                return 'X';

            }
            if (o == 3) {
                return 'O';
            }
        }
        x = 0; o = 0;
    }
    for (int r = 0; r < 3; r++) {
        for (int col = 0; col < 3; col++) {
            if (matrix[col][r] == 'X') {
                x++;
            }
            else if (matrix[col][r] == 'O') {
                o++;
            }
            if (x == 3) {
                return 'X';
            }
            else if (o == 3) {
                return 'O';
            }
        }
        x = 0, o = 0;
    }
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
        return 'X';

    }
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X') {
        return 'X';
    }
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O') {
        return 'O';
    }
    for (int r = 0; r < 3; r++) {
        for (int col = 0; col < 3; col++) {
            if (matrix[r][col] != 'X' && matrix[r][col] != 'O') {
                counter++ ;
            }

        }
    }
    if (counter == 0) {
        return '=';
    }
    else {
        return '*';
    }
}






int main() {
    while (winner() == '*') {
        system("cls");
        draw();
        replace();
    }
    draw();
    if (winner() == 'X') {
        cout << "Winner is player(X)" << endl;
    }
    if (winner() == 'O') {
        cout << "winner is player(O)" << endl;
    }
    if (winner() == '=') {
        cout << "No winner" << endl;
    }
    return 0;
}