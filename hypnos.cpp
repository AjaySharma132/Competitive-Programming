#include<bits/stdc++.h>
using namespace std;
# define MAX 1000000;

int happy(long long n,long long i)
{
   long long rem, sum=0,t;
   while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
    if(sum==0)
        return i;
    else
    {
        int a[MAX];
        a[i-1]=sum;
        i++;
        happy(sum,i);
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,i=1,t;
    cin>>n;
    t=happy(n,i);








    return 0;
}
