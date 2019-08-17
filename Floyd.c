#include "stdio.h"

#define INF 9999
#define V 5

void print(int dist[][V]);

void FW(int graph[][V])
{
	int dist[V][V], i, j, k;
	for(i=0; i<V; i++)
		for ( j = 0; j < V; j++) {
			dist[i][j] = graph[i][j];
		}
	for(k=0; k<V; k++)
		for(i=0; i<V; i++)
			for(j=0; j<V; j++){
				if(dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
	print(dist);
}

void print(int dist[][V])
{
	int i, j;
	printf("The shortest Distance matrix of the graph is:\n");
	for(i=0; i<V; i++){
		for(j=0; j<V; j++)
			printf("%d\t", dist[i][j]);
		printf("\n");
	}
}

void main()
{
	int i, j;
	int graph[V][V] = {{0, 3, 8, INF, -4},
	 {INF, 0, INF, 1, 7},
	 {INF, 4, 0, INF, INF},
	 {2, INF, -5, 0, INF},
	 {INF, INF, INF, 6, 0}};
	printf("Entered Distance matrix of the graph is:\n");
	for(i=0; i<V; i++){
		for(j=0; j<V; j++)
			printf("%d\t", graph[i][j]);
		printf("\n");
	}
	FW(graph);
}
