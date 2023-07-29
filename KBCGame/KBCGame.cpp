//
//  KBCGame.cpp
//  KBCGame
//
//  Created by Arbin Chhatkuli on 23/07/2023.
//

#include "KBCGame.h"
#include <iostream>
using namespace std;


// ... (other includes and code)

void KBCGame::start() {
    cout << "Welcome to Kaun Banega Crorepati (KBC)!" << endl;
    cout << "You will be asked a series of questions, and you have to choose the correct answer." << endl;
    cout << "You can use lifelines to help you along the way." << endl;
    cout << "Let's get started!" << endl;

    while (!isGameOver) {
        // Display the current question
        dispQuestion();

        // Get the player's answer
        int playerAnswer;
        cout << "Enter your answer (1-4): ";
        cin >> playerAnswer;

        // Check if the answer is valid
        if (playerAnswer < 1 || playerAnswer > 4) {
            cout << "Invalid answer! Please enter a number between 1 and 4." << endl;
            continue;
        }

        // Check if the answer is correct
        const Question& currentQuestion = questions[currentQuestionIndex];
        if (playerAnswer == currentQuestion.correctOption) {
            cout << "Correct answer! You have won " << currentQuestion.difficultyLevel << " points." << endl;
            score += currentQuestion.difficultyLevel;
        } else {
            cout << "Incorrect answer! Game over." << endl;
            isGameOver = true;
        }

        // Move to the next question
        ++currentQuestionIndex;

        // Check if the game is over
        if (currentQuestionIndex >= 30) {
            cout << "Congratulations! You have completed the game." << endl;
            showTier();
            isGameOver = true;
        } else {
            // Show the current tier after each question
            showTier();
        }
    }

    // Clean up lifelines
    delete lifelines[0];
    delete lifelines[1];
}

// ... (other functions)


KBCGame::KBCGame() : currentQuestionIndex(0), score(0), isGameOver(false) {
    srand(static_cast<unsigned int>(time(0)));
    initQuestions();

    // Initializing the lifelines
    lifelines[0] = new AskAudienceLifeline();
    lifelines[1] = new FiftyFiftyLifeline();
}


void KBCGame::initQuestions() {
    loadQuestionsFromFile("questions.txt");
}

void KBCGame::loadQuestionsFromFile(const string& filename) {
    ifstream inputFile(filename);

    // error case
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << ". Exiting..." << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    int questionIndex = 0;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string token;
        while (getline(iss, token, '|')) {
            if (token == "QUESTION") {
                getline(iss, questions[questionIndex].question, '|');
            } else if (token == "OPTION") {
                for (int i = 0; i < 4; ++i) {
                    getline(iss, questions[questionIndex].options[i], '|');
                }
            } else if (token == "CORRECT_OPTION") {
                string correctOptionStr;
                getline(iss, correctOptionStr, '|');
                questions[questionIndex].correctOption = stoi(correctOptionStr);
            }
        }
        ++questionIndex;
    }
    inputFile.close();
}

void KBCGame::dispQuestion() const {
    const Question& currentQuestion = questions[currentQuestionIndex];
    cout << "Question " << (currentQuestionIndex + 1) << " (Difficulty Level: " << currentQuestion.difficultyLevel << "): "
         << currentQuestion.question << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << currentQuestion.options[i] << endl;
    }
}

void KBCGame::showTier() const {
    cout << endl << "Current Tier: ";
    if (score >= 10000000) {
        cout << "1 Crore" << endl;
    } else if (score >= 5000000) {
        cout << "50 Lakh" << endl;
    } else if (score >= 1000000) {
        cout << "10 Lakh" << endl;
    } else if (score >= 320000) {
        cout << "3 Lakh 20 Thousand" << endl;
    } else if (score >= 100000) {
        cout << "1 Lakh" << endl;
    } else {
        cout << "No Tier" << endl;
    }
}

