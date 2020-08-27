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
	    long long ts,n=0,counter=0,temp;
	    cin>>ts;
	    temp=ts;
	    if(ts%2==0)
	    {
	        while(temp%2==0)
	        {
	           temp=temp/2;
	            n++;
	        }
	        n=n+1;
	        while(pow(2,n)<=ts)
	        {
	            counter++;
	            n++;
	        }
	    }
	    else
	    {
	        counter=ts/2;
	    }
	    cout<<counter<<"\n";
	}

	return 0;
}
