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
	    int n;
	    cin>>n;
	    int a[n], bag[n],counter=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(a[0]==5)
	    {
	        int j=0;
	        bag[j]=5;
	        for(int i=1;i<n;i++)
	        {

	            int diff=a[i]-5;
	            if(diff>0)
	            {
	                for(int k=0;k<=j;k++)
	                {
	                    if(diff==bag[k])
	                    {
	                        bag[k]=a[i];
	                        counter=1;
	                    }
	                    else
	                    {
	                        counter=0;
	                        goto p;
	                    }
	                }

	            }
	            else
	            {
	                j++;
	                bag[j]=a[i];
	                counter=1;
	            }
	        }
	    }
	p:  if(counter==0)
	        cout<<"NO"<<"\n";
	    else
	        cout<<"YES"<<"\n";
	}

	return 0;
}
