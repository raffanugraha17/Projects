#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int tries = 0;
    int hintTries = 0;

    cout << "Welcome to the guessing game!" << endl;

    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! ";
        } else if (guess < secretNumber) {
            cout << "Too low! ";
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
            break;
        }

        if (hintTries == 3) {
            if (secretNumber % 2 == 0) {
                cout << "Hint: The secret number is even." << endl;
            } else {
                cout << "Hint: The secret number is odd." << endl;
            }
        } else if (hintTries == 6) {
            if (guess > secretNumber) {
                cout << "Hint: Your guess was too high." << endl;
            } else {
                cout << "Hint: Your guess was too low." << endl;
            }
        }

        hintTries++;

    } while (tries < 10);

    if (tries >= 10) {
        cout << "Sorry, you ran out of tries. The secret number was " << secretNumber << "." << endl;
    }

    return 0;
}
