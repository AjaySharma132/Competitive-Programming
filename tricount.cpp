#include<bits/stdc++.h>
using namespace std;
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
int main()
{ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
long long ans=1;
for(int i=2;i<=n;i++)
{ans=ans+mpow(2,i);}
cout<<ans<<"\n";
}
return 0;}
