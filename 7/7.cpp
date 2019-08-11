#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, b, c[15]={0}, bu=0;
    scanf("%d %d %d", &n, &m, &b);
    for(int i=0;i<m;++i) {
        int to, ca;
        scanf("%d %d", &to, &ca);
        if(ca) {
            if(c[b]) --c[b];
            else bu+=1;
            ++c[to];
        }
        b=to;
    }
    printf("%d\n", bu);
}
