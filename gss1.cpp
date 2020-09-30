#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define fo(i,n) for(i=0;i<n;i++)
#define N 100000
#define MAX 400000
int arr[N];
struct node
{
	long long pre,suf,tot,bst;
	void merge(node left, node right)
	{
		pre=max(left.pre,left.tot+right.pre);
		suf=max(right.suf,right.tot+left.suf);
		tot=left.tot+right.tot;
		bst=max(left.suf+right.pre,max(left.bst,right.bst));
	}

}seg[MAX];

void build(int node1, int a, int b)
{
	if(a>b)
		return;
	if(a==b)
	{
		seg[node1].pre=seg[node1].suf=seg[node1].tot=seg[node1].bst=arr[a];
		return;
	}
	int mid=(a+b)/2;
	build(2*node1,a,mid);
	build(2*node1+1,mid+1,b);
	seg[node1].merge(seg[2*node1],seg[2*node1+1]);
}

node query(int node1, int a, int b, int p, int q)
{
	node ans;
	ans.pre=ans.suf=ans.tot=ans.bst=INT_MIN;
	if(a>b || a>q || b<p) return ans;

	if(a>=p&&b<=q)
	{
		return seg[node1];
	}
	int mid=(a+b)/2;
	ans.merge(query(2*node1,a,mid,p,q),query(2*node1+1,mid+1,b,p,q));
	return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int i;
    fo(i,n)
    	cin>>arr[i];
    build(1,0,n-1);
    int m;
    cin>>m;
    while(m--)
    {
    	int p,q;
    	cin>>p>>q;
    	cout<<query(1,0,n-1,p-1,q-1).bst<<"\n";
    }



    return 0;
}

