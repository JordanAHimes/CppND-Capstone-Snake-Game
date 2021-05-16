#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::iostream;
using std::fstream;
using std::istringstream;
using std::string;
using std::vector;


struct GameRecord{
    string name;
    int size;
    int score;
};


void PrintHighScores(vector<GameRecord> highscores){

      cout << "\n\t\t\tTOP TEN SCORES\n\n";
      cout << "\t\tName\t\tSize\t\tScore\n";
      cout << "-----------------------------------------------------------\n\n";

      for (int i=0; i < 10 && i <= highscores.size()-1; i++){
        if(highscores[i].name.length() < 8){
          cout << i << ".\t\t"<< highscores[i].name << "\t\t" << highscores[i].size << "\t\t" << highscores[i].score << "\n";
        }
        else{
          cout << i << ".\t\t"<< highscores[i].name << "\t" << highscores[i].size << "\t\t" << highscores[i].score << "\n";
        }
      }

}


void ReadHighScores() {
  fstream ifs ("../src/highscores.txt");

  vector<GameRecord> highscores;

  if (ifs) {
    string line;
    while (getline(ifs, line)) {
      istringstream ss(line);
      vector<string> vect;
      while(ss.good()){
        string substr;
        getline(ss,substr,',');
        vect.push_back(substr);
      }

      GameRecord gamerecord;
      gamerecord.name = vect[0];
      gamerecord.size = std::stoi(vect[1]);
      gamerecord.score = std::stoi(vect[2]);
      highscores.push_back(gamerecord);

      std::sort(highscores.begin(),highscores.end(),[](GameRecord a,GameRecord b){return a.score > b.score;});
     }
  }
  PrintHighScores(highscores);
  return;
}

void WriteHighScores(string name, int size, int score){
    fstream ofs;

    
    ofs.open ("../src/highscores.txt", fstream::app);
    ofs << name << "," << size << "," << score << "\n";
    ofs.close();

    return;

}

void ScoreBoardSequence(int size, int score){
  std::cout << "GAME OVER.  ENTER YOUR NAME: ";
  std::string name;
  std::cin >> name;

  WriteHighScores(name,size,score);
  ReadHighScores();

}