#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	int a[MAX];
	for(int p=0;p<t;p++)
	{
	    int n,carry,temp,count=0;
	    memset(a,0,MAX);
	    a[0]=1;
	    for(int i=n;i>1;i--)
	    {
	        a[0]*=i;
	        carry=a[0]/10;
	        a[0]=a[0]%10;
	        if(carry>0)
	            count++;
	        for(int k=1;k<=count;k++)
	        {
	            a[k]*=i;
	            a[k]+=carry;
	            carry=a[k]/10;
	            a[k]=a[k]%10;
	            if(carry>0&&k==count)
	                count++;
	        }

	    }
	    for(int i=0;i<3;i++)
	    {
	        cout<<a[i];
	    }
	    cout<<"\n";

	}


	return 0;
}
