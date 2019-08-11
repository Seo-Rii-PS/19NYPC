#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, mi=INT_MAX;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i=0;i<n;++i) scanf("%d", &v[i]);
    for(int i=0;i<n;++i) {
        scanf("%d", &t);
        if(t) mi=min(mi, v[i]/t);
    }
    printf("%d", mi);
}
