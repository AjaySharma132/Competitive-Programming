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

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";

    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";

    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
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

string doSum(string a, string b)
{
    if(a.size() < b.size())
        swap(a, b);

    int j = a.size()-1;
    for(int i=b.size()-1; i>=0; i--, j--)
        a[j]+=(b[i]-'0');

    for(int i=a.size()-1; i>0; i--)
    {
        if(a[i] > '9')
        {
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9')
    {
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}
