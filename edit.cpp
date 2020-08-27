#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define fo(i,n) for(i=0;i<n;i++)

int i,j;

int min_ele(int a, int b, int c)
{
	if(a<b)
	{
		if(a<c)
			return a;
		else
			return c;
	}
	else
	{
		if(b<c)
			return b;
		else
			return c;
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	string a,b;
    	cin>>a>>b;
    	int n=a.length();
    	int m=b.length();
    	int arr[m+1][n+1];
    	for(int j=0;j<=n;j++)
    		arr[0][j]=j;
    	for(int i=0;i<=m;i++)
    		arr[i][0]=i;
    	for(int i=0;i<=m;i++)
    		for(int i=0;i<=m;i++)
    			cout<<arr[i][j]<<" ";
    	cout<<"\n";
    	for(int i=1;i<=m;i++)
    	{
    		for(int j=0;j<=n;j++)
    		{
    			if(b[i-1]==a[j-1])
    				arr[i][j]=arr[i-1][j-1];
    			else
    			{
    				arr[i][j]=min_ele(arr[i-1][j],arr[i][j-1],arr[i-1][j-1]);
    			}
    		}
    	}

    	cout<<arr[m][n]<<"\n";
    }


    return 0;
}

