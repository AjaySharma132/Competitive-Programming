#include<bits/stdc++.h>
using namespace std;
vector <int> adj[100001];
int visited[100001];
int counter=0;
void dfs(int s,int n)
{
	if(visited[s])
	{
		return;
	}
	visited[s]=1;
	counter++;
	for(auto u: adj[s])
	{
		dfs(u,n);
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int t=m;
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    	adj[a].push_back(b);
    	adj[b].push_back(a);
    }
    for(int i=0;i<=n;i++)
		visited[i]=0;
	dfs(1,n);
	//cout<<counter;
	if((counter==n) && ((m+1)==n))
		cout<<"YES\n";
	else
		cout<<"NO\n";
    return 0;
}
