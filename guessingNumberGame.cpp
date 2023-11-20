#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// function to guess the number
void Guessing(int guessNumber = 0, int actualNumber = 0)
{
    cout << "Enter the number(1-30) you want to guess from the computer(Enter -ve number to terminate the program):";
    cin >> guessNumber;
    // input validation
    if (guessNumber <= 0 || guessNumber > 30)
    {
        cout << "Your program is terminated.....\n";
    }

    while (guessNumber > 0 && guessNumber <= 30)
    {

        if ((guessNumber <= actualNumber + 5 && guessNumber >= actualNumber - 5 && guessNumber > 0 && guessNumber != actualNumber))
        {
            cout << "Hint-Your guess is very close to the actual number.....\n";
            cout << "Enter the number again:";
            cin >> guessNumber;
        }
        else if ((guessNumber <= actualNumber + 10 && guessNumber >= actualNumber - 10 && guessNumber > 0 && guessNumber != actualNumber))
        {
            cout << "Hint-Your guess is  close to the actual number.....\n";
            cout << "Enter the number again:";
            cin >> guessNumber;
        }
        else if ((guessNumber <= actualNumber + 15 && guessNumber >= actualNumber - 15 && guessNumber > 0 && guessNumber != actualNumber))
        {
            cout << "Hint-Your guess is far from the actual number.....\n";
            cout << "Enter the number again:";
            cin >> guessNumber;
        }
        else if ((guessNumber <= actualNumber + 20 && guessNumber >= actualNumber - 20 && guessNumber > 0 && guessNumber != actualNumber))
        {
            cout << "Hint-Your guess is very far from the actual number.....\n";
            cout << "Enter the number again:";
            cin >> guessNumber;
        }
        else if (guessNumber == actualNumber)
        {
            cout << "You have guessed the actual number....\n";
            break;
        }
    }
}
int main()
{
    // variables
    int guessNumber = 0, actualNumber = 0;
    // generating random numbers
    srand(time(0));
    actualNumber = (rand() % 30 + 1);
    // caliing the guessing function
    Guessing(guessNumber, actualNumber);
    return 0;
}