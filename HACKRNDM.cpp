#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define fo(i,n) for(i=0;i<n;i++)
#define si(x)	scanf("%d",&x)
#define pi(x)	printf("%d\n",x)

int i,j;
int euclid_gcd(int a, int b)
{
    return a==0?b:euclid_gcd(b%a,a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    si(n);
    si(k);
    int arr[n];
    fo(i,n)
    {
    	si(arr[i]);
    }
    int ct=0;
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(abs(arr[j]-arr[i])==k)
    			ct++;
    		else if(abs(arr[j]-arr[i])>k)
    			break;
    	}
    }
    pi(ct);


    return 0;
}

