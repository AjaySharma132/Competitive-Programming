/*
ID : ajay01
TASK : gift1
LANG : C++
*/
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    int N, n, money;
    char giver[20], reciever[20];
    ifstream fin ("gift1.in");
    ofstream fout ("gift1.out");
    fin >> N;
    string name[N];
    int account[N];
    for( int i=0; i<N; i++)
    {
        fin >> name[i];
        account[i] = 0;
    }
    for( int i=0; i<N; i++)
    {
        fin >> giver;
        fin >> money;
        fin >> n;
        for(int j=0; j<N; j++)
        {
            if(giver == name[j])
            {
                if(n !=0 )
                {
                    account[j] -= money;
                    account[j] += money%n;
                }
            }
        }
        for( int j=0; j<n; j++)
        {
            fin >> reciever;
            for(int k=0; k<N; k++)
            {
                if(reciever == name[k])
                {
                    account[k] += money/n;
                }
            }
        }
    }
    for(int i=0; i<N; i++)
        fout << name[i] << " " << account[i] << "\n";
return 0;
}
