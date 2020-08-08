#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int low=a[0],high=a[n-1],diff=high-low,curr,count=1;
		sort(a,a+n);
		while(dif--)
		{
			curr=low+diff;
			while(true)
			{
				if(binary_search(a,a+n,curr))
				{
					count++;
					curr+=diff;
				}
				else
				{
					if(curr>high)
					{
						if(count==k)
							goto p;
						else
							break;
					}
					else
					{
						for(int i=0;i<n;i++)
						{
							if(a[i]>curr)
							{
								curr=a[i]
								break;
							}

						}
					}
				}

			}
		}
		p:cout<<diff<<"\n";
	}

	return 0;
}
