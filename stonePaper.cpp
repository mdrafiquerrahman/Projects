#include <iostream>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

using namespace std;

int main() {
    // Set up random number generator
    srand(time(NULL));

    // Game loop
    while (true) {
        // Get user input
        cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
        char choice;
        cin >> choice;

        // Generate computer choice
        int computer_choice = rand() % 3; // 0 = rock, 1 = paper, 2 = scissors

        // Determine winner
        if (choice == 'r') {
            if (computer_choice == 0) {
                cout << "Tie!" << endl;
            } else if (computer_choice == 1) {
                cout << "Computer wins!" << endl;
            } else {
                cout << "You win!" << endl;
            }
        } else if (choice == 'p') {
            if (computer_choice == 0) {
                cout << "You win!" << endl;
            } else if (computer_choice == 1) {
                cout << "Tie!" << endl;
            } else {
                cout << "Computer wins!" << endl;
            }
        } else if (choice == 's') {
            if (computer_choice == 0) {
                cout << "Computer wins!" << endl;
            } else if (computer_choice == 1) {
                cout << "You win!" << endl;
            } else {
                cout << "Tie!" << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}