#include<bits/stdc++.h>

using namespace std;

long long int getSumFrom1(long long int f)
{
    long long int s=0;
    for(long long int i=1;i<=f;++i) s+=f/i;
    return s;
}

int main()
{
    long long int s, f;
    scanf("%lld %lld", &s, &f);
    printf("%lld\n", getSumFrom1(f)-getSumFrom1(s-1));
}