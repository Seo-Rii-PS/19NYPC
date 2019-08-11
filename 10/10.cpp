#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;

int main()
{
    int n, e, c=1, ma, mi;
    scanf("%d %d", &n, &e);
    v.resize(n);
    for(int i=0;i<n;++i) scanf("%d %d", &v[i].first, &v[i].second);
    sort(v.begin(), v.end());
    ma=mi=v[0].second;
    for(int i=1;i<n;++i) {
        ma=max(ma, v[i].second);
        mi=min(mi, v[i].second);
        if(ma-mi>e*2) {
            ++c;
            ma=mi=v[i].second;
        }
    }
    printf("%d\n", c);
}