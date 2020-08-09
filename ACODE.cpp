#include <iostream>
#include<bits/stdc++.h>
#define MAX 5002
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// your code goes here
	string s;
	int dp[MAX];
	int n;
	while(true)
    {
        getline(cin,s);
        if(s.compare("0")==0)
            exit(0);
        else
        {


            dp[0]=dp[1]=1;
            n = s.length();

            for(int i=2;i<=n;i++)
            {
                dp[i]=dp[i-1];
                int x = (s[i-2]) * 10 + (s[i-1]);

                if(x>=10&&x<=26)
                {
                    dp[i]+=dp[i-2];
                }
            }
            cout<<dp[n]<<"\n";
        }
    }
	return 0;
}
