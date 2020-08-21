#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
      string str;
      cout<<"\n";
      long long n;
      cin>>n;
      long long a[n];
      for(long long i=0;i<n;i++)
      {
        cin>>a[i];
      }
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=a[i]%n;
      }
      if(sum%n==0)
      {
        str="YES";
      }
      else
        str="NO";
      cout<<str;
    }

    return 0;
}

