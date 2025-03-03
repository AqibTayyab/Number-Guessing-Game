#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void number_guessing_game() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    srand(time(0));
    int number_to_guess = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    while (true) {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number between 1 and 100." << endl;
            continue;
        }

        if (guess < number_to_guess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number_to_guess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << number_to_guess << " in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    number_guessing_game();
    return 0;
}
