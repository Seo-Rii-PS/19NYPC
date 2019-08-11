#include<bits/stdc++.h>

using namespace std;

int n, m;
vector< pair<int, int> > v;
vector<int> g, s, w, l, wg;
vector<vector<int> > li;

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
    g.resize(n+1);
    s.resize(n+1);
    v.resize(m+1);
    w.resize(n+1);
    l.resize(n+1);
    li.resize(n+1);
    for(int i=0;i<m;++i) scanf("%d %d", &v[i].first, &v[i].second);
    for(int i=0;i<=n;++i) g[i]=i;
    for(int i=0;i<m;++i) {
        ++w[v[i].first-1];
        ++l[v[i].second-1];
        un(v[i].first-1, v[i].second-1);
    }
    for(int i=0;i<=n;++i) {
        li[gr(i)].push_back(i);
    }
    for(int i=0;i<=n;++i) {
        if(!li[i].size()) continue;
        int pl=li[i][0];
        for(auto j:li[i]) {
            if(w[j]>w[pl]) pl=j;
            else if(w[j]==w[pl] && l[j]<l[pl]) pl=j;
        }
        if(wg.empty() || s[gr(wg[0])]==s[gr(pl)]) wg.push_back(pl);
        else if(s[gr(wg[0])]<s[gr(pl)]) {
            wg.clear();
            wg.push_back(pl);
        }
    }
    sort(wg.begin(), wg.end());
    printf("%d\n", wg[0]+1);
    printf("\n");
}