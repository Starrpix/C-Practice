//
//  KBCGame.h
//  KBCGame
//
//  Created by Arbin Chhatkuli on 23/07/2023.
//

#ifndef KBCGAME_H
#define KBCGAME_H

#include "Question.h"
#include "Lifeline.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>

using namespace std;

class KBCGame {
public:
    KBCGame();
    void start(); // starts the game loop

private:
    Question questions[30];
    int currentQuestionIndex;
    int score;
    bool isGameOver;
    Lifeline* lifelines[2];

    void initQuestions();
    void dispQuestion() const;
    void showTier() const;
    int getRandomNumber(int min, int max);
    void loadQuestionsFromFile(const string& filename);
};

#endif

