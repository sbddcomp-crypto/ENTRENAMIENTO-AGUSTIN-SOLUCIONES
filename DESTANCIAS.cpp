#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string x,y;
	cin>>x>>y;
	x = ' '+x;
	y = ' '+y;
	int dp[x.size()][y.size()];
	for(int i=0;i<x.size();i++)
		dp[i][0]=i;
	for(int j=0;j<y.size();j++)
		dp[0][j]=j;
	for(int i=1;i<x.size();i++)
	{
		for(int j=1;j<y.size();j++)
		{
			if(x[i]==y[j])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=min(dp[i-1][j-1]+1,min(
							 dp[i-1][j]+1,
							 dp[i][j-1]+1));
		}
	}
	cout<<dp[x.size()-1][y.size()-1]<<"\n";
	return 0;
}