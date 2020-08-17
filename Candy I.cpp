#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    p:cin>>n;
    if(n==-1)
        exit(0);
    int a[n],sum=0,m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    float r=(float)sum/(float)n;
    if(r==(int)r)
    {
        for(int i=0;i<n;i++)
        {
            a[i]=r-a[i];
            if(a[i]>0)
                m+=a[i];
        }
        cout<<m<<endl;
    }
    else
        cout<<"-1\n";
    goto p;
    return 0;
}
