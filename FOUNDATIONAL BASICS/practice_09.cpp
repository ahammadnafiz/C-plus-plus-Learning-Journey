#include <iostream>
using namespace std;
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWin(spaces, player, computer))
        {
            cout << "Player wins!" << '\n';
            break;
        }
        else if (checkTie(spaces))
        {
            cout << "It's a tie!" << '\n';
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWin(spaces, player, computer))
        {
            cout << "Computer wins!" << '\n';
            break;
        }
        else if (checkTie(spaces))
        {
            cout << "It's a tie!" << '\n';
            break;
        }
    }

    cout << "Game over!" << '\n';

    return 0;
}

void drawBoard(char *spaces)
{   
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;

    while (true)
    {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;

        if (number >= 1 && number <= 9 && spaces[number - 1] == ' ')
        {
            spaces[number - 1] = player;
            break;
        }
        else
        {
            cout << "Invalid move. Try again." << '\n';
        }
    }
}

void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));

    while (true)
    {
        number = rand() % 9;  
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWin(char *spaces, char player, char computer)
{
    int winPatterns[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  // Columns
        {0, 4, 8}, {2, 4, 6}              // Diagonals
    };

    for (int i = 0; i < 8; i++)
    {
        int a = winPatterns[i][0];
        int b = winPatterns[i][1];
        int c = winPatterns[i][2];

        if (spaces[a] != ' ' && spaces[a] == spaces[b] && spaces[b] == spaces[c])
        {
            return true;
        }
    }

    return false;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}