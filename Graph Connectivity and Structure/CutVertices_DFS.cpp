#include<iostream>
#include <list>
using namespace std;
#define MIN -1

class Graph
{
    list<int> *lst_adjecent; 
    int vertice;     
    void utility(int u, bool visited[], int D[], int L[], int ancestor[], bool A[]){
    visited[u] = true;
    int child= 0;
    static int t= 0;
    D[u] = L[u] = ++t;
    list<int>::iterator it;
    for (it = lst_adjecent[u].begin(); it != lst_adjecent[u].end(); ++it)
    {
        int v = *it;  
        if (!visited[v])
        {
            child++;
            ancestor[v] = u;
            utility(v, visited, D, L, ancestor, A);
            L[u]  = min(L[u], L[v]);
            if (ancestor[u] == MIN && child> 1)
		{
               A[u] = true;
		}
            if (ancestor[u] != MIN && L[v] >= D[u])
		{
               A[u] = true;
		}
        }
        else if (v != ancestor[u])
		{
            L[u]  = min(L[u], D[v]);
		}
    }
}
public:
    Graph(int vertice){
    this->vertice = vertice;
    lst_adjecent = new list<int>[vertice];
}  
    void edgeAdd(int v, int w){
    lst_adjecent[v].push_back(w);
    lst_adjecent[w].push_back(v);  
}  
    void CV(){
    int *D = new int[vertice];
    int *L = new int[vertice];
    int *ancestor = new int[vertice];
    bool *visited = new bool[vertice];
    bool *A = new bool[vertice]; 
    for (int it = 0; it < vertice; it++)
    {
        ancestor[it] = MIN;
        visited[it] = false;
        A[it] = false;
    }
    for (int it = 0; it < vertice; it++)
	{
        if (visited[it] == false)
		{
            utility(it, visited, D, L, ancestor, A);
		}
	}
 
    for (int it = 0; it < vertice; it++)
	{
        if (A[it] == true)
		{
            cout << it << " ";
		}
	}
}
 
};
 
int main()
{
    cout << "\nCut vertices in graph \n";
    Graph g(5);
    g.edgeAdd(1, 0);
    g.edgeAdd(0, 2);
    g.edgeAdd(2, 1);
    g.edgeAdd(0, 3);
    g.edgeAdd(3, 4);
    g.CV();
 
    return 0;
}