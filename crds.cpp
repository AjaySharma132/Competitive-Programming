#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        int n,m=1000007;
        long long c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            c=c+((i*2)+(i-1));
        }
        cout<<c%m<<"\n";
    }
    return 0;
}
