#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int>> v;
vector<int> g, s, w, l;

int gr(int p)
{
    if(g[p]==p) return p;
    return g[p]=gr(g[p]);
}

void un(int a, int b)
{
    a=gr(a);
    b=gr(b);
    if(a==b) return;
    if(s[a]<s[b]) swap(a, b);
    s[a]+=s[b]+1;
    g[b]=a; 
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
        un(v[i].first, v[i].second);
    }
}