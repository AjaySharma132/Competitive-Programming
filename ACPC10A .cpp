#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cd1,cd2;
    float cr1,cr2;
    p:scanf("%d %d %d",&a,&b,&c);
    if(a == 0 && b == 0 && c == 0)
        exit(0);

    cd1=b-a;
    cd2=c-b;
    if(cd1==cd2)
    {
        if(cd1==0)
            goto g;
        cout<<"AP "<<c+cd1<<"\n";
        goto i;
    }
    g:cr1=(float)b/(float)a;
    cr2=(float)c/(float)b;
    if(cr1==cr2)
    {
        cout<<"GP "<<c*cr1<<"\n";
    }
    i:goto p;

}
