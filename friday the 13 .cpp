/*
ID : ajay01
TASK : friday
LANG : C++
*/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int week_days[7] = {0, 0, 0, 0, 0, 0, 0};
    int days = 0;
    int n;
    fin >> n;
    for(int i = 1900; i<(1900 + n); i++)
    {
        if((i % 400) == 0 || (i%4) == 0 && (i%100) != 0)
        {
            days_in_months[1] = 29;
        }
        else
            days_in_months[1] = 28;
        for(int j = 0; j < 12; j++)
        {
            for(int k = 0; k < days_in_months[j]; k++)
            {
                if(k == 12)
                    week_days[days]++;
                if(days == 6)
                    days = 0;
                else
                    days++;
            }
        }
    }
fout << week_days[5] <<" "<< week_days[6] <<" "<< week_days[0] <<" "<< week_days[1] <<" "<< week_days[2] <<" "<< week_days[3] <<" "<< week_days[4]<<"\n" ;
return 0;
}
