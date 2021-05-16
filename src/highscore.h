#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

struct GameRecord;

void WriteHighScores(string name, int size, int score);

void ReadHighScores();

void PrintHighScores(vector<GameRecord>);
void ScoreBoardSequence(int size, int score);


#endif