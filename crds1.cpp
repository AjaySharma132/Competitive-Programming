#include<bits/stdc++.h>
using namespace std;
int cards(int n)
{
    int ans;
    if(n==1)
        return 2;
    else
        ans=cards(n-1)+((n*2)+(n-1));
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        c=cards(n);
        cout<<c<<"\n";
    }
    return 0;
}
