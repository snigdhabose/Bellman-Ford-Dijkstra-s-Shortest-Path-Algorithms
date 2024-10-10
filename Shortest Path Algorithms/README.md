# 🚀 Bellman-Ford and Dijkstra's Shortest Path Algorithms

This repository contains C++ implementations of the Bellman-Ford and Dijkstra's algorithms for finding the shortest paths in a graph.

#### Bellman-Ford Algorithm

**Sample Input:**

```cpp
// Set up graph
Edges = 8, Vertices = 5
g->edge[1].source = 0;
g->edge[1].destination = 2;
g->edge[1].weight = 4;
// ... (other edge configurations)
```

**Sample Output:**

```
Vertex: 0 1 2 3 4
The distance From Source: 0 -1 2 -2 1
```

**Steps to Run:**

1. Clone the repository
2. Import the project
3. Build and run `BellmanFord.cpp`