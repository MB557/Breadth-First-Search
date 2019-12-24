# Breadth-First-Search

Implement __Breadth First Search__ on vertices numbered 0 to V-1. Implement the graph using an adjacency list only.

## Input Format 
The first input is T, the number of test cases. Thereafter, each test case starts with “V E”, where V is the number of vertices and E is the number of edges. Thereafter, each E line contains “u v” denoting an edge from the vertex u to the vertex v. The source is always taken to be vertex numbered 0.

## Output Format 
V lines, each printing the cost from source of the vertex V. If there is no path from source to V, print -1.

The edges are prioritized in the order they are input, with an earlier edge in input having a higher priority. The edges must be processed in the same order for any vertex.

## Sample Input

1 <br/>

7 14 <br/>

0 5 <br/>

5 0 <br/>

0 1 <br/>

1 0 <br/>

1 2 <br/>

2 1 <br/>

2 5 <br/>

5 2 <br/>

0 3 <br/>

3 0 <br/>

3 4 <br/>

## Sample Output

0 <br/>

1 <br/>

2 <br/>

1 <br/>

2 <br/>

1 <br/>

-1 <br/>

4 3 <br/>

4 5 <br/>

5 4 <br/>
