#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)
ll mcd(ll a,ll b)
{
	if(b==0)
		return a;
	return mcd(b,a%b);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	ll A[n],B[m];
	forn(i,n)
		cin>>A[i];
	forn(j,m)
		cin>>B[j];
	ll D=0;
	forn(i,n)
	{
		ll dif = A[i]-A[0];
		if(dif<0)
			dif=-dif;
		D=mcd(D,dif);
	}
	forn(j,m)
	{
		if(j>0)
			cout<<" ";
		ll val = B[j]+A[0];
		ll res = mcd(val,D);
		cout<<res;
	}
	cout<<"\n";
	return 0;
}