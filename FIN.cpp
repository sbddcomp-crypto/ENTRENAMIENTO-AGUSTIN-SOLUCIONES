#include<bits/stdc++.h>
using namespace std;
typedef long long tint;
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	tint A[n];
	forsn(i,0,n)
		cin>>A[i];
	stack<tint>R;
	int i=0;
	tint mayp=0;
	while(i<n)
	{
		if(R.empty()||A[R.top()]<=A[i])
		{
			R.push(i);
			i++;
		}
		else
		{
			int tope = R.top();
			R.pop();
			int anch;
			if(R.empty())
				anch=i;
			else
			{
				anch=i-1-R.top();

			}
			mayp=max(mayp,A[tope]*anch);
		}
	}
	while(!R.empty())
	{
		int tope = R.top();
			R.pop();
			int anch;
			if(R.empty())
				anch=i;
			else
			{
				anch=i-1-R.top();

			}
			mayp=max(mayp,A[tope]*anch);
	}
	cout<<mayp<<"\n";
	return 0;
}