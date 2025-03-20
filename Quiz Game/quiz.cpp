#include <iostream>
#include <vector>
#include <string>

class Question {
public:
    std::string questionText;
    std::string answer;

    Question(std::string text, std::string ans) : questionText(text), answer(ans) {}
};

class Quiz {
private:
    std::vector<Question> questions;
    int score;

public:
    Quiz() : score(0) {}

    void addQuestion(const Question& q) {
        questions.push_back(q);
    }

    void start() {
        for (const auto& q : questions) {
            std::string userAnswer;
            std::cout << q.questionText << std::endl;
            std::cout << "Your answer: ";
            std::cin >> userAnswer;

            if (userAnswer == q.answer) {
                score++;
                std::cout << "Correct!" << std::endl;
            } else {
                std::cout << "Wrong! The correct answer is: " << q.answer << std::endl;
            }
        }
        std::cout << "Your total score: " << score << "/" << questions.size() << std::endl;
    }
};

int main() {
    Quiz quiz;
    quiz.addQuestion(Question("What is the capital of France?", "Paris"));
    quiz.addQuestion(Question("What is 2 + 2?", "4"));
    quiz.addQuestion(Question("What is the color of the sky?", "blue"));

    quiz.start();
    return 0;
}
