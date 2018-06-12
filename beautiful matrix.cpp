#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, j, x, y,a[100][100],ans;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {

              cin>>a[i][j];
              if(a[i][j]==1)
              {
                  x=i;
                  y=j;
              }
        }
    }
    ans=abs(x-3)+abs(y-3);
    cout<<ans;
}
