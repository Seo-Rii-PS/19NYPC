#include<bits/stdc++.h>

using namespace std;

int main()
{
    int f, n;
    scanf("%d %d", &f, &n);
    for(int i=0;i<n;++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==1) f-=b;
        if(a==2) f+=b;
        if(a==3) {
            printf("%d\n", f+b);
            return 0;
        }
    }
}
