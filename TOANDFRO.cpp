#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            exit(0);
        int e=0,i,j,k=0;
        string a;
        cin>>a;
        int l=a.length();
        char a1[l/n][20];
        for(i=0;i<l;i++)
        {
            if(e==0)
            {
                for(j=0;j<n;j++)
                {
                    a1[k][j]=a[i];
                    i++;
                }
                e++;
                k++;
            }
            else
            {
                for(j=n-1;j>=0;j--)
                {
                    a1[k][j]=a[i];
                    i++;
                }
                e=0;
                k++;
            }
            i--;
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<l/n;i++)
                cout<<a1[i][j];
        }
    cout<<"\n";
    }
    return 0;
}
