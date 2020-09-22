#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    int counter=1;
    string r;
    int n=s.length();
    cout<<n<<endl;
    for(int i=n-1,j=0;i>=0;i--,j++)
        r[j]=s[i];
    cout<<r<<endl;
    for(int i=0;i<n;i++)
    {
        if(abs(s[i]-s[i+1])==abs(r[i]-r[i+1]))
            counter++;
    }
    cout<<counter;
    if(n==counter)
        return "Funny";
    else
        return "Not Funny";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
