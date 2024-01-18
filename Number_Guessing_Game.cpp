#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    // Variables to store user input and track the number of attempts
    int guess, attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "Try to guess the secret number between 1 and 100." << std::endl;

    do {
        // Ask the user to enter their guess
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Increment the attempts counter
        attempts++;

        // Provide feedback based on the user's guess
        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            // The user guessed the correct number
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}