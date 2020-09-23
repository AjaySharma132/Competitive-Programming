#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int g,b;
    cin>>g>>b;
    while(g!=-1&&b!=-1)
    {
        int ans;
        if(g>=b)
        {
            if(b==0)
                ans=g;
            else if(b>=1&&b<(g-1)/2)
                ans=ceil((float)g/(b+1));
            else if(b>=(g-1)/2&&b<=g-2)
                ans=2;
            else
                ans=1;
        }
        else
        {
            if(g==0)
                ans=b;
            else if(g>=1&&g<(b-1)/2)
                ans=ceil((float)b/(g+1));
            else if(g>=(b-1)/2&&g<=b-2)
                ans=2;
            else
                ans=1;
        }
        cout<<ans<<"\n";
        cin>>g>>b;
    }
    return 0;
}
