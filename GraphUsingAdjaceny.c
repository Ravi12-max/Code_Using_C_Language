#include<stdio.h>
#define MAX 10
int main(){
	int v;
	scanf("%d",&v);
	if(v<=0 || v>MAX){
		printf("-1\n");
		return 0;
	}
      int adj[MAX][MAX];
	for(int i=0;i<v;i++){
		for(int j=0; j<v;j++){
			scanf("%d",&adj[i][j]);
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0; j<v;j++){
			printf("%d",adj[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
