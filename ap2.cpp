#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long c,th,sum,n,d,a;
		cin>>c>>th>>sum;
		n=(sum*2)/(c+th);
		d=(th-c)/(n-5);
		a=c-(2*d);
		cout<<n<<"\n";
		cout<<a<<" ";
		for(int i=1;i<n;i++)
		{
			cout<<a+(i*d)<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
