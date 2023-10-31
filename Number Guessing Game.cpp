#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n\n";

    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the correct number (" << secretNumber << ")!\n";
            break;
        } else if (guess > secretNumber) {
            cout << "Too high! Try a lower number.\n";
        } else {
            cout << "Too low! Try a higher number.\n";
        }
    }

    return 0;
}

