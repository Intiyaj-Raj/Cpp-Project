#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Question {
public:
    string question;
    vector<string> options;
    int answer;

    Question(string q, vector<string> opts, int ans) : question(q), options(opts), answer(ans) {}
};

class QuizGame {
private:
    vector<Question> questions;
    int score;

public:
    QuizGame() : score(0) {
        questions.push_back(Question("What is the capital of France?", {"1. Berlin", "2. Madrid", "3. Paris", "4. Rome"}, 3));
        questions.push_back(Question("What is 2 + 2?", {"1. 3", "2. 4", "3. 5", "4. 6"}, 2));
        questions.push_back(Question("What is the largest planet in our solar system?", {"1. Earth", "2. Mars", "3. Jupiter", "4. Saturn"}, 3));
    }

    void start() {
        cout << "Welcome to the Quiz Game!" << endl;
        for (size_t i = 0; i < questions.size(); ++i) {
            cout << questions[i].question << endl;
            for (const auto& option : questions[i].options) {
                cout << option << endl;
            }
            int userAnswer;
            cout << "Enter the number of your answer: ";
            cin >> userAnswer;
            if (userAnswer == questions[i].answer) {
                cout << "Correct!" << endl;
                score++;
            } else {
                cout << "Wrong! The correct answer was: " << questions[i].options[questions[i].answer - 1] << endl;
            }
        }
        cout << "Your final score is: " << score << "/" << questions.size() << endl;
    }
};

int main() {
    QuizGame game;
    game.start();
    return 0;
}