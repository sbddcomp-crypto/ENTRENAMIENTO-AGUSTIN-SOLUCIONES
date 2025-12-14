#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<int(n);i++)
class UFDS
{
private:
	vector<int>A;
	vector<int>TAM;
	int conexos;
	int maytam;
public:
	UFDS(int n)
	{
		A.resize(n+1);
		TAM.resize(n+1);
		forn(i,n+1)
		{
			TAM[i]=1;
			A[i]=i;
		}
		conexos=n;
		maytam=1;
	}
	int find(int i)
	{
		if(A[i]==i)
			return i;
		return A[i]=find(A[i]);
	}
	void unir(int i,int j)
	{
		int x=find(i);
		int y=find(j);
		if(x!=y)
		{
			if(TAM[x]<TAM[y])
				swap(x,y);

			TAM[x]+=TAM[y];
			A[y]=x;
			conexos--;
			maytam=max(maytam,TAM[x]);

		}
	}
	int cantcon()
	{
		return conexos;
	}
	int Rango(int x)
	{
		return TAM[x];
	}
	int tammax()
	{
		return maytam;
	}

};
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	UFDS UF(n);
	int m;
	cin>>m;
	forn(i,m)
	{
		int x,y;
		cin>>x>>y;
		UF.unir(x,y);
		cout<<UF.cantcon()<<" "<<UF.tammax()<<"\n";

	}
	return 0;
}