#include<iostream>
using namespace std;
int main()
{
    int t,n,carry,res_size;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        res_size=1;
        int fctrl[200]={ 0 };
        fctrl[0]=1;
        cin>>n;
        for(int j=2;j<=n;j++)
        {
            carry=0;
            for(int k=0;k<res_size;k++)
            {
                int a=1;
                a=j*fctrl[k]+carry;
                fctrl[k]=a%10;
                carry=a/10;
            }
            while(carry)
            {
                fctrl[res_size]=carry%10;
                carry=carry/10;
                res_size++;
            }
        }
        for(int j=res_size-1;j>=0;j--)
        {
            cout<<fctrl[j];
        }
        cout<<"\n";

    }
    return 0;
}
