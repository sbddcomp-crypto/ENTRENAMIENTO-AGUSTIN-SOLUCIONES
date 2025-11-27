#include<bits/stdc++.h>
using namespace std;
int dp[10010];
#define forn(i,n) for(int i=0;i<int(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int cont=0;
	while(m>n)
	{
		if(m%2==0)
			m/=2;
		else
			m++;
		cont++;
	}
	cont+=(n-m);
	cout<<cont<<"\n";
	return 0;
}