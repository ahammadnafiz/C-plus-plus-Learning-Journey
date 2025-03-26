#include <iostream>
#include <string>
using namespace std;

class MemoryDiver {
private:
    string name;
    bool memoryRecovered;

public:
    MemoryDiver() : name("Unknown"), memoryRecovered(false) {} // Constructor, Name is set to "Unknown" and memoryRecovered is set to false

    void enterGame() {
        cout << "Welcome to Nexus-9, a city where memories are currency...\n";
        cout << "You wake up in a dark alley. Your mind is blank. A whisper echoes in your head: 'Eden'...\n";
        cout << "Do you want to search for your past? (yes/no): ";
        string choice;
        cin >> choice;

        if (choice == "yes") {
            searchForMemory();
        } else {
            cout << "You choose to remain forgotten. Game Over.\n";
        }
    }

    void searchForMemory() {
        cout << "\nYou find a mysterious device labeled 'Memory Vault'...\n";
        cout << "Inside, there are two files:\n";
        cout << "1. A file labeled 'Eden' (Encrypted)\n";
        cout << "2. A file labeled 'Oblivion Industries'\n";
        cout << "Which file do you want to open? (1/2): ";
        
        int choice;
        cin >> choice;

        if (choice == 1) {
            unlockEden();
        } else if (choice == 2) {
            uncoverConspiracy();
        } else {
            cout << "Invalid choice. The device self-destructs. Game Over.\n";
        }
    }

    void unlockEden() {
        cout << "\nDecrypting 'Eden'... Memory Restored!\n";
        cout << "Your name is Sol Ardent. You were a hacker who discovered that Nexus-9's elite were erasing people from history.\n";
        cout << "Do you want to expose the truth? (yes/no): ";
        
        string choice;
        cin >> choice;

        if (choice == "yes") {
            cout << "\nYou broadcast the truth to the world. The system collapses, and people reclaim their stolen memories. You are a hero!\n";
            cout << "Congratulations, you won the game!\n";
        } else {
            cout << "\nYou decide to erase the truth and live peacefully... but deep inside, you know you were part of something bigger.\n";
            cout << "Game Over.\n";
        }
    }

    void uncoverConspiracy() {
        cout << "\nAccessing 'Oblivion Industries'...\n";
        cout << "You discover that Oblivion Industries has been deleting people from reality.\n";
        cout << "But suddenly, a security system triggers. You are being erased!\n";
        cout << "Do you fight back or escape? (fight/escape): ";

        string choice;
        cin >> choice;

        if (choice == "fight") {
            cout << "\nYou hack into the system and disable the erasure process, but at a cost...\n";
            cout << "Your past is lost forever, but you saved countless others.\n";
            cout << "You become a legend in Nexus-9. Game Over.\n";
        } else {
            cout << "\nYou run, but the system is faster. Your existence is wiped from history. Game Over.\n";
        }
    }
};

int main() {
    MemoryDiver player;
    player.enterGame();
    return 0;
}