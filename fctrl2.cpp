#include<iostream>
using namespace std;
int main()
{
    int t,n,k,carry1,carry2;
    int fctrl[200]={0};
    fctrl[0]=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=2;j<=n;j++)
        {
            carry1=(fctrl[0]*j)/10;
            fctrl[0]=(fctrl[0]*j)%10;
            for(k=1;carry2>=1;k++)
            {
                carry2=((fctrl[k]*j)+carry2)/10;
                fctrl[k]=((fctrl[k]*j)+(if(k==1)?carry1:carry2))%10;



            }

        }
       cout<<k;
        for(int j=k-1;j>=0;j--)
            cout<<fctrl[j];
        cout<<"\n";
    }
    return 0;
}
