#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,k,q;
	cin>>n>>k>>q;
	vector<int>A(200010,0);
	forn(i,n)
	{
		int li,ri;
		cin>>li>>ri;
		A[li]++;
		A[ri+1]--;
	}
	int P[200010];
	P[0]=0;
	int suma=0;
	forn(i,200002)
	{
		suma+=A[i];
		P[i]=suma;
	}
	forn(i,200002)
	{
		if(P[i]>=k)
			P[i]=1;
		else
			P[i]=0;
	}

	int FIN[200010];
	FIN[0]=0;
	suma=0;
	forn(i,200003)
	{
		suma+=P[i];
		FIN[i]=suma;
	}
	forn(i,q)
	{
		int x,y;
		cin>>x>>y;
		cout<<FIN[y]-FIN[x-1]<<"\n";
	}	
	return 0;
}