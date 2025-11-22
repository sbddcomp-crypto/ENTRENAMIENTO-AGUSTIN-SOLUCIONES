#include<bits/stdc++.h>
using namespace std;
typedef long long tint;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	tint x;
	cin>>n>>x;
	tint A[n];
	tint P[n+1];
	P[0]=0;
	forsn(i,0,n)
		cin>>A[i];
	forsn(i,1,n+1)
		P[i]=P[i-1]+A[i-1];
	int li=0,ls=1;
	int cont=0;
	while(li<ls && ls<=n)
	{
		if(P[ls]-P[li]<x)
			ls++;
		else if(P[ls]-P[li]>x)
		{
			li++;
			if(li==ls)
				ls++;
		}
		else
		{
			cont++;
			ls++;
		}

	}
	cout<<cont<<"\n";
	return 0;
}