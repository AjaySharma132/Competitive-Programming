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
#define deb(x) cout << #x << "=" << x << "\n"
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
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

// // Temporary macro
// #define int long long

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1000000007;
const int N = 3e5, M = N;
constexpr ll INF = 2e18;
//constexpr ld EPS = 1e-9;
//=======================
//=======================

vi g[N];
int a[N];

void preSolve()
{

}

void solve() {
 int i, j, n, m;
 cin>>n>>m;
 int arr[n];
 int brr[n];
 int crr[m];
 int ans[m];
 fo(i,n)
  cin>>arr[i];
 fo(i,n)
  cin>>brr[i];
 fo(i,m)
  cin>>crr[i];

 int counter=0;
 vi diff;
 int same=0;
 fo(i,n)
 {
   if(arr[i]!=brr[i])
   {
     counter++;
     diff.push_back(brr[i]);
   }
   else 
   same++;
 }
 if(counter>m)
 {
   cout<<"NO\n";
   return;
 }
 sort(crr,crr+m);
 sort(diff.begin(),diff.end());
 int size=diff.size();
 int temp=min(size,m);
 vi a;
 counter=0;
 j=0;
 fo(i,m)
 {
   if(crr[i]!=diff[j])
   {
     a.push_back(crr[i]);
     j++;
   }
   else
   {
     counter++;
   }
 }
 if(counter==temp)
 {
   cout<<"YES\n";
   return;
 }
 temp=a.size();
 sortall(a);
 sort(arr,arr+n);
 j=0;
 counter=0;
 fo(i,n)
 {
   if(arr[i]==a[j])
   {
     counter++;
     j++;
   }
 }
 if(j==temp)
 {
   cout<<"YES\n";
   return;
 }


 


}

int32_t main() {

    #ifndef ONLINE_JUDGE
		  freopen("input.txt", "r", stdin);
		  freopen("output.txt", "w", stdout);
	  #endif
    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    preSolve();

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
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

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}
