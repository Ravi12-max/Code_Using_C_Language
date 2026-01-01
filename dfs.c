#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

int adjMatrix[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
int numNodes;

void dfs(int node) {
	// Write your code here...
	visited[node]=1;
	printf("%d ",node);
	for(int i=0;i<numNodes;i++){
		if(adjMatrix[node][i] == 1 && !visited[i]){
			dfs(i);
		}
	}
	
}

int main() {
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    int startNode;
    printf("Enter the starting node (0 to %d): ", numNodes - 1);
    scanf("%d", &startNode);

    // Initialize visited array
    for (int i = 0; i < numNodes; i++) {
        visited[i] = 0;
    }

    printf("Reachable nodes from %d: ", startNode);
    dfs(startNode);
    printf("\n");

    return 0;
}
