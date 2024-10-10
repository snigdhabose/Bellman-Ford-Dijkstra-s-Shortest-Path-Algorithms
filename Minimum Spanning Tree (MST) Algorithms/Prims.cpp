#include <limits.h> 
#include <stdio.h>    
#define vts 7  
int findmin(int keys[], int mst[])    
{  
    int min  = INT_MAX, minkey;    
    for (int it = 0; it < vts; it++)  
    {
        if (mst[it] == 0 && keys[it] < min )   
        {
            min = keys[it];
            minkey = it; 
        }
    }
    return minkey;    
}    

void MSTPRIM(int graph[vts][vts])    
{    
    int keys[vts],anc[vts],MST[vts],c,e;
    for (int it = 0; it < vts; it++)  
    {  
        keys[it] = INT_MAX;  
        MST[it] = 0;    
    }  
    anc[0] = -1, keys[0] = 0;   
    for (c = 0; c < vts-1; c++)    
    {    
        e = findmin(keys, MST);    
        MST[e] = 1;    
        for (int it = 0; it < vts; it++)    
        {  
            if (graph[e][it] <  keys[it])    
            {  
                if(graph[e][it] && MST[it] == 0)
                {
                    anc[it]  = e, keys[it] = graph[e][it]; 
                }
            }  
        }  
     }    
     printf("\nMinimum spanning tree using Prims' Algorithm:\n");
     printf("\n   Edge \t      Weight\n");  
     for (int it = 1; it < vts; it++)  
     {
        printf(" %d <-> %d\t%d \n", anc[it], it, graph[it][anc[it]]);   
     }
      
}    
int main()    
{    
    int graph[vts][vts] = {{0, 0, 3, 0, 0, 0, 1},    
                           {0, 0, 10, 4, 0, 2, 1},    
                           {3, 10, 0, 2, 6, 5, 1},    
                           {0, 4, 2, 0, 1, 2, 1},    
                           {0, 0, 6, 1, 0, 3, 1},    
                          };   
    MSTPRIM(graph);    
    return 0;  
}  