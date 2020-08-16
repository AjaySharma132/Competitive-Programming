#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    while(t--)
    {
        cout<<"\n";
        int ng,nm;
        cin>>ng>>nm;
        int g[ng],m[nm];
        for(int i=0;i<ng;i++)
        {
            cin>>g[i];
        }
        for(int i=0;i<nm;i++)
        {
            cin>>m[i];
        }
        sort(g,g+ng);
        sort(m,m+nm);
        if(g[ng-1]>=m[nm-1])
        {
        	cout<<"Godzilla\n";
        }
        else
        {
        	cout<<"MechaGodzilla\n";
        }
        cout<<g[ng-1]<<" "<<m[nm-1]<<"\n";
        return 0;
    }






}

