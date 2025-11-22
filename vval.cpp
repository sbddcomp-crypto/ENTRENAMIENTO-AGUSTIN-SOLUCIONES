#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	vll A(n);
	vll P(n+1);
	forsn(i,0,n)
		cin>>A[i];
	P[0]=0;
	forsn(i,1,n+1)
		P[i]=P[i-1]+A[i-1];
	multiset<ll>S;
	ll may=LLONG_MIN;
	forsn(i,1,n+1)
	{
		if(i-a>=0)
			S.insert(P[i-a]);
		if(i-b-1>=0)
			S.erase(S.find(P[i-b-1]));
		if(!S.empty())
		{
			ll a = *S.begin();
			may=max(may,P[i]-a);
		}
	}
	cout<<may<<"\n";
	

	return 0;
}