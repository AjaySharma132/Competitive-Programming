
#include <bits/stdc++.h>
using namespace std;

string subtract(string s1, string s2)
{
    string result="";
    int temp,carry=0;
    int n1=s1.length();
    int n2=s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0;i<n2;i++)
    {
        temp=((s1[i]-'0')-(s2[i]-'0')-carry);
        if(temp<0)
        {
            temp+=10;
            carry=1;
        }
        else
        {
            carry=0;
        }
        result.push_back(temp+'0');
    }
    for(int i=n2;i<n1;i++)
    {
        temp=((s1[i]-'0')-carry);
        if(temp<0)
        {
            temp+=10;
            carry=1;
        }
        else
        {
            carry=0;
        }
        result.push_back(temp+'0');
    }
    reverse(result.begin(),result.end());
    return result;
}

string divide(string s, int t)
{
    string result="";
    int n=s.length();
    int temp=(s[0]-'0'),idx=0;
    while(temp<t)
    {
        temp=temp*10+(s[++idx]-'0');
    }
    int rem;
    while(idx<n)
    {
        rem=temp/t;
        result.push_back(rem+'0');
        temp=((temp%t)*10+(s[++idx]-'0'));
    }
    if(result.length()==0)
    {
        return "0";
    }
    return result;
}



int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=10;
	while(t--)
    {
        string n,more,klaudia,natalia,temp;
        cin>>n>>more;
        temp=subtract(n,more);
        natalia=divide(temp,2);
        klaudia=subtract(n,natalia);
        int l=klaudia.length(),counter=0;
        for(int i=0;i<l;i++)
        {
            if(klaudia[i]!='0')
                break;
            else
                counter++;
        }
        klaudia.erase(0,counter);

        cout<<klaudia<<"\n"<<natalia<<"\n";
    }

	return 0;
}
