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

#### Dijkstra's Algorithm

**Sample Input:**

```cpp
// Set up graph
vertex = 9;
graph.edge_add(0, 7, 8);
graph.edge_add(0, 1, 4);
// ... (other edge configurations)
```

**Sample Output:**

```
Vertex: Distance from Source
0: 0
1: 4
2: 12
3: 19
4: 21
5: 11
6: 9
7: 8
8: 14
```

**Steps to Run:**

1. Clone the repository
2. Import the project
3. Build and run `Dijkstra.cpp`

### Steps to Contribute

1. Fork the repository
2. Create a new branch: `git checkout -b feature/new-feature`
3. Make your changes and commit: `git commit -m 'Add new feature'`
4. Push to the branch: `git push origin feature/new-feature`
5. Open a pull request

### Dependencies

- C++ Compiler

Feel free to explore, use, and contribute to this project! Your contributions are appreciated.

### Acknowledgments

- Thank you to the contributors and the open-source community.

**Note:** Make sure to provide clear instructions for building and running the projects, and ensure that your code adheres to best practices. You may also want to consider adding a license file to specify how others can use and contribute to your code.
