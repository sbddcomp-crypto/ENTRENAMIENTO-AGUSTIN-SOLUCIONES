#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> A(n+1);
    forn(i,m)
    {
        int x,y;
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x); 
    }

    queue<int> Q;
    vector<bool> visitado(n+1,false);
    vector<int> color(n+1,0); 
    for(int i=1;i<=n;i++)
    {
        if(!visitado[i])
        {
            Q.push(i);
            color[i]=1;
            visitado[i] = true;
            while(!Q.empty())
            {
                int val = Q.front();
                Q.pop();
                for(int u : A[val])
                {
                    if(color[u] == 0)
                    {
                        Q.push(u);
                        color[u] = 3 - color[val];
                        visitado[u] = true;       
                    }
                    else if(color[u] == color[val])
                    {
                        cout<<"IMPOSSIBLE\n";
                        return 0;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<color[i]<<" ";
    cout<<endl;
    return 0;
}
