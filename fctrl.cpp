#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,c,fact;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        c=0,fact=1;
        cin>>a;
        for(int j=a;j>0;j--)
        {
            fact *= j;
        }
        while((fact%10) == 0)
        {
            ++c;
            fact /= 10;
        }
        cout<<c<<"\n";
    }
    return 0;
}
