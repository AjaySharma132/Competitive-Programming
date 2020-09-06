#include<iostream>
using namespace std;
int c;
void trailing_zeroes(int n)
{
    for(int i=0;(n/5)>=1;i++)
    {
        c+=n/5;
        n=n/5;
    }
    cout<<c<<"\n";
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        c=0;
        cin>>n;
        trailing_zeroes(n);
    }
}
