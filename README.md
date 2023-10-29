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

