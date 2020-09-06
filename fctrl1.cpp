#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,c;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        c=0;
        cin>>n;
        for(int i=1;(n/pow(5,i))>=1;i++)
        {
            c+=n/pow(5,i);
        }
        cout<<c<<"\n";
    }
}
