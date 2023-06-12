#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;
struct SyntaxQuestion {
    std::string syntax;
    std::string answer;
};

bool isCorrectSyntax(const std::string& userInput, const std::string& correctSyntax) {
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

    std::cout << "Welcome to the Syntax Identification Game!" << std::endl;

    for (int i = 0; i < totalQuestions; i++) {
        std::cout << "Question " << (i + 1) << ": Identify the correct syntax." << std::endl;
        std::cout << questions[i].syntax << std::endl;

        std::string userInput;
        std::cout << "Your answer:" << std::endl;
        std::getline(std::cin, userInput);

        if (isCorrectSyntax(userInput, questions[i].answer)) {
            std::cout << "Correct syntax!" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect syntax. The correct answer is:" << std::endl;
            std::cout << questions[i].answer << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << "Game Over!" << std::endl;
    std::cout << "Your score: " << score << " out of " << totalQuestions << std::endl;

    return 0;
}
