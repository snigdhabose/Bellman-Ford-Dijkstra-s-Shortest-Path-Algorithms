#include <bits/stdc++.h>  
using namespace std;  
#define MAX 0x3f3f3f3f
typedef pair<int, int> pairs_int;  
class Graph  
    {     
    list<pair<int, int>>* lst_adjacent; 
    int vertex;
public:  
    Graph(int vertex) 
    {  
        lst_adjacent = new list<pairs_int>[vertex];  
        this->vertex = vertex; 
    }  
    void edge_add(int u, int v, int w){  
    lst_adjacent[v].push_back(make_pair(u, w)); 
    lst_adjacent[u].push_back(make_pair(v, w)); 
    }   
    void shortestPathingraph(int source){   
    vector<int> distance(vertex, MAX); 
    distance[source] = 0; 
    int v,wt;
    priority_queue<pairs_int, vector<pairs_int>, greater<pairs_int>> priorityqueue;  
    priorityqueue.push(make_pair(0, source)); 
    while (!priorityqueue.empty()) { 
        int u = priorityqueue.top().second;  
        priorityqueue.pop();   
        list<pair<int, int>>::iterator it;  
        for (it = lst_adjacent[u].begin(); it != lst_adjacent[u].end(); ++it) {  
            wt = (*it).second;  
            v = (*it).first;    
            if (distance[v] > distance[u] + wt) {  
                distance[v] = distance[u] + wt;  
                priorityqueue.push(make_pair(distance[v], v));  
            }  
        }  
    }  
    printf("vertexertex \tDistance from Source\n");  
    for (int it = 0; it < vertex; ++it)  
        printf("%d \t\t %d\n", it, distance[it]);  
}  
};  

int main()  
{  
    int vertex = 9;  
    Graph graph(vertex);
    graph.edge_add(0, 7, 8); 
    graph.edge_add(0, 1, 4); 
    graph.edge_add(1, 7, 11);  
    graph.edge_add(1, 2, 8);
    graph.edge_add(2, 5, 4);
    graph.edge_add(2, 8, 2);  
    graph.edge_add(2, 3, 7);  
    graph.edge_add(3, 5, 14);
    graph.edge_add(3, 4, 9);  
    graph.edge_add(4, 5, 10);  
    graph.edge_add(5, 6, 2); 
    graph.edge_add(6, 8, 6);  
    graph.edge_add(6, 7, 1);  
    graph.edge_add(7, 8, 7);  
    graph.shortestPathingraph(0); 
    return 0;  
}  