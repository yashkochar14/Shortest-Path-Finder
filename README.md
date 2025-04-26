
# 📘 BFS Shortest Path Finder (C Language)

This project implements the **Breadth-First Search (BFS)** algorithm to find the **shortest path** in an **unweighted graph** using the **adjacency matrix representation**. It takes user input for the number of nodes, edges, and the source and destination nodes, and prints the shortest path (if any exists).

---

## 🚀 Features

- Accepts dynamic input for graph construction.
- Uses **BFS** for shortest path calculation.
- Supports **undirected unweighted graphs**.
- Traces and displays the **shortest path from source to destination**.
- Handles disconnected graphs by reporting if no path exists.

---

## 🧠 Algorithm Used

- **Breadth-First Search (BFS):**
  - Explores nodes level by level.
  - Guarantees shortest path (minimum number of edges) in unweighted graphs.
  - Efficiently implemented using a queue.

---

## 🛠️ How It Works

1. User inputs number of nodes and edges.
2. Graph is created using an adjacency matrix.
3. BFS is run from the source node.
4. If destination is reached, the path is traced back using the `parent[]` array.
5. The path is printed in correct order from source to destination.

---

## 📂 File Structure

```
bfs_shortest_path.c    # Main C program implementing BFS
README.md              # Project documentation
```

---

## 🧾 Sample Input & Output

**Input:**
```
Enter number of nodes and edges: 6 7
Enter edges (format: from to):
0 1
0 2
1 3
2 3
3 4
4 5
2 5
Enter source and destination: 0 5
```

**Output:**
```
Shortest Path: 0 2 5
```

---

## 📌 How to Run

### 🖥️ Compile
```bash
gcc bfs_shortest_path.c -o bfs
```

### ▶️ Run
```bash
./bfs
```

---

## ✅ Requirements

- C compiler (e.g., GCC)
- Basic understanding of graphs and BFS

---

## 🔍 Code Overview

- `adj[MAX][MAX]` → Adjacency matrix.
- `visited[MAX]` → Tracks visited nodes.
- `parent[MAX]` → Helps reconstruct the path.
- `bfs(start, end, n)` → Function to run BFS from source to destination.

---

## 💡 Applications

- Maze solvers and game maps
- Network routing algorithms
- Social network path finding
- AI pathfinding algorithms

---

## 📬 Future Improvements

- Convert to adjacency list for better scalability.
- Add support for **weighted graphs** using **Dijkstra’s Algorithm**.
- Extend to **2D grid** problems like mazes.
- Visualize the graph and path using a GUI.

---
