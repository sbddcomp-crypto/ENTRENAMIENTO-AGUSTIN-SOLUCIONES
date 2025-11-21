#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,q;
	cin>>n>>q;
	ll A[n];
	forn(i,n)
		cin>>A[i];
	ll P[n+1];
	P[0]=0;
	for(int i=1;i<=n;i++)
		P[i]=P[i-1]+A[i-1];
	forn(i,q)
	{
		int x,y;
		cin>>x>>y;
		cout <<P[y]-P[x-1]<<"\n";

	}
	return 0;
}