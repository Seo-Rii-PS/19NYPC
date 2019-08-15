#include<bits/stdc++.h>

using namespace std;

int n, ma;
vector<pair<int, int>>  v;
vector<int> d;

int main()
{
    scanf("%d", &n);
    v.resize(n);
    d.resize(n);
    for(int i=0;i<n;++i) {
        scanf("%d %d", &v[i].first, &v[i].second);
    }
    sort(v.begin(), v.end());
    ma=d[0]=v[0].second;
    for(int i=1;i<n;++i) {
        d[i]=v[i].second;
        for(int j=0;j<i;++j) {
            if(d[j]<v[i].first) d[i]=max(d[i], d[j]+v[i].second);
        }
        ma=max(ma, d[i]);
    }
    printf("%d\n", ma);
}