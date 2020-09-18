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

int subMain()
{
    ll n,answer=0;
    cin>>n;
    vector<ll>xorsum;
    ll x;
    for(ll i=1;i<=20;i++)
    {
        cout<<1<<" "<<(1ul<<i)<<endl;
        cout.flush();
        cin>>x;
        xorsum.push_back(x);
    }
    reverse(xorsum.begin(),xorsum.end());
    ll sum=xorsum[0]-n*(1ul<<20);
    for(ll i=1;i<xorsum.size();i++)
    {
        if(xorsum[i]>=sum)
        {
            xorsum[i]=((n-(xorsum[i]-sum)/(1ul<<(xorsum.size()-i)))/2);
        }
        else
            xorsum[i]=(n+(sum-xorsum[i])/(1ul<<(xorsum.size()-i)))/2;
    }
    for(int i=1;i<xorsum.size();i++)
        if(xorsum[i]%2!=0)
            answer+=1ul<<(xorsum.size()-i);
        if(sum%2!=0)
            answer++;
        cout<<2<<" "<<answer<<endl;
        cout.flush();
        int result;
        cin>>result;
        return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        if(!subMain())
            break;
        cout<<endl;
        cout.flush();
    }





    return 0;
}

