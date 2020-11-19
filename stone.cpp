#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
//mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
//	uniform_int_distribution<int> uid(0,lim-1);
//	return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

//const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

int max_value(int a, int b, int c)
{
    if(a>b)
    {
    	if(a>c)
    		return a;
    	else
    		return c;
    }
    else
    {
    	if(b>c)
    		return b;
    	else
    		return c;
    }
}

void solve() {
  int i, j, n, m;
  cin>>n>>m;
  int dp[n+2][m+2],arr[n][m];
  fo(i,n)
  {
  	fo(j,m)
  		cin>>arr[i][j];
  }

  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++)
  {
  	for(j=1;j<=m;j++)
  	{
  		int temp=max_value(dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]);
  		dp[i][j]=temp+arr[i-1][j-1];
  	}
  }
  int ans=dp[n][1];
    for(j=2;j<=m;j++)
    {
        if(dp[n][j]>ans)
            ans=dp[n][j];
    }
    cout<<ans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
//  base %= mod;
  int result = 1;
  while (exp > 0) {
//    if (exp & 1) result = ((ll)result * base) % mod;
//    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int cur, int par){
	for(int adj:g[cur]){
		if (adj == par) continue;
		dfs(adj, cur);
	}
}
