#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "foodval.h"
#include "highscore.h"
#include <memory>
#include <string>

//Renderer renderer(640,640,8,8);

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{8};
  constexpr std::size_t kGridHeight{8};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  FoodVal::instance();
 
  game.Run(controller, renderer, kMsPerFrame);
  
  int size = game.GetSize();
  int score = game.GetScore();
  ScoreBoardSequence(size, score);

  return 0;
}