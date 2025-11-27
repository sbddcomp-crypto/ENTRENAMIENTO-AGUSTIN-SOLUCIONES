#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>A(n);
		for(int i=0;i<n;i++)
			cin>>A[i];
		bool existe=next_permutation(A.begin(),A.end());
		if(!existe)
		{
			cout<<"-1\n";
		}
		else
		{
			for(int i=0;i<n;i++)
				cout<<A[i];
			cout<<"\n";
		}
	}
	return 0;
}