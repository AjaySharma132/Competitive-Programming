#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,c=1;
    cin>>t;
    while(t--)
    {
    	long long n;
    	cin>>n;
    	long long a[n],dp[n];
    	for(long long i=0;i<n;i++)
    		cin>>a[i];
    	long long ans;
    	if(n==0)
    	{
    		cout<<"Case "<<c<<": "<<"0"<<"\n";
    		break;
    	}
    	else if(n==1)
    	{
    		cout<<"Case "<<c<<": "<<a[0]<<"\n";
    		break;
    	}
    	else if(n==2)
    	{
    		cout<<"Case "<<c<<": "<<max(a[0],a[1])<<"\n";
    		break;
    	}
		else
		{
			dp[0]=a[0];
			dp[1]=max(a[0],a[1]);
			for(long long i=2;i<n;i++)
			{
				dp[i]=max((dp[i-2]+a[i]),dp[i-1]);
			}
		}
		cout<<"Case "<<c<<": "<<dp[n-1]<<"\n";
    	c++;
    }


    return 0;
}
