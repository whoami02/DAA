#include <stdio.h>
#include <stdlib.h>

int BellFord(int G[20][20], int V, int E, int edge[20][20]){
    int i, u, v, k, distance[20], parent[20], S, flag = 1;
    for(i=0; i<V; i++)
        distance[i] = 1000, parent[i] = -1;
    printf("Enter Source: ");
    scanf("%d", &S);
    distance[S-1] = 0;

    for(i=0; i<V-1; i++){
        for(k=0; k<E; k++){
            u = edge[k][0], v = edge[k][1];
            if(distance[u] + G[u][v] < distance[v])
                distance[v] = distance[u] + G[u][v], parent[v] = u;
        }
    }
    for(k=0; k<E; k++){
        u = edge[k][0], v = edge[k][1];
        if(distance[u] + G[u][v] < distance[v])
            flag = 0;
    }
    if(flag)
        for(i=0; i<V; i++)
            printf("Vertex %d -> cost %d parent %d\n", i+1, distance[i], parent[i]+1);

    return flag;
}

int main(int argc, char const *argv[]) {
    int V, k=0, G[20][20], edge[20][2], i, j    ;
    printf("Enter the no. of vertices\n");
    scanf("%d", &V);
    printf("Enter the graph in Matrix form\n");
    for(i=0; i<V; i++)
        for(j=0; j<V; j++){
            scanf("%d\t", &G[i][j]);
            if(G[i][j] != 0)
                edge[k][0] = i, edge[k++][1] = j;
        }
    printf("\nAll right\n");
    if(BellFord(G, V, k, edge))
        printf("\nNo Negative Cycle detected\n");
    else
        printf("\nNegative Cycle detected\n");
    return 0;
}
