#include<bits/stdc++.h>
using namespace std;
typedef long long tint;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<vector<int>>A(n+1);
	forsn(i,0,m)
	{
		int x,y;
		cin>>x>>y;
		A[x].push_back(y);
		A[y].push_back(x);
	}
	queue<int>Q;
	Q.push(1);
	vector<bool> visited(n+1, false);
	visited[1] = true;

	vector<int>P(n+1,-1);
	P[1]=0;
	vector<int>Padre(n+1,-1);
	Padre[1]=1;
	while(!Q.empty())
	{
		int val = Q.front();
		Q.pop();
			for(auto u:A[val])
			{
				if(!visited[u])
				{
					Q.push(u);
					visited[u]=true;
					P[u]=P[val]+1;
					Padre[u]=val;

				}

			}
	}
	if(P[n]==-1)
		cout<<"IMPOSSIBLE\n";
	else
	{
		stack<int>V;
		cout<<P[n]+1<<"\n";
		int x=n;
		while(x!=1)
		{
			V.push(x);
			x=Padre[x];
		}
		cout<<1<<" ";
		while(!V.empty())
		{
			cout<<V.top()<<" ";
			V.pop();
		}
		cout<<"\n";
	}
	return 0;
}