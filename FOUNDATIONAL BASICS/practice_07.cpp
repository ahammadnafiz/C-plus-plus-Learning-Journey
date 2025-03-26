#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Define the quiz data: {Question, Option A, Option B, Option C, Option D, Correct Answer}
    string quiz[][6] = {
        {"What is the capital of France?", "A. Berlin", "B. Madrid", "C. Paris", "D. Rome", "C"},
        {"Which planet is known as the Red Planet?", "A. Earth", "B. Mars", "C. Jupiter", "D. Venus", "B"},
        {"Who wrote 'Hamlet'?", "A. Charles Dickens", "B. William Shakespeare", "C. Mark Twain", "D. Jane Austen", "B"}
    };
    
    int rows = sizeof(quiz) / sizeof(quiz[0]);
    int cols = sizeof(quiz[0]) / sizeof(quiz[0][0]);
    
    int score = 0;
    string answer;
    
    // Loop through the quiz questions
    for (int i = 0; i < rows; i++) {
        cout << "\nQuestion " << i + 1 << ": " << quiz[i][0] << endl;
        for (int j = 1; j < cols - 1; j++) {
            cout << quiz[i][j] << endl;
        }
        
        cout << "Enter your answer (A/B/C/D): ";
        cin >> answer;
        
        // Convert input to uppercase to handle case-insensitive answers
        if (!answer.empty()) {
            answer[0] = toupper(answer[0]);
        }
        
        if (answer == quiz[i][cols - 1]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was " << quiz[i][cols - 1] << "." << endl;
        }
    }
    
    // Display the final score
    cout << "\nYou scored " << score << " out of " << rows << "!" << endl;
    
    return 0;
}