#include <iostream>
using namespace std;

struct CHPt
{
        int x,y;
};
int init(CHPt p, CHPt q, CHPt r)
{
    int d= (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (d== 0)
        return 0;
    if(d>0)return 1;
    else return 2;
}
void impl_CH(CHPt CHPts[], int n)
{
    if (n < 3)
        return;
    int nxt[n];
    for (int it = 0; it < n; it++){
        nxt[it] = -1;
	}
    int l = 0;
    for (int it = 1; it < n; it++){
        if (CHPts[it].x < CHPts[l].x){
            l = it;
	}
	}
    int q,p = l;
    do
    {
        q = (p + 1) % n;
        for (int it = 0; it < n; it++){
            if (init(CHPts[p], CHPts[it], CHPts[q]) == 2){
                q = it;
	}
	}
        nxt[p] = q;
        p = q;
    }
    while (p != l);
    for (int it = 0; it < n; it++)
    {
        if (nxt[it] != -1)
            cout << "(" << CHPts[it].x << ", " << CHPts[it].y << ")\n";
    }
}
int main()
{
    CHPt CHPts[] = { { 0, 3 }, { 2, 2 }, { 1, 1 }, { 2, 1 }, { 3, 0 },{ 0, 0 }, { 3, 3 } };
    cout << "The convex hull points are: ";
    int n = sizeof(CHPts) / sizeof(CHPts[0]);
    impl_CH(CHPts, n);
    return 0;
}
