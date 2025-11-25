#include<bits/stdc++.h>
using namespace std;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long tint;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int A[n];
	int suma=0;
	forsn(i,0,n)
	{
		cin>>A[i];
		suma+=A[i];

	}
	vector<bool>Dp(suma+1,0);
	Dp[0]=true;
	forsn(i,0,n)
	{
		for(int j=suma;j>=A[i];j--)
		{
			if(Dp[j-A[i]])
				Dp[j]=true;
		}
	}
	set<int>X;
	forsn(i,1,suma+1)
	{
		if(Dp[i])
			X.insert(i);
	}
	cout<<X.size()<<"\n";
	for(auto u:X)
		cout<<u<<" ";
	cout<<"\n";
	return 0;
}