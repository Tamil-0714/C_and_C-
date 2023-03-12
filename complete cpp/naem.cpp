#include <iostream>
#include <string>
#include<ctime>
using namespace std;

int main() {
// Create a list of words to choose from
string words[] = {"apple", "banana", "cherry", "date", "elderberry"};

//Copy code
// Choose a random word from the list
srand(time(0));
int index = rand() % 5;
string secretWord = words[index];

// Create a string to store the user's guess
string guess;

// Keep asking for a guess until the user gets it right
while (guess != secretWord) {
    cout << "Enter your guess: ";
    cin >> guess;

    if (guess != secretWord) {
        cout << "Your guess is incorrect. Try again." << endl;
    }
}

// The user has guessed the correct word
cout << "Congratulations! You guessed the correct word!" << endl;

return 0;
}
