#include <iostream>
#include <ctime>

using namespace std;

int generateRandomNumber(int min, int max)
{
    srand(time(NULL));
    int randomNumber = min + rand() % (max - min + 1);
    return randomNumber;
}

void numberGuessingGame(int min, int max)
{
    srand(time(NULL));
    int randomNumber = generateRandomNumber(min, max);
    int guess;
    int attempts = 0;
    bool correct = false;

    cout << "\nI've selected a random number between " << min << " and " << max << ". Try to guess it!\n";

    while (!correct)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber)
            cout << "Too low! Try again.\n";
        else if (guess > randomNumber)
            cout << "Too high! Try again.\n";
        else
        {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts!\n";
            correct = true;
        }
    }
}

int main()
{
    int choice;
    int min, max;

    while (true)
    {
        cout << "\n===== Random Number Game Menu =====\n";
        cout << "1. Play Number Guessing Game\n";
        cout << "2. Generate Random Number\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 3)
        {
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        cout << "Enter the minimum value: ";
        cin >> min;
        cout << "Enter the maximum value: ";
        cin >> max;

        if (min > max)
        {
            cout << "Invalid range. Minimum value should be less than maximum.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            numberGuessingGame(min, max);
            break;
        case 2:
            cout << "Random Number: " << generateRandomNumber(min, max) << '\n';
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}