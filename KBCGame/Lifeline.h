//
//  Lifeline.h
//  KBCGame
//
//  Created by Arbin Chhatkuli on 23/07/2023.
//

#ifndef LIFELINE_H
#define LIFELINE_H

#include "Question.h"

class Lifeline {
public:
    virtual ~Lifeline() {} // virtual destructor
    virtual void useLifeLine(const Question& question, int& score, bool& isGameOver) = 0;
};

class AskAudienceLifeline : public Lifeline {
public:
    void useLifeLine(const Question& question, int& score, bool& isGameOver) override;
};

class FiftyFiftyLifeline : public Lifeline {
public:
    void useLifeLine(const Question& question, int& score, bool& isGameOver) override;
};

#endif
