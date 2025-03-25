#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// ASCII Art Representations
const string ROCK_ART = 
"    _______\n"
"---'   ____)\n"
"      (_____)\n"
"      (_____)\n"
"      (____)\n"
"---.__(___)\n";

const string PAPER_ART = 
"     _______\n"
"---'    ____)____\n"
"           ______)\n"
"          _______)\n"
"         _______)\n"
"---.__________)\n";

const string SCISSORS_ART = 
"    _______\n"
"---'   ____)____\n"
"          ______)\n"
"       __________)\n"
"      (____)\n"
"---.__(___)\n";

// Get user's choice
char getUserChoice() {
    char choice;
    cout << "Enter your choice:\n";
    cout << "r - Rock\n";
    cout << "p - Paper\n";
    cout << "s - Scissors\n";
    cout << "q - Quit\n";
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}

// Get computer's choice
char getComputerChoice() {
    srand(time(NULL));
    int randomNum = rand() % 3;
    switch(randomNum) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
        default: return 'r';
    }
}

// Show ASCII art for a choice
void showChoice(char choice) {
    switch(choice) {
        case 'r':
            cout << ROCK_ART;
            break;
        case 'p':
            cout << PAPER_ART;
            break;
        case 's':
            cout << SCISSORS_ART;
            break;
    }
}

// Determine the winner
void chooseWinner(char userChoice, char computerChoice) {
    cout << "\nYou chose:\n";
    showChoice(userChoice);
    
    cout << "\nComputer chose:\n";
    showChoice(computerChoice);
    
    // Determine winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if (
        (userChoice == 'r' && computerChoice == 's') ||
        (userChoice == 'p' && computerChoice == 'r') ||
        (userChoice == 's' && computerChoice == 'p')
    ) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
}

// Main game function
void playGame() {
    cout << "=== Rock Paper Scissors Game ===\n";
    
    // Get user's choice
    char userChoice = getUserChoice();
    
    // Check for quit option
    if (userChoice == 'q') {
        cout << "Thanks for playing!\n";
        return;
    }
    
    // Validate user's choice
    if (userChoice != 'r' && userChoice != 'p' && userChoice != 's') {
        cout << "Invalid choice! Please choose r, p, or s.\n";
        return;
    }
    
    // Get computer's choice
    char computerChoice = getComputerChoice();
    
    // Determine and show winner
    chooseWinner(userChoice, computerChoice);
}

int main() {
    // Play while loop with option to quit
    char playAgain;
    do {
        playGame();
        
        // Ask if player wants to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
    cout << "Goodbye! Thanks for playing Rock Paper Scissors!\n";
    return 0;
}