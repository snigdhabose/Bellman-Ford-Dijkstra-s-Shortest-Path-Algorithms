#include <bits/stdc++.h>
struct Edge {
   int source, destination, weight;
};
struct Graph {
   int V, E;
   struct Edge* edge;
};
struct Graph* graphInit(int V, int E) {
   struct Graph* g= new Graph;
   g->E = E;
   g->V = V;
   g->edge = new Edge[E];
   return g;
}
void imp_BF(struct Graph* g,int source) {
   int E = g->E, V = g->V, distance[V],u,v,weight;
   for (int it = 0; it< V; it++){
      distance[it] = INT_MAX;
	}
      distance[source] = 0;
   for (int it = 1; it <= V - 1; it++) {
      for (int j = 0; j < E; j++) {
         weight = g->edge[j].weight;
         v = g->edge[j].destination;
         u = g->edge[j].source;
         if (distance[u] + weight < distance[v] && distance[u] != INT_MAX){
         distance[v] = weight + distance[u];
	}
      }
   }
   for (int it = 0; it < E; it++) {
      weight = g->edge[it].weight;
      v = g->edge[it].destination;
      u = g->edge[it].source;
      if (distance[u] + weight < distance[v] && distance[u] != INT_MAX) {
         printf("negative weight cycle is present");
         return;
      }
   }
   printf("Vertex :\t\t\t ");
   for (int it = 0; it < V; ++it)
      printf("%d \t", it);
      printf("\nThe distance From Source : ");
   for (int it = 0; it < V; ++it)
      printf("%d \t",distance[it]);
   return;
}
int main() {
   int Edges = 8,Vertices = 5;
   struct Graph* g = graphInit(Vertices, Edges);
   g->edge[1].source = 0;
   g->edge[1].destination = 2;
   g->edge[1].weight = 4;
   g->edge[0].source = 0;
   g->edge[0].destination = 1;
   g->edge[0].weight = -1;
   g->edge[4].source = 1;
   g->edge[4].destination = 4;
   g->edge[4].weight = 2;
   g->edge[3].source = 1;
   g->edge[3].destination = 3;
   g->edge[3].weight = 2;
   g->edge[2].source = 1;
   g->edge[2].destination = 2;
   g->edge[2].weight = 3;
   g->edge[6].source = 3;
   g->edge[6].destination = 1;
   g->edge[6].weight = 1;
   g->edge[5].source = 3;
   g->edge[5].destination = 2;
   g->edge[5].weight = 5;
   g->edge[7].source = 4;
   g->edge[7].destination = 3;
   g->edge[7].weight = -3;
   imp_BF(g, 0);
   return 0;
}