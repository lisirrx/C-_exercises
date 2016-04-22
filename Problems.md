# Problem Set 2

## Problem 1 IQ Test

### Description

In the city of MaoGe World job applicants are often offered an IQ test.

The test is as follows: the person gets a piece of squared paper with a $4 \times 4​$ square painted on it. Some of the square's cells are painted black and others are painted white. Your task is to repaint at most one cell the other color so that the picture has a $2 \times 2​$ square, completely consisting of cells of the same color. If the initial picture already has such a square, the person should just say so and the test will be completed.

Your task is to write a program that determines whether it is possible to pass the test. You cannot pass the test if either repainting any cell or no action doesn't result in a $2 \times 2$ square, consisting of cells of the same color.

### Input

Four lines contain four characters each: the $j$th character of the $i$th line equals `.` if the cell in the $i$th row and the $j$th column of the square is painted white, and `#`, if the cell is black.

### Output

Print `YES`, if the test can be passed, and `NO` otherwise.

### Examples

#### Input 1

```
####
.#..
####
....
```

#### Output 1

```
YES
```

#### Input 2

```
####
....
####
....
```

#### Output 2

```
NO
```



## Problem 2 MaoGe and Two Dots

### Description

MaoGe is playing a mobile puzzle game called "Two Dots". The basic levels are played on a board of size $n \times m$ cells like this:

![](http://codeforces.com/predownloaded/40/54/4054f56d341c153a25dbc44b4a1e613d802d0149.png)

Each cell contains a dot that has some colors. We will use different uppercase Latin characters to express different colors.

The key of this game is to find a cycle that contain dots of same color. Consider 4 blue dots on the picture forming a circle as an example. Formally, we call a sequence of dots $d_1,d_2,\cdots,d_k$ a cycle if and only if it meets the following condition: 

1. These $k$ dots are different: if $i \neq j$ then $d_i$ is different from $d_j$.
2. $k \ge 4$.
3. All dots belong to the same color.
4. $\forall 1 \le i \le k-1$: $d_i$ and $d_{i+1}$ are adjacent. Also, $d_k$ and $d_1$ should also be adjacent. Cells $x$ and $y$ are called adjacent if they share an edge. 

Determine if there exists a *cycle* on the field.

### Input

The first line contains two integers $n$ and $m$: the number of rows and columns of the board.

Then $n$ lines follow, each line contains a string consisting of $m$ characters, expressing colors of dots in each line. Each character is an uppercase Latin letter.

### Output

Output `Yes` if there exists a cycle, and `No` otherwise.

### Examples

#### Input 1

```
3 4
AAAA
ABCA
AAAA
```

#### Output 1

```
Yes
```

#### Input 2

```
3 4
AAAA
ABCA
AADA
```

#### Output 2

```
No
```

#### Input 3

```
4 4
YYYR
BYBY
BBBY
BBBY

```

#### Output 3

```
Yes

```

#### Input 4

```
7 6
AAAAAB
ABBBAB
ABAAAB
ABABBB
ABAAAB
ABBBAB
AAAAAB
```

#### Output 4

```
Yes
```

#### Input 5

```
2 13
ABCDEFGHIJKLM
NOPQRSTUVWXYZ
```

#### Output 5

```
No
```

### Notes

- In first sample test all `A` form a cycle.


- In second sample there is no such cycle.


- The third sample is displayed on the picture above (`Y` = Yellow, `B` = Blue, `R` = Red).

### Data Scale

$2 \le n, m \le 50$

### Source

[CodeForces 510B](https://codeforces.com/contest/510/problem/B)



## Problem 3 Maze

### Description

MaoGe loves grid mazes. A grid maze is an $n \times m$ rectangle maze where each cell is either empty, or is a wall.

You can go from one cell to another only if both cells are empty and have a common side.

MaoGe drew a grid maze with all empty cells forming a connected area. That is, you can go from any empty cell to any other one. MaoGe doesn't like it when his maze has too little walls. He wants to turn exactly $k$ empty cells into walls so that all the remaining cells still formed a connected area. Help him.

### Input

The first line contains three integers $n, m, k$, where $n$ and $m$ are the maze's height and width, correspondingly, $k$ is the number of walls MaoGe wants to add and letter $s$ represents the number of empty cells in the original maze.

Each of the next $n$ lines contains $m$ characters. They describe the original maze. If a character on a line equals `.`, then the corresponding cell is empty and if the character equals `#`, then the cell is a wall.

### Output

Print $n$ lines containing $m$ characters each: the new maze that fits MaoGe's requirements. Mark the empty cells that you transformed into walls as `X`, the other cells must be left without changes (that is, `.` and `#`).

It is guaranteed that a solution exists. If there are multiple solutions you can output any of them.

### Examples

#### Input 1

```
3 4 2
#..#
..#.
#...
```

#### Output 1

```
#.X#
X.#.
#...
```

#### Input 2

```
5 4 5
#...
#.#.
.#..
...#
.#.#
```

#### Output 2

```
#XXX
#X#.
X#..
...#
.#.#
```

### Data Scale

$1 \le n, m \le 500$

$0 \le k < s$

### Source

[CodeForces 377A](https://codeforces.com/problemset/problem/377/A)