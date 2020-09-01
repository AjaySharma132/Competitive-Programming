#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,sum=0;
        cin>>n;
        int men[n];
        int women[n];
        for(int i=0;i<n;i++)
        {
            cin>>men[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>women[i];
        }
        sort(men,men+n);
        sort(women,women+n);
        for(int i=0;i<n;i++)
        {
            sum=men[i]*women[i]+sum;
        }
        cout<<sum<<"\n";
    }
return 0;
}
