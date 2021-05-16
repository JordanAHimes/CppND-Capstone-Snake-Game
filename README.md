# CPP Nanodegree Capstone Project: Snake Game

<img src="snake_game.gif"/>


## Snake Game Extended Functionality
For the Capstone Project, I've chosen to extend the provided Snake Game in the following ways:

1. The value and color of each piece of food is dynamic until it is eaten.
2. In order to change the incentive structure and gameplay to compliment changing food value, the grid has been adjusted to be more cramped, the game speed is slowed down, the snake grows by one unit regardless of value, and the speed of the snake does not increase.  This changes the gameplay (and particularly endgame) from a frantic fast-paced to a slow strategic game of timing.
3. At the completion of a game, the user is to input a string to be recorded to a leader board along with score.
4. After entering the string, if the file does not exist, it is created.
5. After entering the string, the leader board is loaded from file, sorted and top ten results displayed.  In cases of less than 10 records, a segmentation fault is avoided.

## Project Rubric
The rubric for this project contains a few required criteria (namely related to README.MD and compiling and testing), and several categories with optional criteria ('Loops, Functions, I/O', 'Object Oriented Programming', 'Memory Management' & 'Concurrency') which are related to the major lessons from the Nanodegree.  The table below lists the fulfilled criteria categories, the specific critera and it's location in the codebase.

### Criteria Met
| Category | Criteria | Where |
| --- | --- | --- |
| README | A README with instructions is included with the project | http://github.com/JordanAHimes/CppND-Capstone-Snake-Game |
| README | The README indicates which project is chosen.| README.md/Snake Game Extended Functionality | 
| README | The README includes information about each rubric point addressed. | README.md/Project Rubric|
| Compiling & Testing | The submission must compile and run. | N/A |
| Loops, Functions, I/O | The project accepts user input and processes the input. | highscore.h/highscore.cpp |
| Loops, Functions, I/O | The project reads data from a file and process the data, or the program writes data to a file. | highscore.h/highscore.cpp |
| Object Oriented Programming | The project uses Object Oriented Programming techniques | foodval.h/foodval.cpp |
| Object Oriented Programming | Classes use appropriate access specifiers for class members | foodval.h/foodval.cpp |
| Object Oriented Programming | Classes abstract implementation details from their interfaces | foodval.h/foodval.cpp |
| Object Oriented Programming | Classes encapsulate behavior | foodval.h/foodval.cpp |



## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
