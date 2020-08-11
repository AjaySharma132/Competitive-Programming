#include <bits/stdc++.h>
using namespace std;
int rev(int a)
{
    int rev = 0;
    while(a>0)
    {
        rev = (rev*10) + (a%10);
        a = a/10;
    }
return rev;
}
int main()
{
    int t,a,b,sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d", &a,&b);
        a = rev(a);
        b = rev(b);
        sum = a+b;
        sum = rev(sum);
        cout<<sum<<"\n";
    }
}
