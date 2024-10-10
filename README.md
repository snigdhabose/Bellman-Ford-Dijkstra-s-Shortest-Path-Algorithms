# 📊 Graph Algorithms & Techniques

This repository contains C++ implementations of various graph algorithms and techniques, including shortest path algorithms, geometric algorithms, graph connectivity, minimum spanning tree algorithms, and data compression.

## 📚 Table of Contents

- [Shortest Path Algorithms](#shortest-path-algorithms)
  - [Bellman-Ford Algorithm](#bellman-ford-algorithm)
  - [Dijkstra's Algorithm](#dijkstras-algorithm)
- [Geometric Algorithms](#geometric-algorithms)
  - [Convex Hull](#convex-hull)
- [Graph Connectivity and Structure](#graph-connectivity-and-structure)
  - [Cut Vertices (DFS)](#cut-vertices-dfs)
- [Minimum Spanning Tree (MST) Algorithms](#minimum-spanning-tree-mst-algorithms)
  - [Prim's Algorithm](#prims-algorithm)
  - [Kruskal's Algorithm](#kruskals-algorithm)
- [Data Compression](#data-compression)
  - [Huffman Coding](#huffman-coding)


![image](https://github.com/user-attachments/assets/49231fef-4bae-465b-9688-3ea7418498bb)

## Shortest Path Algorithms

### Bellman-Ford Algorithm
The Bellman-Ford algorithm computes the shortest paths from a single source vertex to all other vertices in a weighted graph, handling graphs with negative weight edges.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `BellmanFord.cpp`

### Dijkstra's Algorithm
Dijkstra's algorithm finds the shortest paths from a single source vertex to all other vertices in a weighted graph, ensuring non-negative edge weights.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `Dijkstra.cpp`

## Geometric Algorithms

### Convex Hull
The Convex Hull algorithm computes the smallest convex polygon that can enclose a set of points in a two-dimensional space. It's useful in various fields, including computer graphics and computational geometry.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `ConvexHull.cpp`

## Graph Connectivity and Structure

### Cut Vertices (DFS)
This implementation finds cut vertices (or articulation points) in a graph using Depth-First Search (DFS). A cut vertex is a vertex which, when removed, increases the number of connected components in the graph.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `CutVerticesDFS.cpp`

## Minimum Spanning Tree (MST) Algorithms

### Prim's Algorithm
Prim's algorithm finds the minimum spanning tree for a weighted undirected graph by growing the tree one edge at a time.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `PrimsAlgorithm.cpp`

### Kruskal's Algorithm
Kruskal's algorithm finds the minimum spanning tree for a weighted undirected graph by sorting edges and adding them one by one, ensuring no cycles are formed.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `KruskalsAlgorithm.cpp`

## Data Compression

### Huffman Coding
Huffman coding is a compression algorithm that creates a binary tree based on the frequency of characters to achieve variable-length encoding for optimal data compression.

**Steps to Run:**
1. Clone the repository
2. Import the project
3. Build and run `HuffmanCoding.cpp`

## Steps to Contribute
1. Fork the repository
2. Create a new branch: `git checkout -b feature/new-feature`
3. Make your changes and commit: `git commit -m 'Add new feature'`
4. Push to the branch: `git push origin feature/new-feature`
5. Open a pull request

## Dependencies
- C++ Compiler

Feel free to explore, use, and contribute to this project! Your contributions are appreciated.

## Acknowledgments
Thank you to the contributors and the open-source community.
