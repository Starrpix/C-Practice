//
//  Lifeline.cpp
//  KBCGame
//
//  Created by Arbin Chhatkuli on 23/07/2023.
//

#include "Lifeline.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Generates Random Percentage
int getRandomPercentage(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void AskAudienceLifeline::useLifeLine(const Question& question, int& score, bool& isGameOver) {
    cout << "Ask Audience Lifeline: Audience Poll" << endl;
    cout << "Audience poll shows the following distribution of votes:" << endl;

    int correctOptionIndex = question.correctOption - 1;
    int totalVotes = 100;
    int remainingVotes = totalVotes;

    // Random Percentage for each option generation
    int audienceVotes[4];
    for (int i = 0; i < 4; ++i) {
        if (i == correctOptionIndex) {
            audienceVotes[i] = getRandomPercentage(40, 70);
            remainingVotes -= audienceVotes[i];
        } else {
            audienceVotes[i] = getRandomPercentage(5, 20);
            remainingVotes -= audienceVotes[i];
        }
    }

    // Random votes to remaining incorrect options
    while (remainingVotes > 0) {
        int randomOption = rand() % 4;
        if (randomOption != correctOptionIndex) {
            int additionalVotes = min(remainingVotes, getRandomPercentage(1, 5));
            audienceVotes[randomOption] += additionalVotes;
            remainingVotes -= additionalVotes;
        }
    }

    // Poll results display
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << question.options[i] << ": " << audienceVotes[i] << "%" << endl;
    }
}

void FiftyFiftyLifeline::useLifeLine(const Question& question, int& score, bool& isGameOver) {
    cout << "Fifty-Fifty Lifeline: Two incorrect options are removed." << endl;

    int correctOptionIndex = question.correctOption - 1;
    int remainingOptions = 2;
    int removedOptions[4] = {0};

    // Two random incorrect options to remove
    while (remainingOptions > 0) {
        int randomOption = rand() % 4;
        if (randomOption != correctOptionIndex && !removedOptions[randomOption]) {
            removedOptions[randomOption] = 1;
            --remainingOptions;
        }
    }

    // Display the question and the remaining options after fifty-fifty
    cout << "Question: " << question.question << endl;
    for (int i = 0; i < 4; ++i) {
        if (!removedOptions[i]) {
            cout << i + 1 << ". " << question.options[i] << endl;
        }
    }
}

