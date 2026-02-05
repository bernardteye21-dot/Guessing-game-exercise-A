#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                 // Seed random generator
    int secretNumber = rand() % 10 + 1;
    int guess = 0;

    while (guess != secretNumber) {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too High" << endl;
        } else if (guess < secretNumber) {
            cout << "Too Low" << endl;
        } else {
            cout << "Correct! You guessed it." << endl;
        }
    }

    return 0;
}