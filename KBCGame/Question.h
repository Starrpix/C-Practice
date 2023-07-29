//
//  Questions.h
//  KBCGame
//
//  Created by Arbin Chhatkuli on 23/07/2023.
//

#ifndef QUESTION_H
#define QUESTION_H

#include <string>
using namespace std;

class Question {
public:
    string question;
    string options[4];
    int correctOption;
    int difficultyLevel;
};

#endif
