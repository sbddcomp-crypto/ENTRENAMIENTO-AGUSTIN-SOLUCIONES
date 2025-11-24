#include<bits/stdc++.h>
using namespace std;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    int A[n],B[n];
    for(int i=0;i<n;i++)
    	cin>>A[i];
    for(int i=0;i<n;i++)
    	cin>>B[i];
    vector<int>dp(x+1,0);
    for(int i=0;i<n;i++)
    {
    	for(int j=x;j>=A[i];j--)
    	{
    		dp[j]=max(dp[j],dp[j-A[i]]+B[i]);
    	}
    }
    cout<<dp[x]<<"\n";
    return 0;
}
