#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long tint;
#define ALL(c) begin(c),end(c)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	tint A[n];
	vector<tint>P(n+1);
	P[0]=0;
	forn(i,n)
		cin>>A[i];
	forsn(i,1,n+1)
		P[i]=P[i-1]+A[i-1];
	tint cont=0;
	vector<tint>PR(n+1,0);
	forsn(i,0,n+1)
	{
		if(P[i]<0)
			P[i]=(P[i]%n+n)%n;
		PR[P[i]%n]++;
	}
	forn(i,n)
	{
		tint val = PR[i];
		cont=cont+val*(val-1)/2;
	}
	cout<<cont<<"\n";
	return 0;
}