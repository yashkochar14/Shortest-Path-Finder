#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int adj[MAX][MAX];       // Adjacency matrix
int visited[MAX];        // Visited array
int parent[MAX];         // To store the path

void bfs(int start, int end, int n) {
    int queue[MAX], front = 0, rear = 0;
    
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        parent[i] = -1;
    }

    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        
        for (int i = 0; i < n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                parent[i] = current;
                queue[rear++] = i;
                
                if (i == end)  // Stop early if destination is found
                    break;
            }
        }
    }

    // Print the path from start to end
    if (!visited[end]) {
        printf("No path found from %d to %d\n", start, end);
        return;
    }

    int path[MAX], pathLen = 0, temp = end;
    while (temp != -1) {
        path[pathLen++] = temp;
        temp = parent[temp];
    }

    printf("Shortest Path: ");
    for (int i = pathLen - 1; i >= 0; i--) {
        printf("%d ", path[i]);
    }
    printf("\n");
}

int main() {
    int n, e;
    printf("Enter number of nodes and edges: ");
    scanf("%d %d", &n, &e);

    printf("Enter edges (format: from to):\n");
    for (int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // undirected graph
    }

    int start, end;
    printf("Enter source and destination: ");
    scanf("%d %d", &start, &end);

    bfs(start, end, n);
    return 0;
}
