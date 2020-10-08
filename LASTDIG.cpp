#include<bits/stdc++.h>
using namespace std;
int last_digit(int a, long long b){
if(a==0||a==1||a==5||a==6||a==10||a==11||a==15||a==16||a==20){if(b==0)return 1;return a%10;}
else
{if(a%10==2)
{if(b==0)return 1;int arr[]={6,2,4,8};b=b%4;return arr[b];}
if(a%10==3){int arr[]={1,3,9,7};b=b%4;return arr[b];}
if(a%10==4){
if(b==0)return 1;int arr[]={6,4};b=b%2;return arr[b];}
if(a%10==7){int arr[]={1,8,9,3};b=b%4;return arr[b];}
if(a%10==8){if(b==0)return 1;int arr[]={6,8,4,2};b=b%4;return arr[b];}
if(a%10==9){
int arr[]={1,9};
b=b%2;
return arr[b];}}}
int main(){int t;cin>>t;
for(int i=0;i<t;i++){int a;long long b;cin>>a>>b;int l=last_digit(a,b);cout<<l<<"\n";}}
