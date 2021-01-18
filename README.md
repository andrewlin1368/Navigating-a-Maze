# Navigating Maps

## Introduction
Maze navigating and pathfinding is a common task in games. For Pac-Man for example, we
might be given the task of finding a path that leads the ghost to Pac-Man. Pathfinding is also
common in other applications such as getting directions from a GPS. <br />

<p float="left">
  <img src="https://www.fishbowlinventory.com/blog/wp-content/uploads/2012/03/Maze-solved.jpg" width="250" />
  <img src="https://upload.wikimedia.org/wikipedia/en/5/59/Pac-man.png" width="250" /> 
  <img src="https://www.researchgate.net/profile/Gerald_Futschek/publication/221437678/figure/fig1/AS:305442774372352@1449834640553/The-Left-Wall-Algorithm-After-entering-the-maze-we-follow-the-left-wall-This-left-wall.png" width="250" />
</p>

In this project we will explore maze navigation and pathfinding. We start with a simple problem
in which, we are given a sequence of steps that a robot takes going into a maze and we simply
want to output the directions (reverse steps) that will get the robot out of the maze. Afterwards
we will work with navigation and pathfinding in a maze.

## Quick Recap of Concepts (1)
This section is a quick recap of the concepts that you need to know for this project. If you don’t
understand something or can’t answer the questions and exercises, you should review the
textbook/material provided for this topic. <br />
A stack is a linear structure (like an array). A stack (unlike an array) restricts how elements are
inserted, retrieved, and removed: The most recently inserted element in the stack is the only
one that can be retrieved or removed. This is called LIFO ordering (last-in, first-out).
The pile of trays in a cafeteria works like a stack: When you remove a tray from the pile, you
take the one on top. If (for whatever reason) you want the tray at the bottom of the pile, you
must remove all the ones on top of it to reach it. <br />
Many computer algorithms use stacks. Stacks are used for:
1. remembering partially completed tasks, for example subexpressions of a complex
arithmetic expression are remembered for later computation.
2. undoing (backtracking from) an action, for example the “undo” button on most text
editors or the “back” button on a browser

## Programming Exercise, Part 1
a. Download the starter code for this part of the project. It contains a partial solution for the
problem of a robot finding its way out of a warehouse. <br />
FILES: MazePath.cxx, MazePath.h, and MazePath.cpp <br />
b. Complete the directionsOut() member function of the MazePath class and the
overloaded output operator in the Path class. <br />
c. Use the MazePathTest program to check whether your solution is correct. <br />
d. Add a test to the MazePathTest program for the following steps: <br />
“NESWNESWNESWNESW” (you have to figure out the solution and compare to it using
assert; just look at the other tests in the MazePathTest program to understand how a
test is written for a specific input value).

## Programming Exercise, Part 2
Write a client program that will let the user enter a path into the maze and it will output the
sequence of reverse steps to get out. The program should loop until the user decides to quit.
Validate that the user does not enter invalid input (only N, S, W, and E should be part of the
input string.)

## Navigating a Maze
Assume that we have not been given the steps that the robot took to go inside a maze and we
are left with the task of getting the robot out of the maze. <br /> 
We can generalize this problem as finding a path from a start position to a goal position in a
maze. A simple solution will simply have the robot navigate through available paths in the maze
until it finds its way to the goal state, backtracking when it gets stuck. A backtracking
algorithm for such solution is the following:
1. Mark every square in the maze as unvisited.
2. Create an empty stack (of maze positions).
3. Push the start positions onto the stack, and mark the start square as visited.
4. If the stack is empty, you're done and the maze is unsolvable.
5. Let T be the top item on the stack. If T is equal to the finish square, you're done
and the stack contains a solution to the maze.
6. If all squares adjacent to T (i.e. the squares up, down, right, or left from T) are
either blocked or are marked visited already, pop T off the stack and go to step 4.
7. Otherwise, select a square S that is adjacent to T, unvisited, and unblocked.
Mark S as visited and push its positions on the stack. Go to step 4.

## Programming Homework
Download the starter code for this part of the project and make sure you understand the Maze
class. <br />
FILES: Maze.cpp, Maze.h <br />
TASK 1. Write a client program (MazeClient.cpp) to create the following maze as an object of
the Maze class: <br />
 _________ <br />
 |S......| <br />
 |...X...| <br />
 |...X...| <br />
 |.......| <br />
 |.......| <br />
 |.......| <br />
 |......G| <br />
 --------- <br />
TASK 2. Implement the solveBacktracking member function of the Maze class (Maze.cxx). Use
the algorithm above. <br />
TASK 3. Solve the maze created in TASK1 using the solveBacktracking function. <br />
NOTE: You might need to add functions to the Maze class, depending on how you approach the
solution. Add/modify the class as needed. But do not repeat functionality. Use the functions that
are there when appropriate (e.g., the isClear function for checking if a cell is clear) <br />
