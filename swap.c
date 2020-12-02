#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define fo(i,n) for(i=0;i<n;i++)

typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;



int i,j;
int euclid_gcd(int a, int b)
{
    return a==0?b:euclid_gcd(b%a,a);
}

ll findpos(ll sum)
{
    long double ans=sqrtl(1ul+4*(sum));
    ans=ans-1.0;
    ans=ans/2.0;
    ll finalAns=ans;
    return finalAns;
}

void submain()
{
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2!=0)
    {
        cout<<0;
        return;
    }


    ll x=findpos(sum);
    ll subsum=x*(x+1)/2;
    if(sum/2==subsum)
    {
        ll result=(x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
        cout<<result;
    }
    else
    {
        cout<<n-x;

    }

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        submain();
        cout<<"\n";
    }




    return 0;
}
