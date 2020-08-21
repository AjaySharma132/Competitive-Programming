#include<bits/stdc++.h>
using namespace std;
map <int ,long long >a;
long long max_dollar(int n)
{
    if(n<12)
        return n;
    if(a.count(n))
        return a[n];
    if(n<(n/2+n/3+n/4))
    {   a[n]=max_dollar(n/2)+max_dollar(n/3)+max_dollar(n/4);
        return a[n];
    }
    else
        return n;
}
int main()
{
    int n;
    long long amt;
    while(cin>>n)
    {
        amt=max_dollar(n);
        cout<<amt<<"\n";
    }
}
