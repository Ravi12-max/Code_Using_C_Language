#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int graph[MAX][MAX], visited[MAX], n;

void createGraph() {
    printf("Number of cities (nodes): ");
    scanf("%d", &n);
    printf("Adjacency matrix:\n");
    // Write your code here...
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&graph[i][j]);
		}
	}
}

void bfs(int start) {
	// Write your code here...
	int queue[MAX],front=0,rear=0;
	visited[start]=1;
	queue[rear++]=start;
	printf("Reachable nodes from %d: ",start);
	while(front<rear){
		int current=queue[front++];
		printf("%d ",current);
		for(int i=0;i<n;i++){
			if(graph[current][i] == 1 && !visited[i]){
				visited[i]=1;
				queue[rear++]=i;
			}
		}
	}
	printf("\n");
}

int main() {
    createGraph();
    
    int start;
    printf("Starting city (0 to %d): ", n - 1);
    scanf("%d", &start);
    
    for (int i = 0; i < MAX; i++) {
        visited[i] = 0;
    }

    bfs(start);
    
    return 0;
}
