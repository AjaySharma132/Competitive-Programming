/*
ID : ajay01
TASK : ride
LANG : C++
*/
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int convert(char);
int main()
{
    int n, p1=1, p2=1;
    char comet[6];
    char group[6];
    ifstream fin ("ride.in");
    ofstream fout ("ride.out");
    fin>> comet;
    fin >> group;
    for(int i=0; i<strlen(comet); i++)
    {

        n = convert(comet[i]);
        p1 *= n;
    }
    for(int i=0; i<strlen(group); i++)
    {
        n=0;
        n = convert(group[i]);
        p2 *= n;
    }
    if( (p1 % 47) == (p2 % 47) )
        fout<<"GO\n";
    else
        fout<<"STAY\n";
return 0;
}
int convert(char ch)
{
    if(isupper(ch))
        return (int(ch)%64);
    return (int(ch)%96);
}
