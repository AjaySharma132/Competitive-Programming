#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define fo(i,n) for(i=0;i<n;i++)

int i,j;
int euclid_gcd(int a, int b)
{
    return a==0?b:euclid_gcd(b%a,a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	fo(i,n)
    	{
    		cin>>arr[i];
    	}
    	int req=n/2;
    	sort(arr,arr+n);
    	int len=0;
    	int max_len=0,ele;
    	for(i=1;i<n;i++)
    	{
    		if(arr[i]==arr[i-1])
    		{
    			len++;
    		}
    		else
    		{
    			if(len>max_len)
    			{
    				max_len=len;
    				ele=arr[i-1];
    			}
    			len=0;
    		}
    	}
    	deb(max_len);
    	if(max_len>req)
    	{
    		cout<<"YES "<<ele<<"\n";
    	}
    	else
    		cout<<"NO\n";
    }
    return 0;
}

