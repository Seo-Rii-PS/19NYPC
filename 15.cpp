#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int>> v;
vector<int> g, s, w, l;

int gr(int p)
{
    if(g[p]==p) return p;
    return g[p];
}

void un(int a, int b)
{
    
}

int main()
{
    scanf("%d %d", &n, &m);
    g.resize(n);
    s.resize(n);
    v.resize(n);
    w.resize(n);
    l.resize(n);
    for(int i=0;i<m;++i) scanf("%d %d", &v[i].first, &v[i].second);
    for(int i=0;i<n;++i) g[i]=i;
    for(int i=0;i<m;++i) {
        ++w[v[i].first];
        ++l[v[i].second];
        
    }
}