#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

srand(time(0));
// Generate a random number between 1 and 100
int secretNumber = rand() % 100 + 1;
int secretNumber2 = rand() % 200 + 1;

// Prompt the user to enter their guess
cout << "Enter your guess: ";
int guess;
cin >> guess;

// Keep asking for a guess until the user gets it right
while (guess != secretNumber&& guess!= secretNumber2) {
    if (guess < secretNumber || guess < secretNumber2) {
        cout << "Your guess is too low. Try again: ";
    } else {
        cout << "Your guess is too high. Try again: ";
    }
    cin >> guess;
}

// The user has guessed the correct number
cout << "Congratulations! You guessed the correct number!" << endl;

return 0;
}
