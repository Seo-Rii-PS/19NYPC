#include<bits/stdc++.h>

using namespace std;

int n, arr[1005][1005], k;
pair<int, int> f[1000005];

void fill1()
 {
   int i;
   int num = 1;
   int m = n;
   int x = 1, y = 0;

   while (m > 0) {
     for (i = 1; i <= m; i++){
       y++;
       f[num]=make_pair(x, y);
       arr[x][y] = num++;
     }
     m--;
     for (i = 1; i <= m; i++){
       x++;
       f[num]=make_pair(x, y);
       arr[x][y] = num++;
     }
     for (i = 1; i <= m; i++){
       y--;
       f[num]=make_pair(x, y);
       arr[x][y] = num++;
     }
     m--;
     for (i = 1; i <= m; i++){
       x--;
       f[num]=make_pair(x, y);
       arr[x][y] = num++;
     }
   }
 }

int main()
{
    scanf("%d %d", &n, &k);
    fill1();
    printf("%d %d", f[k].second, f[k].first);
}
