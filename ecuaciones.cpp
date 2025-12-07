#include<bits/stdc++.h>
using namespace std;
typedef long long tint;
#define forn(i,n) for(tint i=0;i<tint(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	tint n;
	cin>>n;
	vector<tint>A(n);
	vector<tint>X1;
	vector<tint>X2;
	forn(i,n)
		cin>>A[i];
	forn(i,n)
	{
		forn(j,n)
		{
			forn(k,n)
			{
				X1.push_back(A[i]*A[j]+A[k]);
			}
		}
	}
	forn(i,n)
	{
		if(A[i]!=0)
		{
			forn(j,n)
			{
				forn(k,n)
				{
					X2.push_back(A[i]*(A[j]+A[k]));
				}
			}
		}
	}
	sort(X1.begin(),X1.end());
	tint cont=0;
	forn(i,X2.size())
	{
		int k1 =lower_bound(X1.begin(),X1.end(),X2[i])-X1.begin();
		int k = upper_bound(X1.begin(),X1.end(),X2[i])-X1.begin();
			cont=cont+k-k1;
	}
	cout<<cont<<"\n";
	return 0;
}