# Project Title: Command Line Tetris

## Description: 
This project is a C++ console application that recreates the classic game Tetris. It leverages basic command line interfaces for rendering the game's graphics. The game features rotation, scoring, and automatic line clearing.

## Features:

*    Command line graphics.
*    Real-time Tetris gameplay.
*    Scoring based on lines cleared.
*    Basic controls for movement and rotation.

## Technologies Used:

    C++
    Windows API for console handling

## Setup Instructions:

1.    Ensure you have a C++ compiler that supports C++11 (e.g., GCC, Clang, MSVC).
2.    Clone the repository: git clone [repository-url].
3.    Compile the code using a C++ compiler:
        For GCC or Clang: g++ -o Tetris Tetris.cpp
        For MSVC: cl Tetris.cpp
6.    Run the executable: ./Tetris on Unix or Tetris.exe on Windows.

## How to Play:

* Left Arrow: Move left
* Right Arrow: Move right
* Down Arrow: Move down
* Z: Rotate


## Project To Do List :

### Task 1: Set Up the Game Environment
**Define the Screen Size:** 
    What dimensions will your game window have? Define variables for screen width and height.
**Initialize the Playing Field:** 
    How large should the playing field be? Consider the width and height in blocks, not pixels.

### Task 2: Create Tetromino Shapes
**Define Tetromino Shapes:**
    How will you represent each tetromino shape in code? Think about using arrays or strings.
**Rotation Logic:**
    How can you translate a rotation action into changes in the tetromino shape array or string?

### Task 3: Implement the Game Field
**Initialize the Game Field Array:** 
    How will you track which parts of the field are filled? Consider using a single-dimensional array with calculated indices.
**Boundary and Collision Detection:** 
    How will you check if a tetromino can legally move to a new position or rotate?

### Task 4: Input Handling
**Key Presses:** 
    What keys will you use for moving and rotating tetrominos? How will you read these inputs without blocking the game’s update loop?
**Move and Rotate Tetrominos:** 
    How will you update the position of the tetromino based on user input?

### Task 5: Game Mechanics
**Dropping Tetrominos:** 
    How will you handle the automatic dropping of tetrominos over time?
**Clearing Lines:** 
    What happens when a line is completely filled? How will you clear it and update the game field?
**Game Over Condition:**
    How will you determine and handle the game over condition?

### Task 6: Rendering the Game
**Drawing the Board and Tetrominos:** 
    How will you visually represent the current state of the game board and the falling tetromino in the console?
**Screen Refresh:** 
    How can you efficiently update the console screen to reflect changes in the game state?

### Task 7: Scoring and Levels
**Scoring System:** 
    How will you calculate and display the score? What rules will affect scoring?
**Increasing Difficulty:** 
    How might you increase the game's difficulty as the player's score increases?

### Task 8: Debugging and Optimization
**Identify and Fix Bugs:** 
    What common issues should you watch for in Tetris games (e.g., rotation at boundaries, line clearing bugs)?
**Optimize Performance:** 
    Where could performance issues arise in your game, and how might you mitigate them?

### Task 9: Final Touches
**Polish the User Interface:**
    How can you improve the player's experience visually and interactively?
**Add Additional Features:** 
    What additional features could enhance the game (e.g., next piece preview, high score tracking)?