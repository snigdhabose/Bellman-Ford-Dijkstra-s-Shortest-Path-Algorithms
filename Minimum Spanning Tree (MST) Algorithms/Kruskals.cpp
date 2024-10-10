#include <algorithm>    
#include <iostream>    
using namespace std; 
const int MAX = 5+ 1e4; 
pair <long long, pair<int, int> > pairs[MAX]; 
int n, e, g[MAX];   
   
int root(int d)    
{    
    while(d != g[d])    
    {    
        g[d] = g[g[d]];    
        d = g[d];    
    }    
    return d;    
}  
void merge(int a, int b)    
{    
    int qt = root(b); 
    int pairs = root(a);    
    g[pairs] = g[qt];    
}     
long long MST(pair<long long, pair<int, int> > pairs[])    
{    
    long long cost, mincost = 0; 
    int a, b;
    for(int it = 0;it < e;it++)    
    {    
        cost = pairs[it].first; 
        b = pairs[it].second.second;   
        a = pairs[it].second.first;    
        if(root(a) != root(b))    
        {    
            mincost += cost;    
            merge(a, b);    
        }        
    }    
    return mincost;    
}  
void setg()    
{    
    for(int it = 0;it< MAX;it++)  
    {
        g[it] = it;    
    }
}     
int main()    
{    
    long long wt, cost, mincost;    
    int x, y;
    cout <<"Please give nodes & edges";    
    cin >> n >> e;   
    setg();
    for(int it = 0;it < e;it++)    
    {    
        cout<<"Please give X, Y & weight of edge";    
        cin >> x >> y >> wt;    
        pairs[it] = make_pair(wt, make_pair(x, y));    
    }    
    sort(pairs, pairs + e);    
    mincost = MST(pairs);    
    cout <<"Using Kruskals' Algorithm, minimum cost is: "<< mincost << endl;    
    return 0;    
}  