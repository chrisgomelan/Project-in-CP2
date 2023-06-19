#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;


struct SyntaxQuestion {
    string syntax;
   string answer;
};

bool isCorrectSyntax(const string& userInput, const string& correctSyntax) {
    return (userInput == correctSyntax);
}

int main() {
    SyntaxQuestion arrayQuestion;
    arrayQuestion.syntax = "int array(5);";
    arrayQuestion.answer = "int array[5];";

    SyntaxQuestion functionQuestion;
    functionQuestion.syntax = "if(initialization; condition; incrementation)\n"
                              "{\n"
                              "    // statements\n"
                              "}";
    functionQuestion.answer = "for(initialization; condition; incrementation)\n"
                              "{\n"
                              "    // statements\n"
                              "}";

    SyntaxQuestion questions[] = { arrayQuestion, functionQuestion };
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    cout << "Welcome to the Syntax Identification Game!" << endl;

    for (int i = 0; i < totalQuestions; i++) {
        cout << "Question " << (i + 1) << ": Identify the correct syntax." << endl;
        cout << questions[i].syntax << endl;

        string userInput;
        cout << "Your answer:" << endl;
        getline(cin, userInput);

        if (isCorrectSyntax(userInput, questions[i].answer)) {
            cout << "Correct syntax!" << endl;
            score++;
        } else {
            cout << "Incorrect syntax. The correct answer is:" << endl;
            cout << questions[i].answer << endl;
        }

        cout << endl;
    }

    cout << "Game Over!" << endl;
    cout << "Your score: " << score << " out of " << totalQuestions << endl;

    return 0;
}
